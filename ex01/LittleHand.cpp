#include <cstring>
#include "LittleHand.h"
#include "Banana.h"
#include "Lemon.h"
#include "Lime.h"

LittleHand::LittleHand()
{
	
}

LittleHand::~LittleHand()
{
	
}

void LittleHand::sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes)
{
	int length = unsorted.nbFruits();
	for (int i = 0; i < length; i++) 
	{
		bool flag = false;
		Fruit *f = unsorted.pickFruit();
		if (dynamic_cast<Lime*>(f) != nullptr)
			flag = limes.putFruit(f);
		else if (dynamic_cast<Lemon*>(f) != nullptr)
			flag = lemons.putFruit(f);
		else if (dynamic_cast<Banana*>(f) != nullptr)
			flag = bananas.putFruit(f);
		if (!flag)
			unsorted.putFruit(f);
	}
}
