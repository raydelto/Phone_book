/*
 * List.cpp
 *
 *  Created on: May 22, 2016
 *      Author: raydelto
 */

#include "List.h"
#include <iostream>
#include <cstdlib>
using namespace std;

List::List(): _first(NULL), _last(NULL)
{


}

void List::add(Element* element)
{
	//TODO: Implement this method
	cout << "You should write the code for adding " << element -> _name << endl;

}

void List::remove(int index)
{
	//TODO: Implement this method
	cout << "You should write the code for removing the index " << index << endl;
}

void List::modify(int index, std::string name)
{
	//TODO: Implement this method
	cout << "You should write the code for modifying the content for index " << index << endl;

}
