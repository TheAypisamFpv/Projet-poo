#include "Order.h"
#include "controller.cpp"

Order::Order():User()
{
	//initialisation specifique a order
	id_order = 0;
	//initialisation les autres proprietes
}

Order::~Order()
{
	//implementation
}



std::string Order::create(string request)
{
	if (request.empty()) {
		return "error:invalid_request:empty_arguments";
	}

	request = "order:create:" + request;
	return Table(request);
}

std::string Order::delete_(string request)
{
	if (request.empty()) {
		return "error:invalid_request:empty_arguments";
	}

	request = "order:delete:" + request;
	return Table(request);

}

std::string Order::modify(string request)
{
	if (request.empty()) {
		return "error:invalid_request:empty_arguments";
	}

	request = "order:modify:" + request;
	return Table(request);

}

string Order::show(string request)
{
	if (request.empty()) {
		return "error:invalid_request:empty_arguments";
	}

	request = "order:show:" + request;
	return Table(request);
}

