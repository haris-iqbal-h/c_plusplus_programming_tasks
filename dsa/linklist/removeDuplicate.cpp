#include <iostream>
using namespace std;

// Link list node
class Node
{
    public:
    int data;
    Node* next;
};



void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();

    new_node->data = new_data;

    new_node->next = (*head_ref);    

    (*head_ref) = new_node;
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << " " << node->data;
        node = node->next;
    }
}


int main()
{
    // Start with the empty list
    Node* head = NULL;

    push(&head, 20);
    push(&head, 13);
    push(&head, 13);
    push(&head, 11);
    push(&head, 11);
    push(&head, 11);                                    

    cout << "Linked list before duplicate removal ";
    printList(head);


    cout << "Linked list after duplicate removal ";    
    printList(head);            

    return 0;
}