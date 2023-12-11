#include "stock.h"

using namespace std;

void stock::create(string parameters) {
	// parameters: product_name, wharehouse_name, quantity

	int number_of_parameters = count(parameters.begin(), parameters.end(), ',') + 1;
	if (number_of_parameters != 3) {
		return;// il est chokbar
	}

	string product_name = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	string wharehouse_name = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	string quantity = parameters;

	set_product_name(product_name);
	set_wharehouse_name(wharehouse_name);
	set_quantity(quantity);

	save_parameter();

	return ;
}


void stock::modify(string parameters) {
	// parameters: product_name, wharehouse_name, quantity

	int number_of_parameters = count(parameters.begin(), parameters.end(), ',') + 1;
	if (number_of_parameters != 3) {
		return;
	}

	string product_name = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	string wharehouse_name = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	string quantity = parameters;

	set_product_name(product_name);
	set_wharehouse_name(wharehouse_name);
	set_quantity(quantity);

	save_parameter();
}


void stock::delete_(string parameters) {
	// parameters: product_name, wharehouse_name

	int number_of_parameters = count(parameters.begin(), parameters.end(), ',') + 1;
	if (number_of_parameters != 2) {
		return ;// il est chokbar
	}

	string product_name = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	string wharehouse_name = parameters;

	set_product_name(product_name);
	set_wharehouse_name(wharehouse_name);

	string request, response;
	request = "DELETE FROM [dbo].[stock] WHERE PRO_ID_PRODUIT = " + get_id_product() + " AND MAG_ID_MAGASIN = " + get_id_wharehouse() + ";";
	link::execute(request, "STOCK");
}


System::Data::DataSet^ stock::show(string parameters) {
	// parameters can be either:
	// - own
	// - product_name, wharehouse_name

	int number_of_parameters = count(parameters.begin(), parameters.end(), ',') + 1;
	if (number_of_parameters == 1) {
		if (parameters == "own") {
			parameters = get_product_name() + "," + get_wharehouse_name();
			number_of_parameters = 2;
		}
	}
	else if (number_of_parameters == 2) {
		string product_name = parameters.substr(0, parameters.find(","));
		parameters.erase(0, parameters.find(",") + 1);

		string wharehouse_name = parameters;

		set_product_name(product_name);
		set_wharehouse_name(wharehouse_name);

		string request, response;
		request = "SELECT * FROM [dbo].[STOCK] WHERE PRO_ID_PRODUIT = " + get_id_product() + " AND MAG_ID_MAGASIN = " + get_id_wharehouse() + ";";
		return link::execute(request, "STOCK");
	}
}