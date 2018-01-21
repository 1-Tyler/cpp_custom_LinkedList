#include "stdafx.h"
#include "LinkedList.h"
#include <string>
#include <sstream>

template<class T>
LinkedList<T>::LinkedList()
{
	//head = NULL;
	//tail = NULL;
	//head->next = NULL;
	//tail->next = NULL;
}

template<class T>
LinkedList<T>::LinkedList(Node<T> *newNode)
{
	head = newNode;
	head->next = NULL;
}

template<class T>
LinkedList<T>::~LinkedList()
{
}

template<class T>
void LinkedList<T>::pushFirst(T value)
{
	Node<T> * nodeToAdd = new Node<T>(value);
	if (head != NULL)
	{
		nodeToAdd->next = head;
		head->previous = nodeToAdd;
	}
	head = nodeToAdd;
	//nodeToAdd->next = head;
	//head = nodeToAdd;
	if (tail == NULL)
	{
		tail = head;
		//tail->previous = head->next;
	}
	/*
	else if (tail->previous == NULL)
	{
		tail->previous = nodeToAdd;
	}*/
	return;
}

template<class T>
void LinkedList<T>::pushLast(T value)
{
	Node<T> * nodeToAdd = new Node<T>(value);
	if (tail != NULL)
	{
		nodeToAdd->previous = tail;
		tail->next = nodeToAdd;
	}
	//nodeToAdd->next = tail;
	tail = nodeToAdd;
	if (head == NULL)
	{
		head = tail;
	}
	return;
}

template<class T>
T LinkedList<T>::popFirst()
{
	if (isEmpty()) return true;

	Node<T> * nodeToPop = new Node<T>();
	nodeToPop = head->next;
	T valueOfPoppedHead = head->data;
	head = nodeToPop;
	if (head == NULL)
	{
		tail = head;
	}
	return valueOfPoppedHead;
}

template<class T>
T LinkedList<T>::popLast()
{
	if (isEmpty()) return true;

	Node<T> * nodeToPop = new Node<T>();
	nodeToPop = tail->next;
	T valueOfPoppedHead = tail->data;
	tail = nodeToPop;
	if (tail == NULL)
	{
		head = tail;
	}
	return valueOfPoppedHead;
}

template<class T>
T LinkedList<T>::peekFirst()
{
	if (isEmpty())
	{
		//return "LinkedList is empty.";
		return -1;
	}
	else
	{
		return head->data;
	}
}

template<class T>
T LinkedList<T>::peekLast()
{
	if (isEmpty())
	{
		//return "LinkedList is empty.";
		return -1;
	}
	else
	{
		return tail->data;
	}
}

template<class T>
bool LinkedList<T>::isEmpty()
{
	return head == NULL;
}



/*template<class T>
std::ostream & LinkedList<T>::operator<<(std::ostream & os, const LinkedList<T>& list)
{
	if (!list.isEmpty())
	{
		Node<T> currentNode = list.head;
		while (currentNode.data != NULL)
		{
			os << "[ " + currentNode->data + " ]->";
			currentNode = currentNode->next;
		}
	}
	else
	{
		os << "LinkedList in empty.";
	}
	return os;
}*/

template<class T>
ostream & operator<<(std::ostream & os, const LinkedList<T>& list)
{
	//if (list.head != NULL) 
	if(!list.isEmpty())
	{
		Node<T> currentNode = list.head;
		while (currentNode.data != NULL)
		{
			os << "[ " + currentNode->data + " ]->";
			currentNode = currentNode->next;
		}
	}
	else
	{
		os << "LinkedList in empty.";
	}
	return os;
}

template<class T>
std::string LinkedList<T>::toString()
{
	stringstream ss;
	ss << 1;
	cout << ss.str();
	string list = "hee";
	cout << list;
	list += "yo";
	list += "_mamma";
	cout << list;
	return list;
	Node<T> * currentNode = head;
	while(currentNode != NULL)
	{
		list += currentNode->data;
		currentNode = currentNode->next;
	}
	return list;
	//for (auto it = this.begin(); it != this.end(); ++it)
	//{
		//cout << this.data;
	//}
}

template<class T>
void LinkedList<T>::printList()
{
	Node<T> * currentNode = head;
	T currentData;
	while (currentNode != NULL)
	{
		currentData = currentNode->data;
		cout << "[";
		cout << currentData;
		cout << "]";
		currentNode = currentNode->next;
	}
	cout << endl;
}
