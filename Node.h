#ifndef NODE_H
#define NODE_H

#include <string>

struct Node
{
    public:
        int idata;
        std::string sdata;
        Node(long int d, std::string s) idata[d],sdata{s};

        Node* next = nullptr;
};

#endif
