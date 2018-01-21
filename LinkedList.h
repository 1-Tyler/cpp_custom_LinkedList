#pragma once

#include "Node.h"
#include "Sort.h"
#include <iostream>
#include <string>
using std::ostream;

/*
*LinkedList class with stack and deque properties
*/
template<class T>
class LinkedList
{
private:
	Node<T> * head;
	Node<T> * tail;
public:
	LinkedList();
	LinkedList(Node<T> *newNode);
	~LinkedList();

	/*
	*Adds the object to the top(head) of the LinkedList
	*/
	void pushFirst(T value);

	/*
	*Adds the object to the bottom(tail) of the LinkedList
	*/
	void pushLast(T value);

	/*
	*Removes and returns the object at the top(head) of the LinkedList
	*/
	T popFirst();

	/*
	*Removes and returns the object at the bottom(tail) of the LinkedList
	*/
	T popLast();

	/*
	*Returns the top(head)'s value of the LinkedList
	*/
	T peekFirst();

	/*
	*Returns the bottom(tail)'s value of the LinkedList
	*/
	T peekLast();

	/*
	*Returns true if LinkedList is empty, false otherwise
	*/
	bool isEmpty();

	/*
	*Inserts the object at the given position
	*/
	void insertAt(int position, T valueToInsert);

	void sort();

	/*
	*Prints out the LinkedList via the << operator
	*/
	friend ostream& operator<<(std::ostream& os, const LinkedList<T>& list);

	/*
	*Prints out the LinkedList to the console
	*/
	void printList();
};