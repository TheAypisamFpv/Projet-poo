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

string User::get_info() const
{//Implementation de get_info()
	return "Les informations de l'utilisateur";
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
	//implementation de delte_user
	request = "user:delete:" + request;
	return Table(request);
}

string User::show(string request)
{ 
	//implementation de show_user
	return 0;
}


	
string User::create(string request)
{  //implementation
	return 0;
}

string User::modify(string request)
{
	//implementation
	return 0;
}
