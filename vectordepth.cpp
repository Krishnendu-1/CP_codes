#include<bits/stdc++.h>
using namespace std;
#define Row 2
#define Col 2
// int main(){
//     vector<vector<int>>vex
//     {{1,2,3},
//     {2,3,4},
//     {4,5,0}};
    
//      for (auto i = 0; i < vex.size(); i++)
//     {for (auto j = 0; j< vex.size(); j++)
//     {
//         cout<<vex[i][j]<<" ";
//     }
//     cout<<endl;
        
//     }
    
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,a=0,b;
//     cin>>n;
//     while(n>0){
//         if(n%10==0)
//         n=n/10;
//     b=n%10;
//     a=a*10+b;
//     n=n/10;
    
//     }
//     cout<<a;
//     return 0;
// }

/*Best ever process to insert elements to vector of vectors*/
// int main(){
//     vector<vector<int>>vex;

//     for (auto i = 0; i < Row; i++)
//     { vector<int>vec;
//         for (auto j= 0; j < Col; j++)
//         {int n;
//          cin>>n;
//             vec.emplace_back(n);
           
//         }
//         vex.push_back(vec);//pushing back 1D vector "vec" after each loop completion and "vex " becomes 2D
//     }
    
//      for (auto i = 0; i <vex.size() ; i++)
//     {for (auto j = 0; j< vex[i].size(); j++)
//     {
//         cout<<vex[i][j]<<" ";
//     }
//     cout<<endl;
        
//     }
    
//     return 0;
// }