#pragma once
#include "User.h"

class Staff :public User {
private:
	int id_staff;
	std::string name;
	std::string surname;
	std::string mail;
	std::string phone;
	std::string hiring_date;
	int id_superior;
	
public:
	Staff();
	~Staff() override;
	std::string get_info() const override;
	Staff get_superior() const;
};
