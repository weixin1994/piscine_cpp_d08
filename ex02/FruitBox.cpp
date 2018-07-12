#include "FruitBox.h"

FruitBox::FruitBox(int size) : _size(size), _list(NULL)
{
	
}

FruitBox::~FruitBox()
{
	FruitNode* del;
	while (_list)
	{
		del = _list;
		_list = _list->next;
		delete del;
	}
}

int	FruitBox::nbFruits() const
{
	int	count = 0;
	FruitNode* temp = _list;
	while (temp && temp->elem != NULL)
	{
		count++;
		temp = temp->next;
	}
	return count;
}

bool FruitBox::putFruit(Fruit const* add)
{
	FruitNode* temp = _list;
	FruitNode* last = new FruitNode;

	last->elem = add;
	last->next = NULL;
	if (nbFruits() >= _size)
		return false;
	else if (temp == NULL)
	{
		_list = last;
		return true;
    }
	while (temp->next)
	{
		if (temp->elem == add)
			return false;
      temp = temp->next;
	}
	if (temp->elem == add)
		return false;
	temp->next = last;
	return true;
}

Fruit* FruitBox::pickFruit()
{
	FruitNode* temp = _list;
	Fruit const* ret;
	while (temp)
	{
		if (temp->elem)
		{
			ret = temp->elem;
			_list = _list->next;
			delete temp;
			return const_cast<Fruit*>(ret);
		}
		temp = temp->next;
	}
	return NULL;
}

FruitNode* FruitBox::head() const
{
  return _list;
}
