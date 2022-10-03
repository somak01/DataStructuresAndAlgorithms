#include<iostream>

typedef struct Node Node;

struct Node
{
    int val;
    struct Node * next;
};



int main()
{

    Node root{12, nullptr};

    Node elso{23, nullptr};

    root.next = &elso;


    std::cout<<root.val<<" -> "<<root.next->val;

    return 0;
}