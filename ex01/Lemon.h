#ifndef _LEMON_H_
#define _LEMON_H_

#include <iostream>
#include "Fruit.h"

class Lemon : public Fruit
{
	public:
		Lemon();
		Lemon(std::string const&, int);
		~Lemon();
		virtual std::string const& getName() const;
};

#endif
