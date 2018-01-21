// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "LinkedList.h"
#include "LinkedList.cpp"
#include "Node.h"
#include "Node.cpp"
using namespace std;


int main()
{
	cout << "HI!" << endl;
	//LinkedList<int> myList(new Node<int>(2));
	//LinkedList<int> myList(new Node<int>());
	LinkedList<int> myList;
	myList.pushFirst(8);
	cout << myList.peekFirst() << endl;
	cout << myList.peekLast() << endl;
	myList.pushFirst(1);
	cout << myList.peekFirst() << endl;
	cout << myList.peekLast() << endl;
	myList.pushLast(15);
	cout << myList.peekFirst() << endl;
	cout << myList.peekLast() << endl;
	//cout << myList.toString();
	//string test = myList.toString();
	//cout << test << endl;
	myList.printList();
	//cout << myList.pop() << endl;
	//cout << myList;

    return 0;
}

