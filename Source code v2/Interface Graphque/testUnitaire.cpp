#include "controller.h"
// test the controller

int main()
{
	Controller c;
	System::String^ test_create_client = "client:create:name,surname,mail,phone,address,birth_date";

	System::Data::DataSet^ void_;

	int passed = 0;
	int failed = 0;

	Controller controller;
	std::cout << endl << "Test 1: create a client : ";
	if (controller.Table(test_create_client) == void_) {
		std::cout << "passed" << std::endl;
		passed += 1;
	}
	else {
		std::cout << "failed" << std::endl;
		failed += 1;
	}


	System::String^ test_modify_client² = "client:modify:1:name,surname,mail,phone,address,birth_date";

	std::cout << endl << "Test 2: modify a client : ";
	if (controller.Table(test_modify_client²) == void_) {
		std::cout << "passed" << std::endl;
		passed += 1;
	}
	else {
		std::cout << "failed" << std::endl;
		failed += 1;
	}



	System::String^ test_delete_client = "client:delete:1";

	std::cout << endl << "Test 3: delete a client : ";
	if (controller.Table(test_delete_client) == void_) {
		std::cout << "passed" << std::endl;
		passed += 1;
	}
	else {
		std::cout << "failed" << std::endl;
		failed += 1;
	}

	System::String^ test_show_client = "client:show:1";
	// if the data set is not empty, the test is passed
	std::cout << endl << "Test 4: show a client : ";
	if (controller.Table(test_show_client) != void_) {
		std::cout << "passed" << std::endl;
		passed += 1;
	}
	else {
		std::cout << "failed" << std::endl;
		failed += 1;
	}

	// show the number of passed and failed tests
	std::cout << endl << passed << " test passed -- " << failed << " failed test" << std::endl;

}