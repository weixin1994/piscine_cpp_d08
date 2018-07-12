#include "Lemon.h"

Lemon::Lemon() : Fruit("lemon", 3)
{
	
}

Lemon::Lemon(std::string const& name, int vitamins) : Fruit(name, vitamins)
{
	
}

Lemon::~Lemon()
{
	
}

std::string const& Lemon::getName() const
{
  return _name;
}
