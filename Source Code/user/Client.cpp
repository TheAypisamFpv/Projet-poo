#include "Client.h"
#include "controller.cpp"

using std::string;

Client::Client():User()
{
	//initialisation specifique a client
	id_client = 0;
	//initialisation les autres proprietes
}

Client::~Client()
{
	//implemenattion du dest..
}

string Client::get_info() const
{
	//implementation specifique a get_info() du client
	return "Les informations du client";
}

string Client::get_account_data() const
{
	//implementation
	return "Account data for client";
}

string Client::get_bill(int bill_id) const
{
	//implementation
	return "Bill information for client";
}

string Client::get_bills(int order_id) const
{
	//implementation
	return "List of bills for client";
}

string Client::get_order_details(int order_id) const
{
	//implementation
	return "Order details for client";
}

string Client::delete_(string request)
{
	request = "client:delete:" + request;
	return table(request);
}

string Client::create(string request)