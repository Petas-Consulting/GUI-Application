#include "stdafx.h"
#include "GUI.h"
#include <string>
#include <iostream>

using namespace std;

GUI::GUI()
{
}


GUI::~GUI()
{
}

void GUI::displayMenu() {

	cout << "Welcome to the GUI!" << endl;
	cout << "Please select an option:" << endl;
	cout << "1. Create a new user" << endl;
	cout << "2. Login as an existing user" << endl;
	cout << "3. Exit" << endl;

}

int GUI::getInput() {

	int input;
	cin >> input;

	return input;
}

void GUI::processInput(int input) {

	switch (input) {

	case 1:
		createUser();
		break;
	case 2:
		loginUser();
		break;
	case 3:
		exitProgram();
		break;
	default:
		cout << "Invalid input. Please try again." << endl;
	}
}

void GUI::createUser() {

	string username;
	string password;

	cout << "Please enter a username: ";
	cin >> username;
	cout << "Please enter a password: ";
	cin >> password;

	// TODO: Create user in database
}

void GUI::loginUser() {

	string username;
	string password;

	cout << "Please enter your username: ";
	cin >> username;
	cout << "Please enter your password: ";
	cin >> password;

	// TODO: Check if user exists in database
}

void GUI::exitProgram() {

	cout << "Goodbye!" << endl;
	// TODO: Exit program
}

// Start the game
playGame();
