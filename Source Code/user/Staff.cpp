#include "Staff.h"

Staff::Staff() :User() {
	//Initialisation specifique a Staff
	id_staff = 0;
	//initialisation les autres proprietes
 }

Staff::~Staff() {
	//implementation du destructeur de staff
}

std::string Staff::get_info() const
{
	//implementation specifique a staff de get_info
	return "Staff information";
}

Staff Staff::get_superior() const
{
	
	//implementation de get_superior
	Staff superior;
	//logique pou recuperer le superieur
	return superior;
}

