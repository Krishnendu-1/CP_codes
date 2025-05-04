#include<bits/stdc++.h>
using namespace std;
int fac(int n){
    
    if(n==0) return 0;
   
    int c=fac(n-1)+fac(n-2);

    return c;
     
}
// int powr(int n){
//     if(n==0) return 1;

//     // return powr(n-1);//single time return form back as return statement works single time until there is no any holding variable, neither it works as head recursion with single back output
//     return n*powr(n-1);//single time return form back as return statement works single time until there is no any holding variable,here n is holding one
// }
// int main(){
//     int n;
//     cin>>n;
//    int a= powr(n);
//    cout<<a;
//     return 0;
// }


int main(){int n;
    cout<<"enter the value of fibonacci series ";
    cin>>n;
    cout<<endl;
   
   int a= fac(n);
     cout<<1;
     cout<<a;
}