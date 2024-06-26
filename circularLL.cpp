#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data)
    {
        this->data= data;
        this->next=NULL;
    }
   
    ~Node()
    {
        int value= this->data;
        if(this->next != NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for node with data "<< value<<endl;
    }
};
void insertNode(Node* &tail,int element, int d)
{
//empty list
if(tail==NULL)
{
Node* newNode= new Node(d);
tail= newNode;
newNode->next = newNode;
}
else
{
    //non-empty list
    //assuming that the element is present in the list
    Node* curr=tail;
    while(curr->data!=element)
    {
        curr=curr->next;
    }
    //element found-.curr is representing the node which has the element value
    Node* temp= new Node(d);
    temp-> next= curr->next;
    curr-> next= temp;
}
}
void print(Node* &tail)
{
    Node* temp= tail;
// 
if(tail==NULL){
cout<<"List is empty"    ;
return;}
do{
cout<<tail->data<<"  ";
tail= tail->next;
}while(tail!=temp);
cout<<endl;
}
void deleteNode(Node* &tail,int value)
{
    //empty list
    if(tail==NULL)
    {
        cout<< "List is empty, check again "<<endl;
        return;
    }
    else{
        //non-empty list
        //assuming value is present in the list
        Node* prev= tail;
        Node* curr = prev->next;
        while(curr-> data!= value)
        {
            prev= curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        //if one node linked list
        if(curr==prev)
        {
            tail=NULL;
        }
        //for>=2 node linkedlist
       else if(tail==curr)
        {
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }

}
int main()
{
    //Node* node1= new Node(10);
    Node* tail=NULL;
     insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    // insertNode(tail,5,7);
    // print(tail);
    // insertNode(tail,3,767);
     print(tail);
    deleteNode(tail,3);
    print(tail);
    return 0;
}
