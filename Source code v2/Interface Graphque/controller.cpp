#include "controller.h"
#include "link.h"
#include <string>
#include <msclr\marshal_cppstd.h>

string Controller::SQL_check(string request) {
	// check if there is an attempt to do an SQL injection

	// create a temporary string to check for forbidden  in lower case
	string temp = request;
	transform(temp.begin(), temp.end(), temp.begin(), ::tolower);

	// check for forbidden words
	for (int i = 0; i < count(forbidden_words.begin(), forbidden_words.end(), ','); i++) {
		if (temp.find(forbidden_words.substr(0, forbidden_words.find(","))) != string::npos) {
			return "error:SQL_injection:forbidden_word (Nuh uh)"; // il est chokbar
		}
		forbidden_words = forbidden_words.substr(forbidden_words.find(",") + 1);
	}


	// check for forbidden characters
	for (int i = 0; i < forbidden_characters.length(); i++) {
		if (temp.find(forbidden_characters[i]) != string::npos) {
			return "error:SQL_injection:forbidden_character (Nuh uh)"; // il est chokbar
		}
	}

	return "ok";
}



System::Data::DataSet^ Controller::Table(System::String^ request_) {
	//						   arg1   :  arg2 :  arg3(param1,param2,...)
	// normalized request : table:command:parameters
	// exemple : staff:delete:cailloux,rock (delete staff name rock cailloux)

	// convert System::String to std::string
	string request = msclr::interop::marshal_as<std::string>(request_);

	// check if there is an attempt to do an SQL injection
	string SQL_chokbar = SQL_check(request);
	if (SQL_chokbar != "ok") {
		return; // il est chokbar
	}



	//check request by checking if there is 2 ':' (3 arguments)
	int argument_number = count(request.begin(), request.end(), ':') + 1;
	if (argument_number != 3) {
		return ; // il est chokbar
	}
	// split request
	string table = request.substr(0, request.find(":"));
	string command = request.substr(request.find(":") + 1, request.find(":", request.find(":") + 1) - request.find(":") - 1);
	string parameters = request.substr(request.find(":", request.find(":") + 1) + 1);


	// check if none is empty
	if (table.empty() || command.empty() || parameters.empty()) {
		return; // il est chokbar
	}


	link link;

	return link.hub(table, command, parameters);
}



System::Data::DataSet^ Controller::Stats(System::String^ request_) {
	//						  arg1 :  arg2(param1,param2,...)
	// normalized request : command:parameters
	// exemple : total_purchases:cailloux (get total purchases of user cailloux)

	// convert System::String to std::string
	string request = msclr::interop::marshal_as<std::string>(request_);

	// check if there is an attempt to do an SQL injection
	string SQL_chokbar = SQL_check(request);
	if (SQL_chokbar != "ok") {
		return; // il est chokbar
	}


	string data = "yousk2";

	//check request by checking if there is 1 ':' (2 arguments)
	int argument_number = count(request.begin(), request.end(), ':') + 1;
	if (argument_number != 2) {
		return ; // il est chokbar
	}


}


System::Data::DataSet^ Controller::csv_input(string csv) {
	// input csv file into database

	// check if there is an attempt to do an SQL injection
	string SQL_chokbar = SQL_check(csv);
	if (SQL_chokbar != "ok") {
		return; // il est chokbar
	}
}