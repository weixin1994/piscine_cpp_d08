#ifndef _BANANA_H_
#define _BANANA_H_

#include <string>
#include "Fruit.h"

class Banana : public Fruit
{
	public:
		Banana();
		~Banana();
		
		std::string getName() const;
		int getVitamins() const;
};

#endif
