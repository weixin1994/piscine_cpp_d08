#ifndef _FRUITNODE_H_
#define _FRUITNODE_H_

#include "Fruit.h"

typedef struct s_FruitNode FruitNode;

struct s_FruitNode
{
	  Fruit const* elem;
	  FruitNode* next;
};


#endif
