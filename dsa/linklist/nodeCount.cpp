#include <iostream>
 
using namespace std;
 
//Declare node 
struct Node{
    int num;
    Node *next;
};
 
//Starting (Head) node
struct Node *head=NULL;
 
//Insert node at start
void insert_Node(int n){
    struct Node *new_node=new Node;
    new_node->num=n;
    new_node->next=head;
    head=new_node;
}
int count_Nodes() {
  
 //Create a temporary node(tmp) pointing to the head.
  Node* tmp = head;

  // Count the nodes by creating a variable.
  int ctr = 0;
  
 // In the event that the temp node is not null, 
 // increase ctr by 1 and move on to the next node.
 // The process should be repeated until the temp is null.
  while(tmp != NULL) {
    ctr++;
    tmp = tmp->next;
  }

  //return ctr
  return ctr;  
} 
//Display all nodes
void display_all_nodes()
  {
	struct Node *temp = head;
    while(temp!=NULL){
        cout<<temp->num<<" ";
        temp=temp->next;
    }
    }
 
int main(){
    insert_Node(1);
    insert_Node(3);
    insert_Node(5);
    insert_Node(7);
    insert_Node(9);
    insert_Node(11);
    insert_Node(13);
    cout<<"Original Linked list:\n";
	display_all_nodes();
	cout<<"\nNumber of nodes in the said Linked list:\n";
    int ctr = count_Nodes();
    cout << ctr;
    cout<<endl;
    return 0;
}
