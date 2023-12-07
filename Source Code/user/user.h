#pragma once
#include <string>

class User {
public:
	User();
	virtual ~User();
	virtual std::string get_info() const;
	virtual int delete_user();
	virtual int show_user();
	virtual std::string get_clients() const;
	virtual std::string get_staff() const;
	virtual int create();
	virtual int modify();



};
