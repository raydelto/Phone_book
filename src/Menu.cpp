/*
 * Menu.cpp
 *
 *  Created on: May 22, 2016
 *      Author: raydelto
 */

#include "Menu.h"
#include <iostream>
using namespace std;

Menu::Menu()
{

}

void Menu::clearScreen()
{
	#ifdef _WIN32
	system("cls");
	#else
	system("clear");
	#endif
}

void Menu::pause()
{
	#ifdef _WIN32
	system("pause");
	#else
	system("read -n1 -r -p \"Press any key to continue...\" key");
	#endif
}


bool Menu::validate(int option)
{
	if(option >= 1 && option <= 5)
	{
		return true;
	}else
	{
		cout << "Please pick an option between 1 and 5"<< endl;
		pause();
		return false;
	}
}

void Menu::routeAction(int option)
{
	switch(option)
	{
	case 1:
		listContacts();
		break;
	case 2:
		addContacts();
		break;
	case 3:
		removeContacts();
		break;
	case 4:
		modifyContacts();
		break;

	case 5:
		cout << "Thanks for using our software, good bye!" << endl;
	}
	pause();
}

void Menu::listContacts()
{
	//TODO: Implement this
	cout << "Implement  Menu::listContacts" << endl;
}

void Menu::addContacts()
{
	//TODO: Implement this
	cout << "Implement  Menu::addContacts" << endl;
}

void Menu::removeContacts()
{
	//TODO: Implement this
	cout << "Implement  Menu::removeContacts" << endl;
}

void Menu::modifyContacts()
{
	//TODO: Implement this
	cout << "Implement  Menu::modifyContacts" << endl;
}

void Menu::show()
{
	int option;
	do
	{
		clearScreen();
		cout << "ITLA Phonebook" << endl;
		cout << "1- List contacts" << endl;
		cout << "2- Add contacts" << endl;
		cout << "3- Remove contact" << endl;
		cout << "4- Modify contact" << endl;
		cout << "5- Exit" << endl;
		cout << "Select an option => ";
		cin >> option;
		if(validate(option))
		{
			routeAction(option);
		}
	}while(option !=5);
}
