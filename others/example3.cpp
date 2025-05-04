// // Pallindromic number
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a,d,i,c=0;
//     cout<<"the nunber";
//     cin>>a;
//     i=a;
//     while(a>0){
//     d=a%10;
//     c=c*10+d;
//     a=a/10;}
//     if(c==i){
//     cout<<"it's an Pallindromic number";

//     }
//     else{
//         cout<<"not";
//     }
//     return 0;
// }



















#include<bits/stdc++.h>
using namespace std;
bool f(string &s,int i){

if(i>=s.size()/2) return true;
if (s[i]!=s[s.size()-i-1])  return false;
return f(s,i+1);
}

int main(){
string s;
int i;
cin>>s;
cout<<f(s,0);
return 0;

}