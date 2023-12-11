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

	System::Data::DataSet^ void_;


	// convert System::String to std::string
	string request = msclr::interop::marshal_as<std::string>(request_);

	// check if there is an attempt to do an SQL injection
	string SQL_chokbar = SQL_check(request);
	if (SQL_chokbar != "ok") {
		return void_; // il est chokbar
	}



	//check request by checking if there is 2 ':' (3 arguments)
	int argument_number = count(request.begin(), request.end(), ':') + 1;
	if (argument_number != 3) {
		return void_; // il est chokbar
	}
	// split request
	string table = request.substr(0, request.find(":"));
	string command = request.substr(request.find(":") + 1, request.find(":", request.find(":") + 1) - request.find(":") - 1);
	string parameters = request.substr(request.find(":", request.find(":") + 1) + 1);


	// check if none is empty
	if (table.empty() || command.empty() || parameters.empty()) {
		return void_; // il est chokbar
	}


	link sql;

	return sql.hub(table, command, parameters);
}



System::Data::DataSet^ Controller::Stats(System::String^ request_) {
	//						  arg1 :  arg2(param1,param2,...)
	// normalized request : command:parameters
	// exemple : total_purchases:cailloux (get total purchases of user cailloux)

	link sql;
	System::Data::DataSet^ void_;

	// convert System::String to std::string
	string request = msclr::interop::marshal_as<std::string>(request_);
	System::Data::DataSet^ result;

	// check if there is an attempt to do an SQL injection
	string SQL_chokbar = SQL_check(request);
	if (SQL_chokbar != "ok") {
		return void_; // il est chokbar
	}


	// get the first 8 characters of the request
	string command = request.substr(0, 8);



	//check request by checking if there is 1 ':' (2 arguments)
	int argument_number = count(request.begin(), request.end(), ':') + 1;
	if (argument_number != 2) {
		return void_; // il est chokbar
	}

	// panier moyen
	if (request == "cart:average") {
		result = sql.get("SELECT AVG(FAC_PRIX) AS PrixMoyen FROM FACTURE", "FACTURE");
	}
	// chiffre d'affaire pour le mois (turnover:date)
	else if (command == "turnover") {
		// check if parameters is an integer
		for (int i = 0; i < request.substr(9).length(); i++) {
			if (!isdigit(request.substr(9)[i])) {
				return void_; // il est chokbar
			}
		}
		result = sql.get("SELECT SUM(FAC_PRIX) AS ChiffreAffaire FROM FACTURE WHERE MONTH(FAC_DATE_FACTURE) = " + request.substr(9), "FACTURE");
	}


}


System::Data::DataSet^ Controller::csv_input(string csv) {
	// input csv file into database
	System::Data::DataSet^ void_;
	// check if there is an attempt to do an SQL injection
	string SQL_chokbar = SQL_check(csv);
	if (SQL_chokbar != "ok") {
		return void_; // il est chokbar
	}
}