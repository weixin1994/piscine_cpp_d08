#ifndef _BANANA_H_
#define _BANANA_H_

#include <iostream>
#include "Fruit.h"

class Banana : public Fruit
{
	public:
		Banana();
		~Banana();
		virtual std::string const&	getName() const;
};

#endif
