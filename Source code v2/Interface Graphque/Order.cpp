#include "order.h"

using namespace std;

string order::create(string parameters) {
	// parameters: id_order,facturation_date,delivery_date,paiment_number,paiment_methode,comercial_marge,comercial_reduction,tva,id_client,items

	int number_of_parameters = count(parameters.begin(), parameters.end(), ',') + 1;
	if (number_of_parameters != 10) {
		return "error:order:create:wrong_number_of_parameters, expected 10 but got " + to_string(number_of_parameters);// il est chokbar
	}

	string id_order = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	string facturation_date = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	string delivery_date = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	string paiment_number = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	string paiment_methode = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	string comercial_marge = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	string comercial_reduction = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	string tva = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	string id_client = parameters;
	parameters.erase(0, parameters.find(",") + 1);

	string items = parameters;

	set_id_order(id_order);
	set_facturation_date(facturation_date);
	set_eta_date(delivery_date);
	set_paiment_number(paiment_number);
	set_paiment_methode(paiment_methode);
	set_comercial_marge(comercial_marge);
	set_comercial_reduction(comercial_reduction);
	set_tva(tva);
	set_id_client(id_client);
	set_items(items);

	save_parameter();

	return "order:created:" + show("own");
}


string order::modify(string parameters) {
	// parameters: id_order,facturation_date,delivery_date,paiment_number,paiment_methode,comercial_marge,comercial_reduction,tva,id_client,items

	int number_of_parameters = count(parameters.begin(), parameters.end(), ',') + 1;
	if (number_of_parameters != 10) {
		return "error:order:modify:wrong_number_of_parameters, expected 10 but got " + to_string(number_of_parameters);// il est chokbar
	}

	string id_order = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	string facturation_date = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	string delivery_date = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	string paiment_number = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	string paiment_methode = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	string comercial_marge = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	string comercial_reduction = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	string tva = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	string id_client = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	string items = parameters;

	set_id_order(id_order);
	set_facturation_date(facturation_date);
	set_eta_date(delivery_date);
	set_paiment_number(paiment_number);
	set_paiment_methode(paiment_methode);
	set_comercial_marge(comercial_marge);
	set_comercial_reduction(comercial_reduction);
	set_tva(tva);
	set_id_client(id_client);
	set_items(items);

	save_parameter();

	return "order:modified:" + show("own");
}


string order::delete_(string parameters) {
	// parameters: id_order

	// check if paramter is an integer
	for (int i = 0; i < parameters.length(); i++) {
		if (!isdigit(parameters[i])) {
			return "error:order:delete:id_order_wrong_type";// il est chokbar
		}
	}

	string request = "DELETE FROM [dbo].[FACTURE] WHERE FAC_ID_FACTURE = '" + parameters + "';";
	string response = link::execute(request);


	if (response == "ok") {
		return "order:deleted";
	}
	else {
		return "error:order:delete:" + response;
	}
}


string order::show(string parameters) {
	// parameters: id_order OR id_client OR own

	string request, response;

	if (parameters == "own") {
		response = "\n";
		response += "id_order:" + get_id_order() + "\n";
		response += "facturation_date:" + get_facturation_date() + "\n";
		response += "delivery_date:" + get_eta_date() + "\n";
		response += "paiment_number:" + get_paiment_number() + "\n";
		response += "paiment_methode:" + get_paiment_methode() + "\n";
		response += "comercial_marge:" + get_comercial_marge() + "\n";
		response += "comercial_reduction:" + get_comercial_reduction() + "\n";
		response += "tva:" + get_tva() + "\n";
		response += "id_client:" + get_id_client() + "\n";
		response += "items:" + get_items() + "\n";
		return "order:show:" + response;

	}
	else {
		// check if parameters is an integer
		for (int i = 0; i < parameters.length(); i++) {
			if (!isdigit(parameters[i])) {
				return "error:order:show:parameter_is_not_an_integer";// il est chokbar
			}
		}
		request = "SELECT * FROM [dbo].[FACTURE] WHERE FAC_ID_FACTURE = '" + parameters + "';";
		response = link::execute(request);
	}

	return "order:show:" + response;
}