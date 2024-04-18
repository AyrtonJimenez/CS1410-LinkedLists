#include "DataArray.h"
#include "Node.h"

DataArray::DataArray(std::vector<Node> array(3000))
{
    arr = array;
}

Node Read::DataArray(int nodeInt)
{
    index = 0;
    if (arr[index]->data != nodeInt)
    {
        index++;
    }
    else
    {
        return return arr[index];
    }
}

int IndexOf::DataArray(int num)
{
    index = 0;
    if (arr[index]->data != num)
    {
        index++;
    }
    else
    {
        return index;
    }
}

void Insert::DataArray(Node nd)
{
    arr.insert(nd, 0);
}

void Sort::DataArray()
{
    std::sort(arr.begin(), arr.end(), );
}

void Delete::DataArray(int index)
{
    std::erase(arr, arr[index]);
}