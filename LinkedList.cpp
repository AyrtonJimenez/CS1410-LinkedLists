#include "LinkedList.h"
#include "Node.h"

LinkedList::LinkedList(void)
{
	head = NULL;
	tail = NULL;
}

LinkedList::LinkedList(Node nd)
{
	head = nd;
	tail = NULL;
}


Node Read::LinkedList(int nodeInt)
{
    temp = head;
    while (temp != NULL)
    {
        if (temp->idata == nodeInt)
        {
            return temp;
        }
        else
        {
            temp = temp->next;
        }
    }
}

int IndexOf::LinkedList(int num)
{
    index = 0;
    temp = head;

    while (temp != NULL)
    {
        if (temp->idata == num)
        {
            return index;
        }
        else 
        {
            temp = temp->next;
            index++;
        }

    }
}

void Insert::LinkedList(Node nd)
{
    nd->next = head;
    head = nd;
}

void Delete::LinkedList(int index)
{
    if (head == NULL)
    {
        break;
    }

    Node sorted = NULL;
    Node current = head;

    while (current != NULL)
    {
        Node nextNode = current->next; 
        if (sorted == NULL || current->idata < sorted->idata) {
            
            current->next = sorted; 
            sorted = current;
        }
       	else
       	{
            Node temp = sortedList;
            
            while (temp->next != NULL && temp->next->idata < current->idata) {
                temp = temp->next;
            }
            
            current->next = temp->next;
            temp->next = current;
        }
        current = nextNode; 
    }

    head = sorted;
}
