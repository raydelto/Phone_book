/*
 * Element.h
 *
 *  Created on: May 22, 2016
 *      Author: raydelto
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_
#include <string>
class Element
{
	public:
		Element(std::string name);

	private:
		Element* _next;
		std::string _name;
		//This means that List can access to all private members of this class
		friend class List;
};

#endif /* ELEMENT_H_ */
