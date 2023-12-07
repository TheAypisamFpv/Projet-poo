#include "Client.h"



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

std::string Client::get_info() const
{
	//implementation specifique a get_info() du client
	return "Les informations du client";
}

std::string Client::get_account_data() const
{
	//implementation
	return "Account data for client";
}

std::string Client::get_bill(int bill_id) const
{
	//implementation
	return "Bill information for client";
}

std::string Client::get_bills(int order_id) const
{
	//implementation
	return "List of bills for client";
}

std::string Client::get_order_details(int order_id) const
{
	//implementation
	return "Order details for client";
}
