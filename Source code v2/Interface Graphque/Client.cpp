#include "client.h"
#include <algorithm>


void client::create(string parameter) {
	// name,surname,mail,phone,address,birth_date
	// chekc if there is the right number of parameters
	int number_of_parameters = count(parameter.begin(), parameter.end(), ',') + 1;
	if (number_of_parameters != 6) {
		return;
	}

	// SQL request
	string name = parameter.substr(0, parameter.find(","));
	parameter.erase(0, parameter.find(",") + 1);
	if (name == "") {
		return;
	}

	string surname = parameter.substr(0, parameter.find(","));
	parameter.erase(0, parameter.find(",") + 1);
	if (surname == "") {
		return;
	}

	string mail = parameter.substr(0, parameter.find(","));
	parameter.erase(0, parameter.find(",") + 1);
	if (mail == "") {
		return;
	}

	string phone = parameter.substr(0, parameter.find(","));
	parameter.erase(0, parameter.find(",") + 1);
	if (phone == "") {
		return;
	}

	string address = convert_date(parameter.substr(0, parameter.find(",")));
	parameter.erase(0, parameter.find(",") + 1);
	if (address == "") {
		return;
	}

	string birth_date = convert_date(parameter);
	if (birth_date == "") {
		return;
	}



	// check if adresse is correct TODO

	set_name(name);
	set_surname(surname);
	set_mail(mail);
	set_phone(phone);
	set_address(address);
	set_birth_date(birth_date);

	save_parameter();
}


void client::modify(string parameter) {
	// id_client,name,surname,mail,phone,address,birth_date

	// SQL request

	// check if there is the right number of parameters
	int number_of_parameters = count(parameter.begin(), parameter.end(), ',') + 1;
	if (number_of_parameters != 7) {
		return ;// il est chokbar
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

	string address = convert_date(parameter.substr(0, parameter.find(",")));
	parameter.erase(0, parameter.find(",") + 1);

	string birth_date = convert_date(parameter);

	//check if id_client is correct (must be an integer)

	// loop through each character of the string
	for (int i = 0; i < id_client.length(); i++) {
		// if the character is not a digit, throw an exception
		if (isdigit(id_client[i]) == false) {
			return;
		}
	}

	if (id_client.length() != 6) {
		return;
	}

	if (name != "") set_name(name);
	else return ;// il est chokbar

	if (surname != "") set_surname(surname);
	else return ;// il est chokbar

	if (mail != "") { set_mail(mail); }
	if (phone != "") { set_phone(phone); }
	if (address != "") { set_address(address); }
	if (birth_date != "") { set_birth_date(birth_date); }

	save_parameter();
}


void client::delete_(string parameters) {
	// id_compte
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
				return ;// il est chokbar
			}
		}

		// SQL request to delete a client
		request = "DELETE FROM COMPTE_CLIENT WHERE COMCLI_NUMERO_COMPTE = '" + parameters + "';";
		link::set(request);
	}
}


System::Data::DataSet^ client::show(string parameters) {
	//numero_compte OR name,surname 
	System::Data::DataSet^ void_;

	// check number of parameters
	int number_of_parameters = count(parameters.begin(), parameters.end(), ',') + 1;
	// if there is only one parameter, then it is the id_compte
	if (number_of_parameters == 1) {
		// check if id_compte is correct (must be an integer)
		for (int i = 0; i < parameters.length(); i++) {
			if (isdigit(parameters[i]) == false) {
				return void_;// il est chokbar
			}
		}

		// SQL request to delete a client
		string request = "SELECT * FROM COMPTE_CLIENT WHERE COMCLI_NUMERO_COMPTE = '" + parameters + "';";
		return link::get(request, "COMPTE_CLIENT");
	}
	else if (number_of_parameters == 2) {
		string name = parameters.substr(0, parameters.find(","));
		parameters.erase(0, parameters.find(",") + 1);

		string surname = parameters;

		// SQL request to delete a client
		string request = "SELECT * FROM COMPTE_CLIENT WHERE COMCLI_NOM = '" + name + "' AND COMCLI_PRENOM = '" + surname + "';";
		return link::get(request, "COMPTE_CLIENT");
	}
	else {
		return void_;// il est chokbar
	}
}