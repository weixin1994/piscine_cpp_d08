#ifndef _FRUIT_H_
#define _FRUIT_H_

#include <string>

class Fruit
{
	public:
		Fruit(std::string const &name, int const vitamins);
		virtual ~Fruit();
		virtual std::string getName() const;
		virtual int getVitamins() const;
		
	protected:
		std::string _name;
		int _vitamins;
};

#endif
