#pragma once
#include <string>
#include "link.h"


using namespace std;

class client : public link {
private:
	// set all variables
	string id_compte;
	string name;
	string surname;
	string points;
	string mail;
	string phone;
	string birth_date;
	string address;
	string id_historique;

public:
	client() {
		// set all variables to default values
		this->id_compte = ""; 
		this->name = "";
		this->surname = "";
		this->points = "";
		this->mail = "";
		this->phone = "";
		this->birth_date = "";
		this->address = "";
		this->id_historique = "";
	};

	string create(string paramter);
	string modify(string paramter);
	string delete_(string paramter);
	string show(string paramter);


	void set_id_compte(string id_compte) { this->id_compte = id_compte; };
	void set_name(string name) { this->name = name; };
	void set_surname(string surname) { this->surname = surname; };
	void set_points(string points) { this->points = points; };
	void set_mail(string mail) { this->mail = mail; };
	void set_phone(string phone) { this->phone = phone; };
	void set_address(string address) { this->address = address; };
	void set_birth_date(string birth_date) { this->birth_date = birth_date; };
	void set_id_historique(string id_historique) { this->id_historique = id_historique; };


	string save_parameter() {
		// save all parameters to the database
		// if id_compte is empty, then save_parameter is called to create a client
		// if id_compte is not empty, then save_parameter is called to modify a client
		string request, response;

		if (id_compte.empty()) {
			// create a new id that is not already in the database
			// id_compte is a 6 digit number
			request = "SELECT top 1 COMCLI_NUMERO_COMPTE FROM COMPTE_CLIENT order by COMCLI_ID_COMPTE desc;";
			response = link::execute(request);
			id_compte = to_string(stoi(response) + 1);

			request = "INSERT INTO [dbo].[COMPTE_CLIENT] ([COMCLI_NUMERO_COMPTE], [COMCLI_NOM], [COMCLI_PRENOM], [COMCLI_POINT], [COMCLI_MAIL], [COMCLI_TELEPHONE], [COMCLI_DATE_NAISSANCE]) VALUES ('" + id_compte + "', '" + name + "', '" + surname + "', '" + points + "', '" + mail + "', '" + phone + "', '" + birth_date + "');";
			response = link::execute(request);

			// add the adresse
			// get the DB id of the client
			request = "SELECT top 1 COMCLI_ID_COMPTE FROM COMPTE_CLIENT order by COMCLI_ID_COMPTE desc;";
			response = link::execute(request);
			string id = response;

			// insert the adresse
			//adresse = "adresse:departement"
			string departement = address.substr(address.find(":") + 1, address.size());
			request = "INSERT INTO [dbo].[ADRESSE] ([ADR_ADRESSE], [ADR_DEPARTEMENT], [COMCLI_ID_COMPTE], [PER_ID_PERSONNEL]) VALUES ('" + address + "', '" + departement + "', '" + id + "', '1');";
		}
		else {
			// modify only the parameters that are not empty
			request = "UPDATE COMPTE_CLIENT SET ";
			if (!name.empty()) { request += "COMCLI_NOM = '" + name + "', "; };
			if (!surname.empty()) { request += "COMCLI_PRENOM = '" + surname + "', "; };
			if (!points.empty()) { request += "COMCLI_POINT = '" + points + "', "; };
			if (!mail.empty()) { request += "COMCLI_MAIL = '" + mail + "', "; };
			if (!phone.empty()) { request += "COMCLI_TELEPHONE = '" + phone + "', "; };
			if (!birth_date.empty()) { request += "COMCLI_DATE_NAISSANCE = '" + birth_date + "', "; };
			request = request.substr(0, request.size() - 2);
			request += " WHERE COMCLI_NUMERO_COMPTE = '" + id_compte + "';";
			response = link::execute(request);

			// modify the adresse
			//adresse = "adresse:departement"
			string departement = address.substr(address.find(":") + 1, address.size());
			request = "UPDATE ADRESSE SET ";
			if (!address.empty()) { request += "ADR_ADRESSE = '" + address + "', "; };
			if (!departement.empty()) { request += "ADR_DEPARTEMENT = '" + departement + "', "; };
			request = request.substr(0, request.size() - 2);
			request += " WHERE COMCLI_ID_COMPTE = '" + id_compte + "';";

			response += "\n" + link::execute(request);
		}
		return response;
	}

	string get_id_compte() { return id_compte; };
	string get_name() { return name; };
	string get_surname() { return surname; };
	string get_points() { return points; };
	string get_mail() { return mail; };
	string get_phone() { return phone; };
	string get_birth_date() { return birth_date; };
	string get_address() { return address; };
	string get_id_historique() { return id_historique; };

};
