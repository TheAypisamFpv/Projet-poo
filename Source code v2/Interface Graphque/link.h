#pragma once
#include <string>
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include "CLcad.h"

// SQL command possible:
// CLients: create, modify, delete, show
// Staff: create, modify, delete, show
// orders: create, modify, delete, show
// products: create, modify, delete, show

// command template received by the controller: table:command:parameters

using namespace std;

class link {
public:
	link() {};
	~link() {};
	string convert_date(string date) {
		//convert a date dd/mm/yyyy to yyyy-mm-dd
		string year = date.substr(6, 4);
		string month = date.substr(3, 2);
		string day = date.substr(0, 2);
		string new_date = year + "-" + month + "-" + day;
		return new_date;
	}

	System::Data::DataSet^ hub(string table, string command, string parameters);
	void create(string parameters) {};
	void modify(string parameters) {};
	void delete_(string parameters) {};
	System::Data::DataSet^ show(string parameters) {};
	
	System::Data::DataSet^ get(string request, string tablename);
	void set(std::string request);
	
	string get_first_item(System::Data::DataSet^ data);
};