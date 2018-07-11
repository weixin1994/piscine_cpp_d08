#ifndef _LIME_H_
#define _LIME_H_

#include <string>
#include "Lemon.h"

class Lime : public Lemon
{
	public:
		Lime();
		~Lime();
		std::string getName() const;
		int getVitamins() const;
};

#endif
