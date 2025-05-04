#include<bits/stdc++.h>
using namespace std;



class Node {
public:
    int data;
    Node* next;
    Node* prev;


    //constructor->if only data passsed, then prev,next automatically sets to nullptr
    Node(int data){
        this->data=data;
        this->prev=nullptr;
        this->next=nullptr;
    }
    //default constructor if all value is passed
    Node(int data, Node* prev,Node* next){
        this->data=data;
        this->prev=prev;
        this->next=next;
    }
};

Node* convertArrayToDLL(vector<int>&v){
Node* head=new Node(v[0]);//it will auotmatically calls the constructor which has only "data", rest is "nullptr"-->we have build it, if not then we've to write like-> "Node* head=new Node(v[0],nullptr,nullptr)"
    Node* prev=head;
    for(int i=1;i<v.size();i++){//i=1 is starting due to the head is at 0th position
        Node* temp=new Node(v[i],prev,nullptr);//previous is head in first loop
        prev->next=temp;
        prev=temp; 
    }
    return head;
}

Node* print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}


int main(){
    vector<int>v={1,2,3,4,5};
    Node* head=convertArrayToDLL(v);
    print(head);
    return 0;
}
