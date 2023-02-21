#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *prev;
    Node *next;
};
int main(){
    //creation of first node
    Node *first=new Node();
    first->data=1;
    first->prev=NULL;
    first->next=NULL;
    
    //creation of second node
    Node *second=new Node();
    second->data=2;
    second->prev=NULL;
    second->next=NULL;
    
    //creation of third node
    Node *third=new Node();
    third->data=3;
    third->prev=NULL;
    third->next=NULL;
    
    //Linking the nodes
    first->next=second;
    second->next=third;
    third->next=NULL;
    first->prev=NULL;
    second->prev=first;
    third->prev=second;
    
    //pointing first node with head
    Node *head=first;
    //pointing the last node with tail
    Node *tail=third;
    
    //Logic to add a new node at beggining
    Node *start=new Node();
    start->data=0;
    start->prev=NULL;
    start->next=NULL;
    start->next=head;
    head->prev=start;
    head=start;
    Node *temp=head;
    
    //Logic to add new node at end
    Node *end=new Node();
    end->data=4;
    end->prev=NULL;
    end->next=NULL;
    Node *trav=head;
    while(trav->next!=NULL){
        trav=trav->next;
    }
    trav->next=end;
    end->prev=trav;
    tail=end;
    
    //Logic to add a new node at given position
    Node *middle=new Node();
    middle->data=66;
    middle->prev=NULL;
    middle->next=NULL;
    Node *demo=head;
    Node *demo2=NULL;
    int pos=2;
    while(pos-1){
        demo=demo->next;
        pos=pos-1;
    }
    demo2=demo->next;
    demo->next=middle;
    middle->prev=demo;
    middle->next=demo2;
    demo2->prev=middle;
    
    //printing the double linked list
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
