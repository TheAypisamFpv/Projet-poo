#include "Order.h"

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

std::string Order::get_info() const
{
	//implementation specifique a Order de get_info
	return "Order information";
}
