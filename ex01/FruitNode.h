#ifndef _FRUITNODE_H_
#define _FRUITNODE_H_

#include <string>
#include "Fruit.h"

class FruitNode
{
	public:
		Fruit *content;
		FruitNode *next;
};

#endif
