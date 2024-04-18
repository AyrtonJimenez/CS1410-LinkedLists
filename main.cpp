#include "LinkedList.h"
#include "Node.h"

int main(void)
{
	Node object = Node(256, "hello");

	LinkedList list = LinkedList(object);

	Node object2 = Node(123, "");

	list.Insert(object2);
	return list.IndexOf(123);
}
