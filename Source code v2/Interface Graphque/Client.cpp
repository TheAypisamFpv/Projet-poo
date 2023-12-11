#include "client.h"
#include <algorithm>

string client::create(string parameter) {
	// name,surname,mail,phone,address,birth_date

	// chekc if there is the right number of parameters
	int number_of_parameters = count(parameter.begin(), parameter.end(), ',') + 1;
	if (number_of_parameters != 6) {
		return "error:client:create:wrong_number_of_parameters, expected 6 but got " + to_string(number_of_parameters);// il est chokbar
	}

	// SQL request
	string name = parameter.substr(0, parameter.find(","));
	parameter.erase(0, parameter.find(",") + 1);
	if (name == "") {
		return "error:client:create:no_name_specified";// il est chokbar
	}

	string surname = parameter.substr(0, parameter.find(","));
	parameter.erase(0, parameter.find(",") + 1);
	if (surname == "") {
		return "error:client:create:no_surname_specified";// il est chokbar
	}

	string mail = parameter.substr(0, parameter.find(","));
	parameter.erase(0, parameter.find(",") + 1);
	if (mail == "") {
		return "error:client:create:no_mail_specified";// il est chokbar
	}

	string phone = parameter.substr(0, parameter.find(","));
	parameter.erase(0, parameter.find(",") + 1);
	if (phone == "") {
		return "error:client:create:no_phone_specified";// il est chokbar
	}

	string address = parameter.substr(0, parameter.find(","));
	parameter.erase(0, parameter.find(",") + 1);
	if (address == "") {
		return "error:client:create:no_address_specified";// il est chokbar
	}

	string birth_date = parameter;
	if (birth_date == "") {
		return "error:client:create:no_birth_date_specified";// il est chokbar
	}


	// check if adresse is correct TODO

	set_name(name);
	set_surname(surname);
	set_mail(mail);
	set_phone(phone);
	set_address(address);
	set_birth_date(birth_date);

	save_parameter();

	return "client:created:" + show("own");
}


string client::modify(string parameter) {
	// id_client,name,surname,mail,phone,address,birth_date

	// SQL request

	// check if there is the right number of parameters
	int number_of_parameters = count(parameter.begin(), parameter.end(), ',') + 1;
	if (number_of_parameters != 7) {
		return "error:client:modify:wrong_number_of_parameters, expected 7 but got " + to_string(number_of_parameters);// il est chokbar
	}

	string id_client = parameter.substr(0, parameter.find(","));
	parameter.erase(0, parameter.find(",") + 1);

	string name = parameter.substr(0, parameter.find(","));
	parameter.erase(0, parameter.find(",") + 1);

	string surname = parameter.substr(0, parameter.find(","));
	parameter.erase(0, parameter.find(",") + 1);

	string mail = parameter.substr(0, parameter.find(","));
	parameter.erase(0, parameter.find(",") + 1);

	string phone = parameter.substr(0, parameter.find(","));
	parameter.erase(0, parameter.find(",") + 1);

	string address = parameter.substr(0, parameter.find(","));
	parameter.erase(0, parameter.find(",") + 1);

	string birth_date = parameter;

	//check if id_client is correct (must be an integer)

	// loop through each character of the string
	for (int i = 0; i < id_client.length(); i++) {
		// if the character is not a digit, throw an exception
		if (isdigit(id_client[i]) == false) {
			return "error:client:modify:id_client_wrong_type";// il est chokbar
		}
	}

	if (id_client.length() != 6) {
		return "error:client:modify:id_client_wrong_length";// il est chokbar
	}

	if (name != "") set_name(name);
	else return "error:client:modify:no_name_specified";// il est chokbar

	if (surname != "") set_surname(surname);
	else return "error:client:modify:no_surname_specified";// il est chokbar

	if (mail != "") { set_mail(mail); }
	if (phone != "") { set_phone(phone); }
	if (address != "") { set_address(address); }
	if (birth_date != "") { set_birth_date(birth_date); }

	save_parameter();


	return "client:modified:" + show("own");
}


string client::delete_(string parameters) {
	// id_compte OR name,surname
	string request;
	string response;
	// a client can be deleted by either his id_compte or his name and surname (must check if there is only one client with this name and surname)
	// check number of parameters
	int number_of_parameters = count(parameters.begin(), parameters.end(), ',') + 1;
	// if there is only one parameter, then it is the id_compte
	if (number_of_parameters == 1) {
		// check if id_compte is correct (must be an integer)
		for (int i = 0; i < parameters.length(); i++) {
			if (isdigit(parameters[i]) == false) {
				return "error:client:delete:id_client_wrong_type";// il est chokbar
			}
		}

		// SQL request to delete a client
		request = "DELETE FROM COMPTE_CLIENT WHERE COMCLI_NUMERO_COMPTE = '" + parameters + "';";
		response = link::get_first_item(link::execute(request));
	}
	// else, there are two parameters, so it is the name and surname
	else if (number_of_parameters == 2) {
		// SQL request to check if there is only one client with this name and surname
		request = "SELECT * FROM COMPTE_CLIENT WHERE COMCLI_NOM = '" + parameters.substr(0, parameters.find(",")) + "' AND COMCLI_PRENOM = '" + parameters.substr(parameters.find(",") + 1, parameters.length()) + "';";
		response = link::get_first_item(link::execute(request));
		// response is direct from database

		// if there is only one client with this name and surname, delete it
		if (response != "error:link:execute:empty") {
			// SQL request to delete a client
			request = "DELETE FROM COMPTE_CLIENT WHERE COMCLI_NOM = '" + parameters.substr(0, parameters.find(",")) + "' AND COMCLI_PRENOM = '" + parameters.substr(parameters.find(",") + 1, parameters.length()) + "';";
			response = link::get_first_item(link::execute(request));
		}

	}
	else {
		return "error:client:delete:wrong_number_of_parameters";// il est chokbar
	}

	if (response == "ok") {
		return "client:deleted";
	}
	else {
		return "error:client:delete:" + response;
	}
}


string client::show(string parameters) {
	// id_compte 
	string response;
	// if parameters is "own", then show the client's own information (without sql request)
	if (parameters == "own") {
		parameters = this->id_compte;
	}

	// check if id_compte is correct (must be an integer)
	for (int i = 0; i < this->id_compte.length(); i++) {
		if (isdigit(this->id_compte[i]) == false) {
			return "error:client:show:id_client_wrong_type";// il est chokbar
		}
	}

	// SQL request to show a client
	string request = "SELECT * FROM COMPTE_CLIENT WHERE COMCLI_NUMERO_COMPTE = '" + parameters + "';";
	response = link::get_first_item(link::execute(request));

	return response;
}