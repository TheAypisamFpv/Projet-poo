// simule l'interface graphique (utilisation de la console)

#include <iostream>
#include <string>
#include "controller.h"

using namespace std;

Controller controller;

int main() {
	while (true) {
		string request;
		cout << endl << "Enter your request (table/stats) : " << endl << "> ";
		getline(cin, request);
		if (request == "table") {
			cout << "Enter your request (table:command:parameters) : " << endl << "> ";
			getline(cin, request);

			string response = controller.Table(request);
			cout << "response : " << response << endl;

		}
		else if (request == "stats") {
			cout << "Enter your request (command:parameters) : " << endl << "> ";
			getline(cin, request);

			request = controller.Stats(request);
			cout << "response : " << request << endl;
		}
		else {
			cout << "invalid request" << endl;
		}
	}
}