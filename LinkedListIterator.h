#pragma once

/*
*Iterator class for the LinkedList class
*/
class LinkedListIterator
{
	friend class LinkedList;
public:
	LinkedListIterator();
	~LinkedListIterator();

	LinkedListIterator begin();
	LinkedListIterator end();
	LinkedListIterator operator++(int);
};
