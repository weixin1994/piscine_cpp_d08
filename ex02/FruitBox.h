#ifndef _FRUITBOX_H_
#define _FRUITBOX_H_

#include <string>
#include "Fruit.h"
#include "FruitNode.h"

class FruitBox
{
	public:
		FruitBox(int size);
		~FruitBox();
		int nbFruits();
		bool putFruit(Fruit *f);
		Fruit *pickFruit();
		FruitNode *head() const;
		int getSize();
		
	private:
		FruitNode *list;
		int	_size;
		int	_number;
};

#endif
