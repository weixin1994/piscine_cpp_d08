#include "Lime.h"

Lime::Lime() : Lemon("lime", 2)
{
	
}

Lime::~Lime()
{
	
}

std::string Lime::getName() const
{
	return (_name);
}

int	Lime::getVitamins() const
{
	return (_vitamins);
}
