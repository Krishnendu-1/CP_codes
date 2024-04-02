#include<bits/stdc++.h>
using namespace std;

void pron(int n) {
    
    for ( int i = 0; i < n; i++)
    {for ( int j = 0; j < n; j++){
    cout<<"*  ";
    }cout<<endl;
    }
    

    }
int main(){
    int b,n=1;
   
    
    

    pattern orinting
    pattern1
    
    for ( i = 0; i < 4; i++)
    {for ( j = 0; j < 4; j++)
    {cout<<"*";
    }
    cout<<endl;
    }
    
    pattern2/
    for (i = 0; i < 4; i++)
    {for ( j= 0; j <i;j++)
    {cout<<"*";
    }
    cout<<endl;
    }
    pattern3
    cin>>b;
    for (int i = 0; i < b; i++)
    {cin>>n;
    pron(n);
    }
 pattern4   
for (int i = 1; i <=5; i++)
{for (int j= 1; j <= i; j++)
{
    cout<< j <<"  ";
    
   
}

  cout<<endl;
}



pattern5(i dont undesrstand how this is going on)
for (int i = 1; i <=5; i++)
{for (int j= 1; j<=i; j++)
{
cout<<i;
}
cout<<endl;
}
pattern6
for (int i =0; i <5; i++)
{
    for (int j=5; j >i; j--)
    {cout<<"* ";
    }
    cout<<endl;
}

pattern7
 for (int i =5; i>=1; i--)
 {
    for (int j=1; j<=i; j++)
    {cout<<j<<" ";
    }
    cout<<endl;
}  

pattern8

for (int i = 0; i <4; i++)//this loop denotes the "row" no.
{for (int j= 0; j <(4-i-1); j++)//this loop denots the coloumn no
cout<<" ";
{for (int j=0; j<(i*2+1); j++)
{cout<<"*"; 
// for (int j = 0; j <(4-i-1); j++)
// {cout<<"";  !!!LATER SPACES ARE NOT NECESSARY!!!
    /* code */
//}

  
}

    



}

cout<<endl;

}





pattern 9

for (int i = 4; i>=1; i--)
{for (int j=4; j>i; j--)
{cout<< " ";}
    for (int k =1; k<i*2; k++)
    {cout<<"*";} 
    cout<<endl;
} 

   
pattern10
for (int i = 1; i <=5; i++)
{for (int j= 1; j<=i; j++)
{cout<<"* ";}
   cout<<endl;
}
for (int  k=1; k<=4; k++)
{for (int l =4; l>=k;l--)
{
cout<<"* ";}

   cout<<endl;
}

pattern11 
cin>>b;
for (int i = 0; i <b; i++){
    for (int j =3; j>=i;j--)
    {
       cout<<" ";
    }
    
    for (int j = 0; j <i; j++)
    {cout<<"* ";
    }
cout<<endl;
}
for (int i = 0; i < 4; i++)
{for (int j =0; j<=i; j++)
{
cout<<" "; 
}

for (int j=3; j>i; j--)
{
    cout<<"* ";
}
cout<<endl;
}


pattern12

for (int i = 1; i <=4  ; i++)
{for (int j = 4;j>i; j--)
{
cout<<" ";}
for (int  j= 1;j<=i; j++)
{
    cout<<i<<" ";
}
cout<<endl;



}

pattern13

for (int i=1; i <=4; i++)
{for (int j= 3; j>=i;j--)
{
   cout<<" ";
}
for (int k= 1; k<=i; k++)
{
  cout<<n <<" ";
 
  n++;
}
cout<<endl;
}
 
    return 0;
}