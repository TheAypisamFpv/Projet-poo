#pragma once
#include <string>
#include <iostream>
#include <algorithm>


using namespace std;

class Controller {
private:
	string forbidden_characters = "*';\""; // list of forbidden characters
	string forbidden_words = "select,drop"; // list of forbidden words
public:
	Controller() {};
	~Controller() {};
	string SQL_check(string request);
	System::Data::DataSet^ Table(System::String^ request);
	string Stats(System::String^ request);
	System::Data::DataSet^ csv_input(string csv);
};