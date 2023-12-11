#pragma once
#include <string>
#include "link.h"

using namespace std;

class order : public link {
private:
	string id_order;
	string facturation_date;
	string eta_date;
	string paiment_number;
	string paiment_methode;
	string price_og;
	string comercial_marge;
	string comercial_reduction;
	string demarque_inconnu;
	string tva;
	string price;
	string items;
	string id_client;


public:
	order() {
		// set all variables to default values
		this->id_order = "";
		this->facturation_date = "";
		this->eta_date = "";
		this->paiment_number = "";
		this->paiment_methode = "";
		this->price_og = "";
		this->comercial_marge = "";
		this->comercial_reduction = "";
		this->demarque_inconnu = "";
		this->tva = "";
		this->price = "";
		this->items = "";
		this->id_client = "";
	};

	~order() {};

	void create(string paramter);
	void modify(string paramter);
	void delete_(string paramter);
	System::Data::DataSet^ show(string paramter);

	// getters
	string get_id_order() { return this->id_order; };
	string get_facturation_date() { return this->facturation_date; };
	string get_eta_date() { return this->eta_date; };
	string get_paiment_number() { return this->paiment_number; };
	string get_paiment_methode() { return this->paiment_methode; };
	string get_price_og() { return this->price_og; };
	string get_comercial_marge() { return this->comercial_marge; };
	string get_comercial_reduction() { return this->comercial_reduction; };
	string get_demarque_inconnu() { return this->demarque_inconnu; };
	string get_tva() { return this->tva; };
	string get_price() { return this->price; };
	string get_items() { return this->items; };
	string get_id_client() { return this->id_client; };


	void save_parameter() {
		// save all parameters to the database
		// if id_order is empty, create a new order
		// else update the order with the id_order

		string request, response;

		// create a new order
		if (this->id_order == "") {
			// INSERT INTO [dbo].[FACTURE] ([FAC_NOM_FACTURE], [FAC_DATE_FACTURATION], [FAC_DATE_COMMANDE], [FAC_DATE_LIVRAISON], [FAC_MOYEN_PAIEMENT], [FAC_PRIX], [FAC_MARGE], [FAC_REMISE], [FAC_TVA], [FAC_PRIX_TTC], [ADR_ID_ADRESSE], [COMCLI_ID_COMPTE]) VALUES
			// to create a new order, we need to get the id_client, the id_adresse and the price
			// price is the sum of all the items in the cart
			// items is stored as a string with the format "item1-quantity1\nitem2-quantity2\nitem3-quantity3\n..."
			string id_adresse, price, item_name, quantity, id_item, id_achat;
			// get the id_adresse
			request = "SELECT top 1 ADR_ID_ADRESSE FROM ADRESSE WHERE COMCLI_ID_COMPTE = (SELECT COMCLI_ID_COMPTE FROM compte_client WHERE COMCLI_NUMERO_COMPTE = '" + this->id_client + "');";
			id_adresse = link::get_first_item(link::execute(request));

			// get the last id from the table ACHAT
			request = "SELECT TOP 1 ACH_ID_ACHAT FROM ACHAT;";
			// increment the id
			id_achat = to_string(stoi(link::get_first_item(link::execute(request))) + 1);

			// get the price
			// for loop to get the price
			// count the number of items (number of \n)

			int item_number = count(this->items.begin(), this->items.end(), '\n');
			for (int i = 0; i < item_number; i++) {
				// get the item_name
				item_name = this->items.substr(0, this->items.find("-", 0));

				// get the quantity
				quantity = this->items.substr(this->items.find("-", 0) + 1, this->items.find("\n", 0) - this->items.find("-", 0) - 1);

				// get the price
				request = "SELECT PRO_PRIX FROM PRODUIT WHERE PRO_NOM_PRODUIT LIKE '" + item_name + "'";
				price = link::get_first_item(link::execute(request));

				// get the item id
				request = "SELECT PRO_ID_PRODUIT FROM PRODUIT WHERE PRO_NOM_PRODUIT LIKE '" + item_name + "'";
				id_item = link::get_first_item(link::execute(request));

				// add the item to the table ACHAT
				request = "INSERT INTO [dbo].[ACHAT] ([ACH_ID_ACHAT], [ACH_QUANTITE], [PRO_ID_PRODUIT]) VALUES ('" + id_achat + "', '" + quantity + "', '" + id_item + "');";

				// add the price to the total price
				price = to_string(stoi(price) * stoi(quantity));

				// remove the item from the string
				this->items = this->items.substr(this->items.find("\n", 0) + 1, this->items.length() - this->items.find("\n", 0) - 1);
			}

			// add to this->price the comercial_marge, the comercial_reduction, and the tva
			this->price = to_string(stoi(this->price) + (stoi(this->comercial_marge) / 100 * stoi(this->price)) - (stoi(this->comercial_reduction) / 100 * stoi(this->price)) + (stoi(this->tva) / 100 * stoi(this->price)));

			// facture name is the 2 first letters of the client surname, the 2 first letters of the client name , the year of the order, the first 3 letters of the city, and an incremental number
			string facture_name = this->id_client.substr(0, 2) + this->id_client.substr(this->id_client.find(" ", 0) + 1, 2) + this->facturation_date.substr(6, 4) + id_adresse.substr(0, 3);
			// get the last order id
			request = "SELECT TOP 1 FAC_ID_FACTURE FROM FACTURE ORDER BY FAC_ID_FACTURE DESC;";
			string last_id = link::get_first_item(link::execute(request));
			// increment the id
			last_id = to_string(stoi(last_id) + 1);
			this->id_order = last_id;

			// create the order
			request = "INSERT INTO [dbo].[FACTURE] ([FAC_NOM_FACTURE], [FAC_DATE_FACTURATION], [FAC_DATE_COMMANDE], [FAC_DATE_LIVRAISON], [FAC_MOYEN_PAIEMENT], [FAC_PRIX], [FAC_MARGE], [FAC_REMISE], [FAC_TVA], [FAC_PRIX_TTC], [ADR_ID_ADRESSE], [COMCLI_ID_COMPTE]) VALUES ('" + facture_name + "', '" + this->facturation_date + "', '" + this->facturation_date + "', '" + this->eta_date + "', '" + this->paiment_methode + "', '" + price + "', '" + this->comercial_marge + "', '" + this->comercial_reduction + "', '" + this->tva + "', '" + this->price + "', '" + id_adresse + "', '" + this->id_client + "')";
			response = link::get_first_item(link::execute(request));

			// add the id of the order in the table COMMANDE
			request = "INSERT INTO [dbo].[COMMANDE] ([FAC_ID_FACTURE], [ACH_ID_ACHAT], [MAG_ID_MAGASIN]) VALUES ('" + this->id_order + "', '" + id_achat + "', '1');";
			response += "\n" + link::get_first_item(link::execute(request));
		}
		else {
			// update the order
			// update only the parameters that are not empty
			request = "UPDATE [dbo].[FACTURE] SET ";
			if (!this->facturation_date.empty()) {
				request += "[FAC_DATE_FACTURATION] = '" + this->facturation_date + "', ";
				request += "[FAC_DATE_COMMANDE] = '" + this->facturation_date + "', ";
			}
			if (!this->eta_date.empty()) { request += "[FAC_DATE_LIVRAISON] = '" + this->eta_date + "', "; }
			if (!this->paiment_methode.empty()) { request += "[FAC_MOYEN_PAIEMENT] = '" + this->paiment_methode + "', "; }
			if (!this->price.empty()) { request += "[FAC_PRIX] = '" + this->price + "', "; }
			if (!this->comercial_marge.empty()) { request += "[FAC_MARGE] = '" + this->comercial_marge + "', "; }
			if (!this->comercial_reduction.empty()) { request += "[FAC_REMISE] = '" + this->comercial_reduction + "', "; }
			if (!this->tva.empty()) { request += "[FAC_TVA] = '" + this->tva + "', "; }
			if (!this->price.empty()) { request += "[FAC_PRIX_TTC] = '" + to_string(stoi(this->price) + (stoi(this->tva) / 100 * stoi(this->price))) + "', "; }
			if (!this->id_client.empty()) { request += "[COMCLI_ID_COMPTE] = '" + this->id_client + "', "; }
			if (!this->items.empty()) { request += "[FAC_ID_FACTURE] = '" + this->items + "', "; }
			// remove the last comma
			request = request.substr(0, request.size() - 2);
			// add the where clause
			request += " WHERE [FAC_ID_FACTURE] = '" + this->id_order + "';";
			link::execute(request);
		}
		return ;
	};


	// setters
	void set_id_order(string id_order) { this->id_order = id_order; };
	void set_facturation_date(string facturation_date) { this->facturation_date = facturation_date; };
	void set_eta_date(string eta_date) { this->eta_date = eta_date; };
	void set_paiment_number(string paiment_number) { this->paiment_number = paiment_number; };
	void set_paiment_methode(string paiment_methode) { this->paiment_methode = paiment_methode; };
	void set_price_og(string price_og) { this->price_og = price_og; };
	void set_comercial_marge(string comercial_marge) { this->comercial_marge = comercial_marge; };
	void set_comercial_reduction(string comercial_reduction) { this->comercial_reduction = comercial_reduction; };
	void set_demarque_inconnu(string demarque_inconnu) { this->demarque_inconnu = demarque_inconnu; };
	void set_tva(string tva) { this->tva = tva; };
	void set_price(string price) { this->price = price; };
	void set_items(string items) { this->items = items; };
	void set_id_client(string id_client) { this->id_client = id_client; };

};