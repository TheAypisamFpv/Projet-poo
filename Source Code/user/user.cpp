#include "User.h"

User::User()
{
	//implementation du constructeur
}

User::~User()
{
	//Implementation du destructeur
}

std::string User::get_info() const
{//Implementation de get_info()
	return "Les informations de l'utilisateur";
}

int User::delete_user()
{
	//implementation de delte_user
	return 0;
}

int User::show_user()
{ 
	//implementation de show_user
	return 0;
}

std::string User::get_clients() const
{   //implementation
	return "La liste des clients";
}

std::string User::get_staff() const
{
	//implementation
	return "La liste du personnel";
}

int User::create()
{  //implementation
	return 0;
}

int User::modify()
{
	//implementation
	return 0;
}
