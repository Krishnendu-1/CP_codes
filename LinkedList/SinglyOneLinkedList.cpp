#include<bits/stdc++.h>
using namespace std;

// int main(){
// int n=2;
// int* m=&n;//address keeping
// int &a=n;

// cout<<m<<endl; //address print
// cout<<*m<<endl; //value at that address print
// cout<<&a<<endl; //address print
// cout<<a<<endl; //value at that address print
// return 0;
// }

class Node{
    public:
    int data;
    Node* next;

//*constructor-->this works if the both data,next will be updated to next
    Node(int data, Node* next){
        this->data=data;
        this->next=next;
    }

    //*this constructor will construct object if there only null value for next, no next is passed
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

//we have to return just "head"-->so we make the function "pointer to address function"
Node* convertArraytoLL1(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;//the next of mover is stored the value of current temp value;
        mover=temp;
    }
    return head;
}

Node* convertArraytoLL2(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return mover;
}

//findkng length-->inderct of traversing the list
int lengthLL(Node* head){
    int count=0;
     Node* temp=head;
    while(temp){
        temp=temp->next;
        count++;

    }
    return count;
}

//checking if the value is present or not in the list
int CheckValinList(Node* head,int val){
    Node* temp=head;
    while(temp){
        if(temp->data==val){
            return 1;
        }
        temp=temp->next;
    }
    return 0;

}

Node* delHead(Node* head){
    if(head==NULL) return head;
    
    Node* temp=head;
    head=head->next;
    free(temp);
    return head;//just the address
}

Node* delTail(Node* head){
    if(head==NULL && head->next==NULL) return NULL;
    
    
    Node* temp=head;
    while(temp->next->next!=NULL){
    temp=temp->next;}
    free(temp->next);
    temp->next=nullptr;//just the address
    return head;
    
}
Node* DelKthElment(Node* head,int k){
    if(head==NULL) return head; //if list is empty

    //if k=1, means the "head" element
    if(k==1){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }

    //the most important part, if k!=head or k!=tail, then the middle elemts to be deleted
    int count=0;
    Node* temp=head;
    Node* prev=temp;
    while(temp!=NULL){
        count++;
        if(count==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
    prev=temp;
    temp=temp->next;
    }
    return head;
    
}
Node* Delval(Node* head,int val){
    if(head==NULL) return head; //if list is empty

    //if head data is the given val, means the "head" element
    if(head->data==val){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }

    //the most important part, if k!=head or k!=tail, then the middle elemts to be deleted
    Node* temp=head;
    Node* prev=temp;
    while(temp!=NULL){
        if(temp->data==val){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
    prev=temp;
    temp=temp->next;
    }
    return head;
    
}

//*insertion
Node* InsertHead(Node* head,int val){
     Node* temp =new Node(val,head);//it will go to constructor and set "6" as data and "head" as next adress. 
     return temp;
}
Node* InsertTail(Node* head,int val){
    if(head==NULL) return new Node(val);

     Node* temp =head;//it will go to constructor and set "6" as data and "head" as next adress. 
    while(temp!=NULL){
        temp=temp->next;

    }
    Node* newnode=new Node(val);
    temp->next=newnode;

     return head;
}


Node* InsertValAtAnywhereBeforeElement(Node* head,int val,int el){
    if(head==NULL) return NULL;
    if(head->data==val){
        Node* temp=new Node(val,head);
        return temp;

    }
    Node* temp=head;
    while(temp->next!=NULL){
        if(temp->next->data==val){
            Node* n=new Node(val);
            n->next=temp->next;
            temp->next=n;
            break;
        }
        temp=temp->next;

    }
    return head;

}



int main(){
    // Node* node1=new Node(24);
    // Node* head=node1;
    // cout<<node1->data;

    vector<int>arr={1,2,3,4,5};
    Node* head=convertArraytoLL1(arr);
    Node* mover=convertArraytoLL2(arr);
    cout<<head->data<<" "<<mover->data<<endl;
    cout<<"-------------------------------------"<<endl;


//traversing the list
    Node* temp=head;
    while(temp){
        cout<<temp->data<<endl;
        temp=temp->next;//*this is to traverse from "LEFT TO RIGHT" , for "RIGHT TO LEFT" we have code it "temp->next=temp"

    }

    //length finding 
    cout<<"------------------------------------";
    cout<<endl<<lengthLL(head)<<endl;  


//checking val
cout<<"------------------------------------";
cout<<endl<<CheckValinList(head,4)<<endl;


cout<<"------------------------------------";
cout<<endl<<delHead(head)<<endl;

cout<<"------------------------------------";
cout<<endl<<delTail(head)<<endl;


cout<<"------------------------------------Delete "Kth" element from list-----important one ";
cout<<endl<<DelKthElment(head,3);


cout<<"------------------------------------Delete "value" from list-----important one ";
cout<<endl<<Delval(head,4)<<endl;


//*Insertion
cout<<"------------------------------------at Head-----------";
cout<<endl<<InsertHead(head,6)<<endl;

cout<<"------------------------------------at Tail-----------";
cout<<endl<<InsertTail(head,8)<<endl;



cout<<"-------------------------Insert Val At Anywhere Before a given Element----------------------";
cout<<endl<<InsertValAtAnywhereBeforeElement(head,3,5)<<endl;



}