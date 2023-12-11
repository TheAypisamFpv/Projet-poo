#pragma once
#include <string>
#include "link.h"

using namespace std;

class stock : public link {
private:
	string product_name;
	string id_product;
	string wharehouse_name;
	string id_wharehouse;
	string quantity;


public:
	stock() {
		this->product_name = "";
		this->id_product = "";
		this->wharehouse_name = "";
		this->id_wharehouse = "";
		this->quantity = "";
	};
	~stock() {};

	void create(string paramter);
	void modify(string paramter);
	void delete_(string paramter);
	System::Data::DataSet^ show(string paramter);

	// getters
	string get_product_name() {
		if (this->product_name.empty() && this->id_product.empty()) {
			// error
			return "error:stock:get_product_name:product_name_and_id_product_are_empty";
		}
		if (this->product_name.empty()) {
			// get the name of the product
			string request = "SELECT [PRO_NOM_PRODUIT] FROM [dbo].[PRODUIT] WHERE PRO_ID_PRODUIT = " + get_id_product() + ";";
			string response = link::get_first_item(link::get(request, "PRODUIT"));

			// set the product_name
			this->product_name = response;
		}
		return this->product_name;
	};

	string get_id_product() {
		if (this->id_product.empty()) {
			// get the id of the product
			string request = "SELECT [PRO_ID_PRODUIT] FROM [dbo].[PRODUIT] WHERE LOWER(PRO_NOM_PRODUIT) LIKE LOWER(%'" + get_product_name() + "'%);";
			string response = link::get_first_item(link::get(request, "PRODUIT"));

			// set the id_product
			this->id_product = response;
		}
		return this->id_product;
	};

	string get_wharehouse_name() {
		if (this->wharehouse_name.empty() && this->id_wharehouse.empty()) {
			// error
			return "error:stock:get_wharehouse_name:wharehouse_name_and_id_wharehouse_are_empty";
		}
		if (this->wharehouse_name.empty()) {
			// get the name of the wharehouse
			string request = "SELECT [MAG_NOM] FROM [dbo].[MAGASIN] WHERE MAG_ID_MAGASIN = " + get_id_wharehouse() + ";";
			string response = link::get_first_item(link::get(request, "MAGASIN"));

			// set the wharehouse_name
			this->wharehouse_name = response;
		}
		return this->wharehouse_name;
	};

	string get_id_wharehouse() {
		if (this->id_wharehouse.empty()) {
			// get the id of the wharehouse
			string request = "SELECT [MAG_ID_MAGASIN] FROM [dbo].[MAGASIN] WHERE LOWER(MAG_NOM LIKE) LOWER('%" + get_wharehouse_name() + "%');";
			string response = link::get_first_item(link::get(request, "MAGASIN"));

			// set the id_wharehouse
			this->id_wharehouse = response;
		}
		return this->id_wharehouse;
	};

	string get_quantity() {
		if (this->quantity.empty()) {
			// get the quantity
			string request = "SELECT [STO_QUANTITE] FROM [dbo].[STOCK] WHERE PRO_ID_PRODUIT = " + get_id_product() + " AND MAG_ID_MAGASIN = " + get_id_wharehouse() + ";";
			string response = link::get_first_item(link::get(request, "STOCK"));

			// set the quantity
			this->quantity = response;
		}
		return this->quantity;
	};

	string save_parameter() {
		// save all parameters to the database
		// check if a stock alreday exists with the id_product and id_wharehouse
		// if it does, modify the quantity
		// else create a new stock
		// id_product and id_wharehouse are retrieved from the database using the product_name if they're not set

		string request, response;

		if (id_product.empty()) {
			// get the id of the product
			request = "SELECT [PRO_ID_PRODUIT] FROM [dbo].[PRODUIT] WHERE SELECT(PRO_NOM_PRODUIT) LIKE LOWER(%'" + product_name + "'%);";
			response = link::get_first_item(link::get(request, "PRODUIT"));

			// set the id_product
			this->id_product = response;
		}
		if (id_wharehouse.empty()) {
			// get the id of the wharehouse
			request = "SELECT [MAG_ID_MAGASIN] FROM [dbo].[MAGASIN] WHERE LOWER(MAG_NOM) LIKE LOWER(%'" + wharehouse_name + "'%);";
			response = link::get_first_item(link::get(request, "MAGASIN"));

			// set the id_wharehouse
			this->id_wharehouse = response;
		}

		// check if a stock already exists with the id_product and id_wharehouse
		request = "SELECT [STO_QUANTITE] FROM [dbo].[STOCK] WHERE PRO_ID_PRODUIT = " + id_product + " AND MAG_ID_MAGASIN = " + id_wharehouse + ";";
		response = link::get_first_item(link::get(request, "STOCK"));

		if (response.empty()) {
			// create a new stock
			request = "INSERT INTO [dbo].[STOCK] ([PRO_ID_PRODUIT], [MAG_ID_MAGASIN], [STO_QUANTITE]) VALUES (" + id_product + ", " + id_wharehouse + ", " + quantity + ");";
			link::set(request);
		}
		else {
			// modify the quantity
			request = "UPDATE [dbo].[STOCK] SET [STO_QUANTITE] = " + quantity + " WHERE PRO_ID_PRODUIT = " + id_product + " AND MAG_ID_MAGASIN = " + id_wharehouse + ";";
			link::set(request);
		}

		return response;
	}

	// setters
	void set_product_name(string product_name) { this->product_name = product_name; };
	void set_id_product(string id_product) { this->id_product = id_product; };
	void set_wharehouse_name(string wharehouse_name) { this->wharehouse_name = wharehouse_name; };
	void set_id_wharehouse(string id_wharehouse) { this->id_wharehouse = id_wharehouse; };
	void set_quantity(string quantity) { this->quantity = quantity; };
};