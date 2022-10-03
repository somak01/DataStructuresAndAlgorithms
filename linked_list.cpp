#include<iostream>

typedef struct Node Node;

struct Node
{
    int val;//data part of the Node
    struct Node * next;//adress of the next node
};



int main()
{
    Node* head = 0, *new_node, *temp;//we need temp because without it we would lost nodes
    int choice = 1;
    

    while (choice != 0){
        new_node = (Node*)malloc(sizeof(Node));//we allocate a piece of memory for the first element, which has the size of a node, and since 
                                                //malloc returns a void pointer we have to typecast it to a Node pointer

        std::cout<<"Enter a number: ";
        std::cin>>new_node->val;//-> simpler version of writing (*pointer).val
        new_node->next = 0;

        if (head == 0)
        {
            head = temp =  new_node;//if the head is null we can make it equal to the new_node since it's a pointer to the first node
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
        std::cout<<"DO you want to continue?(yes=1, no=0)";
        std::cin>>choice;
    }

    temp = head;
    int count  = 0;
    while (temp != 0)
    {
        count++;
        std::cout<<temp->val << ";";
        temp = temp->next;
        
    }
    std::cout<<"xd";
    std::cout<<"\n"<<count;


    return 0;
}