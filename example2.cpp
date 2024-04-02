//SWAPPING WITH THE HELP OF "CALL BY VALUE"
/*
#include<bits/stdc++.h>
using namespace std;

void swap(int a , int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping values "<<a <<endl<<b<<endl;
}
int main(){
    int a,b;//datatype have to use in the both void function and in the main function
    cout<<"values";
    cin>>a>>b;
    swap(a,b);
    cout<<a <<endl<<b<<endl;//original value doesnot change in the case of "call by value"
    return 0;
}
*/


//SWAPPING WITH THE HELP OF "CALL BY REFERENCE"

#include<bits/stdc++.h>
using namespace std;
void swap(int &a , int &b)//address is noted and completely changed.
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping values "<<a <<"  "<<b<<endl;
}


int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<"  "<<b;
    
    return 0;
}