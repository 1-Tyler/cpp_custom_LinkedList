#pragma once

#include "Node.h"
#include <iostream>
#include <string>
using std::ostream;

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

	void pushFirst(T value);
	void pushLast(T value);
	T popFirst();
	T popLast();
	T peekFirst();
	T peekLast();
	bool isEmpty();
	friend ostream& operator<<(std::ostream& os, const LinkedList<T>& list);
	std::string toString();
	void printList();
	//std::ostream& operator<<(std::ostream& os, const LinkedList<T>& list);
};



