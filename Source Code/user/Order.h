#pragma once
#include "User.h"
class Order :public User {
private:
	int id_order;
	//proprietes specifiques a order
public:
	Order();
	~Order() override;
	std::string get_info() const override;
	//methodes specifiques a Order

 };
