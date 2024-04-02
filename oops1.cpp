#include<bits/stdc++.h>
using namespace std;

//Creating classes
class hero{
  public:
  int hello;
  int hello2;
  char h;
  string r;

};




int main(){
    //static initialization
      hero Krishnendu;
      Krishnendu.hello=23;
      Krishnendu.h='f';
      Krishnendu.r="hello";
    //dynamically initialisation
    hero *Krishnendu2=new hero;
    Krishnendu2->hello=3;

    cout<<"the hero will call Hello the times of "<<Krishnendu.hello<<endl;
    cout<<"the hero will call Hello the times of "<<Krishnendu.h<<endl;
    cout<<"the string word "<<Krishnendu.r<<endl;
    cout<<"the string word "<<(*Krishnendu2).hello<<endl;


    return 0;
}