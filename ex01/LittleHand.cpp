#include "LittleHand.h"

LittleHand::LittleHand()
{
	
}

LittleHand::~LittleHand()
{
	
}

void LittleHand::sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes)
{
	FruitNode *_unsorted = unsorted.head();

	if (!_unsorted)
		return;
	while (_unsorted->next)
	{
		if (_unsorted->content->getVitamins() == 3 && _unsorted->content->getName().compare("lemons") && lemons.nbFruits() < lemons.getSize())
		{
			lemons.putFruit(_unsorted->content);
			unsorted.pickFruit();
		}
		if (_unsorted->content->getVitamins() == 5 && _unsorted->content->getName().compare("bananas") && bananas.nbFruits() < bananas.getSize())
		{
			bananas.putFruit(_unsorted->content);
			unsorted.pickFruit();
		}
		if (_unsorted->content->getVitamins() == 2 && _unsorted->content->getName().compare("limes") && limes.nbFruits() < limes.getSize())
		{
			limes.putFruit(_unsorted->content);
			unsorted.pickFruit();
		}
		_unsorted = _unsorted->next;
	}
}
