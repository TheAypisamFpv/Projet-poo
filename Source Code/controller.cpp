#include "link/link.h"
#include "user/ui/ui.h"
#include "user/user.h"

#include "string.h"

using std::string;

string Table(string request) {
	// normalized request : wich_table:command:parameters
	// exemple : staff:delete:6 (delete staff with id 6)

	//check request by checking if there is 2 ':'
	if (count(request.begin(), request.end(), ':') != 2) {
		return "error:invalid_request:not_enough_arguments";
	}

	// split request
	string table = request.substr(0, request.find(":"));
	string command = request.substr(request.find(":") + 1, request.find(":", request.find(":") + 1) - request.find(":") - 1);
	string parameters = request.substr(request.find(":", request.find(":") + 1) + 1);

	// check if none is empty
	if (table.empty() || command.empty() || parameters.empty()) {
		return "error:invalid_request:empty_arguments";
	}

}



string Stats(string request) {
	// normalized request : command:parameters
	// exemple : total_purchases:6 (get total purchases of user with id 6)

	//check request by checking if there is 1 ':'
	if (count(request.begin(), request.end(), ':') != 1) {
		return "error:invalid_request";
	}
}