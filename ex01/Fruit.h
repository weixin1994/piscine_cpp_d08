#ifndef _FRUIT_H_
#define _FRUIT_H_

#include <iostream>

class Fruit
{
	public:
		Fruit(std::string const&, int);
		virtual ~Fruit();
		virtual std::string const& getName() const = 0;
		int	getVitamins() const;
  
	protected:
		std::string	const _name;
		int	_vitamins;
  
};

#endif
