#pragma once
#include <string>
#include <iostream>

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
	string hub(string table, string command, string parameters);
	string create(string parameters) {};
	string modify(string parameters) {};
	string delete_(string parameters) {};
	string show(string parameters) {};

	string execute(string request);
};