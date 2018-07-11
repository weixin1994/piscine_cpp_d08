#ifndef _LEMON_H_
#define _LEMON_H_

#include <string>
#include "Fruit.h"

class Lemon : public Fruit
{
	public:
		Lemon();
		Lemon(std::string const &name, int const vitamins);
		virtual ~Lemon();
		virtual std::string getName() const;
		virtual int getVitamins() const;
};

#endif
