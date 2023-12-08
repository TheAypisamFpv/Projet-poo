#include "link.h"
#include <string.h>
#include <iostream>

using namespace std;

string forbidden_characters = "*'-;\\\"/"; // list of forbidden characters
string forbidden_words = "select,drop,delete,create,modify"; // list of forbidden words


string SQL_check(string request) {
	// check if there is an attempt to do an SQL injection

	// check for forbidden characters
	for (int i = 0; i < forbidden_characters.length(); i++) {
		if (request.find(forbidden_characters[i]) != string::npos) {
			return "error:SQL_injection:forbidden_character (Nuh uh)"; // il est chokbar
		}
	}

	// check for forbidden words
	for (int i = 0; i < count(forbidden_words.begin(), forbidden_words.end(), ','); i++) {
		if (request.find(forbidden_words.substr(0, forbidden_words.find(","))) != string::npos) {
			return "error:SQL_injection:forbidden_word (Nuh uh)"; // il est chokbar
		}
		forbidden_words = forbidden_words.substr(forbidden_words.find(",") + 1);
	}

	return "ok";
}


string Table(string request) {
	//						   arg1   :  arg2 :  arg3(param1,param2,...)
	// normalized request : wich_table:command:parameters
	// exemple : staff:delete:cailloux,rock (delete staff name rock cailloux)


	// check if there is an attempt to do an SQL injection
	string SQL_chokbar = SQL_check(request);
	if (SQL_chokbar != "ok") {
		return SQL_chokbar; // il est chokbar
	}


	string data;

	//check request by checking if there is 2 ':'
	int argument_number = count(request.begin(), request.end(), ':');
	if (argument_number > 2) {
		return "error:invalid_argument:too_many_arguments"; // il est chokbar
	}
	else if (argument_number < 2) {
		return "error:invalid_argument:too_few_arguments"; // il est chokbar
	}

	// split request
	string table = request.substr(0, request.find(":"));
	string command = request.substr(request.find(":") + 1, request.find(":", request.find(":") + 1) - request.find(":") - 1);
	string parameters = request.substr(request.find(":", request.find(":") + 1) + 1);


	// check if none is empty
	if (table.empty() || command.empty() || parameters.empty()) {
		return "error:invalid_argument:empty_argument"; // il est chokbar
	}


	// if there is more than one parameter, check if both are not empty
	if (count(parameters.begin(), parameters.end(), ',') > 0) {
		if (parameters.substr(0, parameters.find(",")) == "" || parameters.substr(parameters.find(",") + 1) == "") {
			return "error:invalid_parameter:empty_parameter"; // il est chokbar
		}
	}




	return data;
}



string Stats(string request) {
	//						  arg1 :  arg2(param1,param2,...)
	// normalized request : command:parameters
	// exemple : total_purchases:cailloux (get total purchases of user cailloux)

	// check if there is an attempt to do an SQL injection
	string SQL_chokbar = SQL_check(request);
	if (SQL_chokbar != "ok") {
		return SQL_chokbar; // il est chokbar
	}


	string data;

	//check request by checking if there is 1 ':'
	int argument_number = count(request.begin(), request.end(), ':');
	if (argument_number > 1) {
		return "error:invalid_argument:too_many_arguments"; // il est chokbar
	}
	else if (argument_number < 1) {
		return "error:invalid_argument:too_few_arguments"; // il est chokbar
	}





	return data;
}