#ifndef _LITLLEHANDS_H_
#define _LITLLEHANDS_H_

#include "FruitBox.h"

class LittleHand
{
	public:
		LittleHand();
		~LittleHand();
		virtual void sortFruitBox(FruitBox& unsorted,
		FruitBox& lemons,
		FruitBox& bananas,
		FruitBox& limes);
};

#endif
