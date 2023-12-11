#include "controller.h"
// test the controller

int main()
{
	// to test the database must be empty
	System::Data::DataSet^ void_;

	int passed = 0;
	int failed = 0;



	Controller controller;
	std::cout << endl << "Test 1: create a client : ";
	System::String^ test_create_client = "client:create:name,surname,mail,phone,address,birth_date";
	// use the last id
	System::String^ test_show_client = "client:show:1";

	// check if the client is created by creating it, then checking if it exists

	controller.Table(test_create_client);
	System::Data::DataSet^ verif = controller.Table(test_show_client);
	
	if (verif->Tables[0]->Rows[0]->ItemArray[1]->ToString() == "name")
	{
		std::cout << "passed V" << std::endl;
		passed += 2; // 2 because we test the creation and the show
	}
	else
	{
		std::cout << "failed X" << std::endl;
		failed += 2;
	}

	// test 2: modify a client
	std::cout << endl << "Test 2: modify a client : ";
	System::String^ test_modify_client = "client:modify:1:namemodify,surname,mail,phone,address,birth_date";

	controller.Table(test_modify_client);
	System::Data::DataSet^ verif = controller.Table(test_show_client);

	if (verif->Tables[0]->Rows[0]->ItemArray[1]->ToString() == "namemodify")
	{
		std::cout << "passed V" << std::endl;
		passed++;
	}
	else
	{
		std::cout << "failed X" << std::endl;
		failed++;
	}

	// test 3: delete a client
	std::cout << endl << "Test 3: delete a client : ";
	System::String^ test_delete_client = "client:delete:1";

	controller.Table(test_delete_client);
	System::Data::DataSet^ verif = controller.Table(test_show_client);

	if (verif->Tables[0]->Rows->Count == 0)
	{
		std::cout << "passed V" << std::endl;
		passed++;
	}
	else
	{
		std::cout << "failed X" << std::endl;
		failed++;
	}

	// show the number of passed and failed tests
	std::cout << endl << passed << " test passed -- " << failed << " failed test" << std::endl;
	std::cout << "percentage of success : " << (passed * 100) / (passed + failed) << "%" << std::endl;

}