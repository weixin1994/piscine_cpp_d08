#include "LittleHand.h"


LittleHand::LittleHand()
{
	
}

LittleHand::~LittleHand()
{
	
}

void LittleHand::sortFruitBox(FruitBox& unsorted, FruitBox& lemons, FruitBox& bananas, FruitBox& limes)
{
	FruitBox temp(unsorted.nbFruits());
	Fruit* ret;
  
	while (unsorted.head() && unsorted.head()->elem)
	{
		if (unsorted.head()->elem->getName() == "banana")
		{
			ret = unsorted.pickFruit();
			if (!(bananas.putFruit(ret)))
			temp.putFruit(ret);
		}
		else if (unsorted.head()->elem->getName() == "lemon")
		{
			ret = unsorted.pickFruit();
			if (!(lemons.putFruit(ret)))
			temp.putFruit(ret);
		}
		else if (unsorted.head()->elem->getName() == "lime")
		{
			ret = unsorted.pickFruit();
			if (!(limes.putFruit(ret)))
			temp.putFruit(ret);
		}
		else
			temp.putFruit(unsorted.pickFruit());;
	}
	while (temp.head() && temp.head()->elem)
		unsorted.putFruit(temp.pickFruit());
}
