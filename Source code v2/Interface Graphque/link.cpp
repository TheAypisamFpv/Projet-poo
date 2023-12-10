#include "link.h"
#include "client.h"
#include "order.h"
#include "staff.h"
#include "stock.h"
#include <string>

using namespace std;

string link::hub(string table, string command, string parameters) {
	if (table == "client") {
		client c;
		if (command == "create") {
			return c.create(parameters);
		}
		else if (command == "modify") {
			return c.modify(parameters);
		}
		else if (command == "delete") {
			return c.delete_(parameters);
		}
		else if (command == "show") {
			return c.show(parameters);
		}
		else {
			return "Error:client:command not found";// il est chokbar
		}
	}
	else if (table == "staff") {
		staff s;
		if (command == "create") {
			return s.create(parameters);
		}
		else if (command == "modify") {
			return s.modify(parameters);
		}
		else if (command == "delete") {
			return s.delete_(parameters);
		}
		else if (command == "show") {
			return s.show(parameters);
		}
		else {
			return "Error:staff:command not found";// il est chokbar
		}
	}
	else if (table == "order") {
		order o;
		if (command == "create") {
			return o.create(parameters);
		}
		else if (command == "modify") {
			return o.modify(parameters);
		}
		else if (command == "delete") {
			return o.delete_(parameters);
		}
		else if (command == "show") {
			return o.show(parameters);
		}
		else {
			return "Error:order:command not found";// il est chokbar
		}
	}
	else if (table == "stock") {
		stock s;
		if (command == "create") {
			return s.create(parameters);
		}
		else if (command == "modify") {
			return s.modify(parameters);
		}
		else if (command == "delete") {
			return s.delete_(parameters);
		}
		else if (command == "show") {
			return s.show(parameters);
		}
		else {
			return "Error:stock:command not found";// il est chokbar
		}
	}
	else {
		return "Error: table not found";// il est chokbar
	}
}

string link::execute(string request) {
	return "ok";
}


