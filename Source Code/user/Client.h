#pragma once
#include "User.h"
class Client :public User {
private:
	int id_client;
	std::string name;
	std::string surname;
	int id_account;
	std::string mail;
	std::string phone;
	std::string birthdate;
	std::string adress;
	std::string history;

public:
	Client();
	~Client() override;
	
	std::string get_account_data(string request) const;
	std::string get_bill(string request) const;
	std::string get_bills(string request) const; //facture
	std::string get_order_details(string request) const;

 };
