// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "LinkedList.h"
#include "LinkedList.cpp"
#include "Node.h"
#include "Node.cpp"
#include <cassert>
using namespace std;


int main()
{
	//Int data type simple tests
	LinkedList<int> myList;
	myList.pushFirst(10);
	myList.pushFirst(99);
	myList.pushLast(1);

	assert(myList.peekFirst() == 99);
	assert(myList.peekLast() == 1);
	assert(myList.contains(10));
	assert(!myList.isEmpty());

	myList.insertAt(1, 21);

	assert(myList.popFirst() == 99);

	//Double data type simple tests
	LinkedList<double> myDoubleList;
	assert(myDoubleList.isEmpty());
	assert(myDoubleList.peekFirst() == NULL);
	assert(myDoubleList.peekLast() == NULL);

	myDoubleList.pushLast(2.2);
	myDoubleList.pushLast(.89);
	myDoubleList.pushLast(100.874);

	assert(myDoubleList.peekFirst() == 2.2);
    return 0;
}
