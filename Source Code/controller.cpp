#include "link/link.h"
#include "user/ui/ui.h"
#include "user/user.h"

#include "string.h"

using std::string;

string Table(string request) {
	// normalized request : wich_table:command:parameters
	// exemple : staff:delete:cailloux,rock (delete staff name rock cailloux)

	//check request by checking if there is 2 ':'
	if (count(request.begin(), request.end(), ':') != 2) {
		return "error:invalid_request:wrong_number_argument";
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
	// exemple : total_purchases:cailloux (get total purchases of user cailloux)

	//check request by checking if there is 1 ':'
	if (count(request.begin(), request.end(), ':') != 1) {
		return "error:invalid_request";
	}
}