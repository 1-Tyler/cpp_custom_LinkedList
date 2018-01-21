#pragma once
#ifndef NODE_H
#define NODE_H

template<class T>
class Node
{
public:
	T data;
	Node<T> *next;
	Node<T> *previous;
	//Node(T& d) : data(d), next(NULL) {};
	Node();
	Node(const T & d);
	~Node();
};

#endif // !NODE_H
