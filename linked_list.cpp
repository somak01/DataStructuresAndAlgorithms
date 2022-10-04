#include<iostream>

typedef struct Node Node;

struct Node
{
    int val;//data part of the Node
    struct Node * next;//adress of the next node
};

void insertBeginning(Node* &head , Node* new_node)
{
    new_node->next = head;//the new first element should point to where the head pointed previously
    head = new_node;//and the head should point to the new node
}
void insertAfter(Node* &after, Node* new_node)
{
    new_node->next = after->next;//the after node's next should be the next of the new_node
    after->next = new_node;//and the after node next should point now to the new_node

}
void insertEnd(Node* &head, Node* new_node)
{
    Node* temp = head;

    while (temp->next != 0)
    {
        temp = temp->next;
    }

    temp->next = new_node;
}

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

    Node* to_be_inserted_beg;
    to_be_inserted_beg = (Node*)malloc(sizeof(Node));
    to_be_inserted_beg->val = 5;
    to_be_inserted_beg->next = 0;
    insertBeginning(head, to_be_inserted_beg);

    Node* to_be_inserted;
    to_be_inserted = (Node*)malloc(sizeof(Node));
    to_be_inserted->val = 1234;
    insertAfter(to_be_inserted_beg, to_be_inserted);

    
    Node* to_be_inserted_end;
    to_be_inserted_end = (Node*)malloc(sizeof(Node));
    to_be_inserted_end->val = 98;
    to_be_inserted_end->next = 0;
    insertEnd(head, to_be_inserted_end);

    //std::cout<<head->val<<"anyadat";

    temp = head;
    int count  = 0;
    while (temp != 0)
    {
        count++;
        std::cout<<temp->val << ";";
        temp = temp->next;

    }
    //std::cout<<"xd";
    std::cout<<"\n"<<count;


    return 0;
    std::exit;
}
