#include "staff.h"


void staff::create(string parameters) {
	// name,surname,phone,hiring_date,job,address,id_superior



	int number_of_parameters = count(parameters.begin(), parameters.end(), ',') + 1;
	if (number_of_parameters != 7) {
		return ;// il est chokbar
	}

	// SQL request to create a new staff
	string name = parameters.substr(0, parameters.find(":"));
	parameters.erase(0, parameters.find(":") + 1);

	string surname = parameters.substr(0, parameters.find(":"));
	parameters.erase(0, parameters.find(":") + 1);

	string phone = parameters.substr(0, parameters.find(":"));
	parameters.erase(0, parameters.find(":") + 1);

	string hiring_date = parameters.substr(0, parameters.find(":"));
	parameters.erase(0, parameters.find(":") + 1);

	string job = parameters.substr(0, parameters.find(":"));
	parameters.erase(0, parameters.find(":") + 1);

	string address = parameters.substr(0, parameters.find(":"));
	parameters.erase(0, parameters.find(":") + 1);

	string id_superior = parameters;

	set_name(name);
	set_surname(surname);
	set_phone(phone);
	set_hiring_date(hiring_date);
	set_job(job);
	set_address(address);
	set_id_superior(id_superior);

	save_parameter();
}


void staff::modify(string parameters) {
	// id_staff,name,surname,phone,hiring_date,job,address,id_superior

	// SQL request to modify a staff

	// check if there is the right number of parameters
	int number_of_parameters = count(parameters.begin(), parameters.end(), ',') + 1;

	if (number_of_parameters != 8) {
		return ;// il est chokbar
	}

	string id_staff = parameters.substr(0, parameters.find(":"));
	parameters.erase(0, parameters.find(":") + 1);

	string name = parameters.substr(0, parameters.find(":"));
	parameters.erase(0, parameters.find(":") + 1);

	string surname = parameters.substr(0, parameters.find(":"));
	parameters.erase(0, parameters.find(":") + 1);

	string phone = parameters.substr(0, parameters.find(":"));
	parameters.erase(0, parameters.find(":") + 1);

	string hiring_date = parameters.substr(0, parameters.find(":"));
	parameters.erase(0, parameters.find(":") + 1);

	string job = parameters.substr(0, parameters.find(":"));
	parameters.erase(0, parameters.find(":") + 1);

	string address = parameters.substr(0, parameters.find(":"));
	parameters.erase(0, parameters.find(":") + 1);

	string id_superior = parameters;

	set_id_staff(id_staff);
	set_name(name);
	set_surname(surname);
	set_phone(phone);
	set_hiring_date(hiring_date);
	set_job(job);
	set_address(address);
	set_id_superior(id_superior);

	save_parameter();
}


void staff::delete_(string parameters) {
	// id_staff

	// SQL request to delete a staff
	// check if parameters is an integer
	for (int i = 0; i < parameters.length(); i++) {
		if (!isdigit(parameters[i])) {
			return ;// il est chokbar
		}
	}

	string request = "DELETE FROM staff WHERE id_staff = '" + parameters + "';";
	link::execute(request, "STAFF");
}


System::Data::DataSet^ staff::show(string parameters) {
	// name,surname
	// SQL request to show a staff
	string request = "SELECT * FROM staff WHERE name = '" + parameters.substr(0, parameters.find(":")) + "' AND surname = '" + parameters.substr(parameters.find(":") + 1) + "';";
	return link::execute(request, "STAFF");
}