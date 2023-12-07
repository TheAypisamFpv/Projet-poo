#pragma once
#include <string>

class User {
public:
	User();
	virtual ~User();
	virtual std::string get_clients() const;
	virtual std::string get_staff() const;
	virtual std::string delete_(string request);
	virtual std::string show(string request);
	virtual std::string create(string request);
	virtual std::string modify(string request);



};
