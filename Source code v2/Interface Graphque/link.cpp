#include "link.h"
#include "client.h"
#include "order.h"
#include "staff.h"
#include "stock.h"

#include <string>


using namespace std;

System::Data::DataSet^ link::hub(string table, string command, string parameters) {
	if (table == "client") {
		client c;
		if (command == "create") {
			c.create(parameters);
		}
		else if (command == "modify") {
			c.modify(parameters);
		}
		else if (command == "delete") {
			c.delete_(parameters);
		}
		else if (command == "show") {
			return c.show(parameters);
		}
	}
	else if (table == "staff") {
		staff s;
		if (command == "create") {
			s.create(parameters);
		}
		else if (command == "modify") {
			s.modify(parameters);
		}
		else if (command == "delete") {
			s.delete_(parameters);
		}
		else if (command == "show") {
			return s.show(parameters);
		}
	}
	else if (table == "order") {
		order o;
		if (command == "create") {
			o.create(parameters);
		}
		else if (command == "modify") {
			o.modify(parameters);
		}
		else if (command == "delete") {
			o.delete_(parameters);
		}
		else if (command == "show") {
			return o.show(parameters);
		}
	}
	else if (table == "stock") {
		stock s;
		if (command == "create") {
			s.create(parameters);
		}
		else if (command == "modify") {
			s.modify(parameters);
		}
		else if (command == "delete") {
			s.delete_(parameters);
		}
		else if (command == "show") {
			return s.show(parameters);
		}
	}
	System::Data::DataSet^ void_;
	return void_;
}

System::Data::DataSet^ link::get(string request, string tablename) {

	NS_Comp_Data::CLcad^ oCLcad = gcnew NS_Comp_Data::CLcad();
	System::String^ request2 = gcnew System::String(request.c_str());

	System::String^ tablename2 = gcnew System::String(tablename.c_str());

	return oCLcad->get(request2, tablename2);
}

void link::set(string request) {
	NS_Comp_Data::CLcad^ oCLcad = gcnew NS_Comp_Data::CLcad();
	System::String^ request2 = gcnew System::String(request.c_str());

	oCLcad->set(request2);
}

string link::get_first_item(System::Data::DataSet^ data) {
	return msclr::interop::marshal_as<std::string>(data->Tables[0]->Rows[0]->ItemArray[0]->ToString());
}