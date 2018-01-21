#pragma once

/*
*Node class with next and previous linking
*/
template<class T>
class Node
{
public:
	T data;
	Node<T> *next;
	Node<T> *previous;

	Node();
	Node(const T & d);
	~Node();
};
