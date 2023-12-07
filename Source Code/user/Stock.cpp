

#include "Stock.h"
#include "controller.cpp"
#include <string>
using namespace std;

Stock::Stock() : User() {

	// Initialisation spécifique à Stock

	id_stock = 0;

	// Initialiser les autres propriétés

}

Stock::~Stock() {

	// Implémentation du destructeur de Stock

}



string Stock::calculate(int request) const {

	if (request.empty()) {
		return "error:invalid_request:empty_arguments";
	}

	request = "calculate_" + request;
	return Stats(request);

}

string Stock::identify(string request) const {

	request = "identify_" + request;
	return Stats(request);


}

string Stock::simulate(string request) const {

	request = "simulate_" + request;
	return Stats(request);

}

string Stock::create(string request)
{
	request = "article:create:" + request;
	return Table(request);
}

string Stock::delete_(string request)
{
	request = "article:delete:" + request;
	return Table(request);
}

string Stock::modify(string request)
{
	request = "article:modify:" + request;
	return Table(request);
}

string Stock::show(string request)
{
	request = "stock:show:" + request;
	return Table(request);
}