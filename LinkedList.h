#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList
{
	public: 
		Node head = NULL;
		Node tail = NULL;

		LinkedList();
        	LinkedList(Node nd);
        	Node Read(int nodeInt);
        	void Insert(Node nd);
        	void Delete(int index);
        	void Sort();
        	int IndexOf(int num);
};

#endif
