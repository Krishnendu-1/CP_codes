#include<bits/stdc++.h>
using namespace std;
class p{
    public:
    int roll;

};
int main(){
p *l=new p;
// l->roll=34;
// cout<<l->roll;
(*l).roll=45;
cout<<(*l).roll;//very important
return 0;
}