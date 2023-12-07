#include "User.h"
#include "controller.cpp"

using std:string;

User::User()
{
	//implementation du constructeur
}

User::~User()
{
	//Implementation du destructeur
}



string User::get_clients() const
{   //implementation
	return "La liste des clients";
}

string User::get_staff() const
{
	//implementation
	return "La liste du personnel";
}

string User::delete_(string request)
{
	
	request = "user:delete:" + request;
	return Table(request);
}

string User::show(string request)
{ 
	
	request = "user:show:" + request;
	return Table(request);

	return 0;
}


	
string User::create(string request)
{  
	request = "user:create:" + request;
	return Table(request);

	return 0;
}

string User::modify(string request)
{
	request = "user:modify:" + request;
	return Table(request);

	return 0;
}
