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

FruitBox *const *LittleHand::organizeCoconut(Coconut const * const *coconuts)
{
	if (!coconuts)
		return NULL;
	size_t box_num = 0;
	FruitBox **res = nullptr;
	FruitBox **temp;
	while (*coconuts) 
	{
		temp = new FruitBox*[box_num + 1];
		memcpy(temp, res, box_num * sizeof(*temp));
		delete[] res;
		res = temp;
		res[box_num] = new FruitBox(6);
		for (int i = 0; i < 6 && *coconuts; i++)
			res[box_num]->putFruit(*coconuts++);
		box_num++;
	}
	temp = new FruitBox*[box_num + 1];
	memcpy(temp, res, box_num * sizeof(*temp));
	delete[] res;
	temp[box_num] = nullptr;
	return (temp);
} 
