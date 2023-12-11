#include "stock.h"

using namespace std;

string stock::create(string parameters) {
	// parameters: product_name, wharehouse_name, quantity

	int number_of_parameters = count(parameters.begin(), parameters.end(), ',') + 1;
	if (number_of_parameters != 3) {
		return "error:stock:create:wrong_number_of_parameters, expected 3 but got " + to_string(number_of_parameters);// il est chokbar
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

	return "stock:created:";
}


string stock::modify(string parameters) {
	// parameters: product_name, wharehouse_name, quantity

	int number_of_parameters = count(parameters.begin(), parameters.end(), ',') + 1;
	if (number_of_parameters != 3) {
		return "error:stock:modify:wrong_number_of_parameters, expected 3 but got " + to_string(number_of_parameters);// il est chokbar
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

	return "stock:modified:" + show("own");
}


string stock::delete_(string parameters) {
	// parameters: product_name, wharehouse_name

	int number_of_parameters = count(parameters.begin(), parameters.end(), ',') + 1;
	if (number_of_parameters != 2) {
		return "error:stock:delete:wrong_number_of_parameters, expected 2 but got " + to_string(number_of_parameters);// il est chokbar
	}

	string product_name = parameters.substr(0, parameters.find(","));
	parameters.erase(0, parameters.find(",") + 1);

	string wharehouse_name = parameters;

	set_product_name(product_name);
	set_wharehouse_name(wharehouse_name);

	string request, response;
	request = "DELETE FROM [dbo].[stock] WHERE PRO_ID_PRODUIT = " + get_id_product() + " AND MAG_ID_MAGASIN = " + get_id_wharehouse() + ";";
	response = link::get_first_item(link::execute(request));

	if (response == "ok") {
		return "stock:deleted:";
	}
	else {
		return "error:stock:delete:" + response;
	}
}


string stock::show(string parameters) {
	// parameters can be either:
	// - own
	// - product_name, wharehouse_name

	int number_of_parameters = count(parameters.begin(), parameters.end(), ',') + 1;
	if (number_of_parameters == 1) {
		if (parameters == "own") {
			parameters = get_product_name() + "," + get_wharehouse_name();
		}
		else {
			return "error:stock:show:wrong_parameter, expected 'own' but got " + parameters;// il est chokbar
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
		response = link::get_first_item(link::execute(request));

		return response;
	}
	else {
		return "error:stock:show:wrong_number_of_parameters, expected 1 or 2 but got " + to_string(number_of_parameters);// il est chokbar
	}
}