#pragma once
#include <string.h>
#include <iostream>
#include <algorithm>


using namespace std;

class Controller {
private:
	string forbidden_characters = "*';\\\""; // list of forbidden characters
	string forbidden_words = "select,drop"; // list of forbidden words
public:
	Controller() {};
	~Controller() {};
	string SQL_check(string request);
	string Table(string request);
	string Stats(string request);
	string csv_input(string csv);
};