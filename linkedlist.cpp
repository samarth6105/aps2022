#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};

void printList(Node* n) {
    while(n != NULL) {
        cout<<" "<<n->data;
        n=n->next;
    }
    cout<<"\n";
}

/* Given a reference (pointer to pointer) 
to the head of a list and an int, inserts 
a new node on the front of the list. */
void push(Node** head_ref, int data) {
    Node* newnode = new Node();  //create a new node
    newnode->data = data;        //assign data
    newnode->next = (*head_ref); //Make next of new node as head
    (*head_ref) = newnode;       //move the head to point to the new node
}

/* Given a node prev_node, insert a new node after the given  
prev_node */
void insertAfter(Node *prev_node, int data) {
    if(prev_node == NULL) {           //check if the given prev_node is NULL
        cout<<"The prev node is NULL";
        return;
    }
    Node* newnode = new Node();       //create a new node
    newnode->data = data;             //assign data
    newnode->next = prev_node->next;  //make next of new node as next of prev_node
    prev_node->next = newnode;        //move the next of prev_node as new_node
}

/* Given a reference (pointer to pointer) to the head  
of a list and an int, appends a new node at the end */
void append(Node** head_ref, int data) {
    Node* newnode = new Node();        //create new node
    Node* last = *head_ref;
    newnode->data = data;             //assign data
    newnode->next = NULL;             //This new node is going to be the last node, so make next of it as NULL

    if(*head_ref == NULL) {           //If the Linked List is empty, then make the new node as head
        *head_ref = newnode;
        return;
    }

    while(last->next != NULL) {      //Else traverse till the last node
        last = last->next;
    }
    last->next = newnode;            //Change the next of last node
    return;
}

int main()  {
    Node* head = NULL;

    append(&head, 6);
    push(&head, 7); 
    push(&head, 1);
    append(&head, 4);  
    insertAfter(head->next, 8);  
      
    cout<<"Created Linked list is: \n";  
    printList(head);  
      
    return 0;  
}