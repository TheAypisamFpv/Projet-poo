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



string Client::get_account_data(string request) const
{
	request = "client:get_account_data:" + request;
	return Table(request);
}

string Client::get_bill(string request) const
{
	request = "client:get_bill:" + request;
	return Table(request);
}

string Client::get_bills(string request) const
{
	request = "client:get_bills:" + request;
	return Table(request);
}

string Client::get_order_details(string request) const
{
	request = "client:get_order_details:" + request;
	return Table(request);
}

string Client::delete_(string request)
{
	request = "client:delete:" + request;
	return Table(request);
}

string Client::create(string request)
{
	request = "client:create:" + request;
	return Table(request);
}

string Client::modify(string request)
{
	request = "client:modify:" + request;
	return Table(request);
}

string Client::show(string request)
{
	request = "client:show:" + request;
	return Table(request);
}