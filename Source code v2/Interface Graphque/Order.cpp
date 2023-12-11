#include "order.h"

using namespace std;

void order::create(std::string parameters) {
	// parameters: id_order,facturation_date,delivery_date,paiment_number,paiment_methode,comercial_marge,comercial_reduction,tva,id_client,items

	int number_of_parameters = count(parameters.begin(), parameters.end(), ',') + 1;
	if (number_of_parameters != 10) {
		return ;// il est chokbar
	}

	std::string id_order = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	std::string facturation_date = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	std::string delivery_date = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	std::string paiment_number = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	std::string paiment_methode = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	std::string comercial_marge = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	std::string comercial_reduction = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	std::string tva = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	std::string id_client = parameters;
	parameters.erase(0, parameters.find(",") + 1);

	std::string items = parameters;

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

	return ;
}


void order::modify(std::string parameters) {
	// parameters: id_order,facturation_date,delivery_date,paiment_number,paiment_methode,comercial_marge,comercial_reduction,tva,id_client,items

	int number_of_parameters = count(parameters.begin(), parameters.end(), ',') + 1;
	if (number_of_parameters != 10) {
		return ;// il est chokbar
	}

	std::string id_order = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	std::string facturation_date = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	std::string delivery_date = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	std::string paiment_number = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	std::string paiment_methode = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	std::string comercial_marge = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	std::string comercial_reduction = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	std::string tva = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	std::string id_client = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	std::string items = parameters;

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
}


void order::delete_(std::string parameters) {
	// parameters: id_order

	// check if paramter is an integer
	for (int i = 0; i < parameters.length(); i++) {
		if (!isdigit(parameters[i])) {
			return ;// il est chokbar
		}
	}

	string request = "DELETE FROM [dbo].[FACTURE] WHERE FAC_ID_FACTURE = '" + parameters + "';";
	link::execute(request, "FACTURE");
}


System::Data::DataSet^ order::show(std::string parameters) {
	// parameters: id_order OR id_client OR own

	std::string request, response;
	System::Data::DataSet^ void_;

	// check if parameters is an integer
	for (int i = 0; i < parameters.length(); i++) {
		if (!isdigit(parameters[i])) {
			return void_;// il est chokbar
		}
	}
	request = "SELECT * FROM [dbo].[FACTURE] WHERE FAC_ID_FACTURE = '" + parameters + "';";
	return link::execute(request,"FACTURE");
}