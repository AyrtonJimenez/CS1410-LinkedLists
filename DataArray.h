#ifndef DATAARRAY_H
#define DATAARRAY_H

#include "Node.h"
#include <VECTOR>

class DataArray
{
    public: 
        std::vector<Node> arr;

        DataArray(std::vector<Node> array(3000));
        Node Read(int lookFor);
        void Insert(Node nd);
        void Delete(int index);
        void Sort();
        int IndexOf(int num);
        

};

#endif