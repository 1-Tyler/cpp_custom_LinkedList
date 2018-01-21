#include "stdafx.h"
#include "LinkedList.h"
#include "Sort.h"
#include <string>
#include <sstream>
#include <vector>

template<class T>
LinkedList<T>::LinkedList()
{

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
	delete head;
	delete tail;
	delete this;
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
	if (tail == NULL)
	{
		tail = head;
	}
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
		cout << "LinkedList is empty.";
		return NULL;
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
		cout << "LinkedList is empty.";
		return NULL;
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

template<class T>
void LinkedList<T>::insertAt(int position, T valueToInsert)
{
	Node<T> * nodeToAdd = new Node<T>(valueToInsert);
	Node<T> * currentNode = new Node<T>();
	currentNode = head;

	int counter = 0;
	while (currentNode != NULL)
	{
		if (counter == position)
		{
			nodeToAdd->next = currentNode;
			nodeToAdd->previous = currentNode->previous;
			currentNode->previous = nodeToAdd;
			return;
		}
		else counter++;
	}
}

template<class T>
void LinkedList<T>::sort()
{
	vector<T> copyOfLinkedList;
	Node<T> * currentNode = new Node<T>();
	currentNode = head;

	while (currentNode != NULL)
	{
		copyOfLinkedList.push_back(currentNode->data);
		currentNode = currentNode->next;
	}
	Sort.quickSort(copyOfLinkedList, 0, copyOfLinkedList.size()-1);
}

template<class T>
bool LinkedList<T>::contains(T value)
{
	Node<T> * currentNode = new Node<T>();
	currentNode = head;

	while (currentNode != NULL)
	{
		if (currentNode->data == value)
		{
			return true;
		}
		currentNode = currentNode->next;
	}
	return false;
}

template<class T>
ostream & operator<<(std::ostream & os, const LinkedList<T>& list)
{
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
