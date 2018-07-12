#ifndef _COCONUT_H_
#define _COCONUT_H_

#include <iostream>
#include "Fruit.h"

class Coconut : public Fruit
{
	public:
		Coconut();
		~Coconut();
		virtual std::string const&	getName() const;
};

#endif
