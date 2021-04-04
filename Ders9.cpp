#include <iostream>

using namespace std;



int main()
{
   
	string sys_username = "EmrahGK";
	string sys_password = "password_of_app";

	string username;
	string password;

	cout << "Please enter username: ";
		cin >> username;
	
	cout << "Please enter password: ";
		cin >> password;


		if (sys_username == username && sys_password == password) {
			cout << "Welcome!!";
		}

		else if (sys_username != username && sys_password == password) {
			cout << "You entered username incorrectly. Please try again...";
		}


		else if (sys_username == username && sys_password != password) {
			cout << "You entered password incorrectly. Please try again...";
		}

		else {
			cout << "You entered username and password incorrectly. Please try again...";
		}

	return 0;

}
