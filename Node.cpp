#include "stdafx.h"
#include "Node.h"

template<class T>
Node<T>::Node()
{
	data = NULL;
	next = NULL;
	previous = NULL;
}

template<class T>
Node<T>::Node(const T& d)
{
	data = d;
	next = NULL;
}
//Node::Node(T& d) : data(d), next(NULL){}

template<class T>
Node<T>::~Node()
{
}
