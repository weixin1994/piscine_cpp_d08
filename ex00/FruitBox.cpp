#include "FruitBox.h"

FruitBox::FruitBox(int _size) :  list(NULL), _size(_size), _number(0)
{
	
}

FruitBox::~FruitBox()
{
	
}

int	FruitBox::nbFruits()
{
	return (_number);
}

bool FruitBox::putFruit(Fruit *f)
{
	if (f != NULL && _number < _size)
	{
		FruitNode *current = list;
		FruitNode *node = new FruitNode();
		node->content = f;
		if (!list)
			list = node;
		else
		{
			if (current->content == f)
				return (false);
			while (current->next)
			{
				if (current->content == f)
					return (false);
				current = current->next;
			}
			current->next = node;
		}
		_number++;
		return (true);
	}
	return (false);
}

Fruit *FruitBox::pickFruit()
{
	if (!list)
		return (NULL);
	Fruit *temp = list->content;
	list = list->next;
	_number--;
	return (temp);
}

FruitNode *FruitBox::head() const
{
	return (list);
}

int	FruitBox::getSize()
{
	return (_size);
}
