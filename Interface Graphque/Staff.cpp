#include "Staff.h"
#include "controller.cpp"
#include <string>
using namespace std;

Staff::Staff() :User() {
	//Initialisation specifique a Staff
	id_staff = 0;
	//initialisation les autres proprietes
}

Staff::~Staff() {
	//implementation du destructeur de staff
}



Staff Staff::get_superior(string request) const
{
	request = "staff:getSuperior:" + request;
	return Table(request);

}

string Staff::create(string request)
{
	if (request.empty()) {
		return "error:invalid_request:empty_arguments";
	}

	request = "staff:create:" + request;
	return Table(request);
}

string Staff::delete_(string request)
{
	if (request.empty()) {
		return "error:invalid_request:empty_arguments";
	}

	request = "staff:delete:" + request;
	return Table(request);
}

string Staff::modify(string request)
{
	if (request.empty()) {
		return "error:invalid_request:empty_arguments";
	}

	request = "staff:modify:" + request;
	return Table(request);
}

string Staff::show(string request)
{
	if (request.empty()) {
		return "error:invalid_request:empty_arguments";
	}

	request = "staff:show:" + request;
	return Table(request);
}

