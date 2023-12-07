#include "link/link.h"
#include <string.h>
#include <iostream>

using namespace std;

string Table(string request) {
	//						   arg1   :  arg2 :  arg3(param1,param2,...)
	// normalized request : wich_table:command:parameters
	// exemple : staff:delete:cailloux,rock (delete staff name rock cailloux)
	string data;

	//check request by checking if there is 2 ':'
	int argument_number = count(request.begin(), request.end(), ':');
	if (argument_number > 2) {
		return "error:invalid_argument:too_many_arguments";
	}
	else if (argument_number < 2) {
		return "error:invalid_argument:too_few_arguments";
	}

	// split request
	string table = request.substr(0, request.find(":"));
	string command = request.substr(request.find(":") + 1, request.find(":", request.find(":") + 1) - request.find(":") - 1);
	string parameters = request.substr(request.find(":", request.find(":") + 1) + 1);

	// check if none is empty
	if (table.empty() || command.empty() || parameters.empty()) {
		return "error:invalid_argument:empty_argument";
	}


	// if there is more than one parameter, check if both are not empty
	if (count(parameters.begin(), parameters.end(), ',') > 0) {
		if (parameters.substr(0, parameters.find(",")) == "" || parameters.substr(parameters.find(",") + 1) == "") {
			return "error:invalid_parameter:empty_parameter";
		}
	}




	return data;
}



string Stats(string request) {
	//						  arg1 :  arg2(param1,param2,...)
	// normalized request : command:parameters
	// exemple : total_purchases:cailloux (get total purchases of user cailloux)

	string data;

	//check request by checking if there is 1 ':'
	int argument_number = count(request.begin(), request.end(), ':');
	if (argument_number > 1) {
		return "error:invalid_argument:too_many_arguments";
	}
	else if (argument_number < 1) {
		return "error:invalid_argument:too_few_arguments";
	}





	return data;
}