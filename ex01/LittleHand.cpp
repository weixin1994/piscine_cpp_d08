#include "LittleHand.h"
#include "Lemon.h"
#include "Banana.h"
#include "Lime.h"

void LittleHand::sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes)
{
	FruitBox temp = FruitBox(unsorted.getSize());
	if (unsorted.head() == NULL)
		return;
	auto f = unsorted.pickFruit();
	while (f) 
	{
		auto name = f->getName();
		if (name == "lemon" && lemons.nbFruits() < lemons.getSize())
			lemons.putFruit(f);
		else if (name == "banana" && bananas.nbFruits() < bananas.getSize())
			bananas.putFruit(f);
		else if (name == "lime" && limes.nbFruits() < limes.getSize())
			limes.putFruit(f);
		else
			temp.putFruit(f);
		f = unsorted.pickFruit();
	}
	unsorted = temp;
}
