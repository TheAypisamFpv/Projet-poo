

#include "Stock.h"
#include "controller.cpp"
#include <string>
using namespace std;

Stock::Stock() : User() {

	// Initialisation specifique  Stock

	id_stock = 0;

	// Initialiser les autres proprietes

}

Stock::~Stock() {

	// Implementation du destructeur de Stock

}



string Stock::calculate(string request) const {

	if (request.empty()) {
		return "error:invalid_request:empty_arguments";
	}

	request = "calculate_" + request;
	return Stats(request);

}

string Stock::identify(string request) const {

	if (request.empty()) {
		return "error:invalid_request:empty_arguments";
	}

	request = "identify_" + request;
	return Stats(request);


}

string Stock::simulate(string request) const {

	if (request.empty()) {
		return "error:invalid_request:empty_arguments";
	}

	request = "simulate_" + request;
	return Stats(request);

}

string Stock::create(string request)
{
	if (request.empty()) {
		return "error:invalid_request:empty_arguments";
	}

	request = "article:create:" + request;
	return Table(request);
}

string Stock::delete_(string request) 
{
	if (request.empty()) {
		return "error:invalid_request:empty_arguments";
	}

	request = "article:delete:" + request;
	return Table(request);
}

string Stock::modify(string request)
{
	if (request.empty()) {
		return "error:invalid_request:empty_arguments";
	}

	request = "article:modify:" + request;
	return Table(request);
}

string Stock::show(string request)
{
	if (request.empty()) {
		return "error:invalid_request:empty_arguments";
	}

	request = "stock:show:" + request;
	return Table(request);
}