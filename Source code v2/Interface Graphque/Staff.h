#pragma once
#include <string>
#include "link.h"

using namespace std;

class staff : public link {
private:
	// set all variables
	string id_staff;
	string name;
	string surname;
	string phone;
	string hiring_date;
	string job;
	string address;
	string id_superior;

public:
	staff() {
		// set all variables to default values
		this->id_staff = "";
		this->name = "";
		this->surname = "";
		this->phone = "";
		this->hiring_date = "";
		this->job = "";
		this->address = "";
		this->id_superior = "";
	};
	~staff() {};


	string create(string paramter);
	string modify(string paramter);
	string delete_(string paramter);
	string show(string paramter);

	void set_id_staff(string id_staff) { this->id_staff = id_staff; };
	void set_name(string name) { this->name = name; };
	void set_surname(string surname) { this->surname = surname; };
	void set_phone(string phone) { this->phone = phone; };
	void set_hiring_date(string hiring_date) { this->hiring_date = hiring_date; };
	void set_job(string job) { this->job = job; };
	void set_address(string address) { this->address = address; };
	void set_id_superior(string id_superior) { this->id_superior = id_superior; };

	string save_parameter() {
		// save all parameters to the database
		// if id_staff is not set, create a new staff
		// else modify the staff with the id_staff

		string request, response;

		if (id_staff.empty()) {
			// create a new staff
			// get the id of the post
			request = "SELECT [POS_ID_POSTE] FROM [dbo].[POSTE] WHERE POS_POSTE LIKE '" + job + "';";
			response = link::get_first_item(link::execute(request));

			// if the job does not exit, return an error
			if (response.empty()) {
				return "staff:job does not exist";
			}



			string job_id = response;

			// create the staff
			request = "INSERT INTO [dbo].[PERSONNEL] ([PER_NOM], [PER_PRENOM], [PER_TELEPHONE], [PER_DATE_EMBAUCHE], [PER_ID_SUPERIEUR], [POS_ID_POSTE]) VALUES ('" + name + "', '" + surname + "', '" + phone + "', '" + hiring_date + "', '" + id_superior + "', '" + job_id + "');";
			response = link::get_first_item(link::execute(request));
			return response;
		}
		else {
			// modify the staff
			// update only the parameters that are not empty
			request = "UPDATE [dbo].[PERSONNEL] SET ";
			if (!name.empty()) { request += "[PER_NOM] = '" + name + "', "; }
			if (!surname.empty()) { request += "[PER_PRENOM] = '" + surname + "', "; }
			if (!phone.empty()) { request += "[PER_TELEPHONE] = '" + phone + "', "; }
			if (!hiring_date.empty()) { request += "[PER_DATE_EMBAUCHE] = '" + hiring_date + "', "; }
			if (!id_superior.empty()) { request += "[PER_ID_SUPERIEUR] = '" + id_superior + "', "; }
			if (!job.empty()) {
				// get the id of the post
				request += "[POS_ID_POSTE] = (SELECT [POS_ID_POSTE] FROM [dbo].[POSTE] WHERE POS_POSTE LIKE '" + job + "'), ";
			}
			// remove the last comma
			request = request.substr(0, request.size() - 2);
			// add the where clause
			request += " WHERE [PER_ID_PERSONNEL] = '" + id_staff + "';";
			response = link::get_first_item(link::execute(request));
			return response;
		}
	}

	string get_id_staff() { return this->id_staff; };
	string get_name() { return this->name; };
	string get_surname() { return this->surname; };
	string get_phone() { return this->phone; };
	string get_hiring_date() { return this->hiring_date; };
	string get_job() { return this->job; };
	string get_address() { return this->address; };
	string get_id_superior() { return this->id_superior; };


};