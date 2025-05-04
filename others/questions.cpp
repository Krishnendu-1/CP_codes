// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// int a[4][4],b[100][100],sum[100][100],m,n;
// cin>>n>>m;
// for (int i = 0; i < n; i++)
// {for (int j = 0; j< m; j++)
// {
//         cin>>a[i][j];
// }

        
// }
// for (int i = 0; i < n; i++)

// {for (int j = 0; j < m; j++)
// {
// cin>>b[i][j];
// }
// }
// for (auto i = 0; i < n; i++)
// {
// for (auto j = 0; j < m; j++)
// {
//         sum[i][j]=a[i][j]+b[i][j];
// }
// }
// cout<<"the sum of the matrices"<<endl;
// for (auto i = 0; i < n; i++)
// {
//        for (auto j = 0; j < m; j++)
//        {
//         cout<<sum[i][j]<<" ";
//        }
//       cout<<endl; 
// }



//         return 0;
// }



/*Below method is of time complexity of o(sqrt(n)) faster than o(n)*/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//         int n,count=0,i;
//         cin>>n;
//         for( i=1;i*i<=n;i++){ 
//                 if(n%i==0)
//                 {count++;}


//                 if((n/i)!=i)
//                 {
//                   count++;
//                 }
                
//         }
//         if(count==2) cout<<"prime";
//         else cout<<"not";
//         return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//         int n,m;
//         cin>>n>>m;
//         for (auto i = min(n,m); i>=1; i--)//time complexity of o(min(n,m)) also known as bruteforce method
//         {
//               cout<<i<<" ";
              
//         }
        
//         return 0;
// }



/*Ecludean algorithm*/
/*Do check the proof of the Euclidean algorithm*/
#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin>>n;
        int m;
        cin>>m;
while (n>0 && m>0)
{


               if(n>m) n%=m;
               else m%=n;
        
}
        if(m==0) cout<<n;
        else cout<<m;
        return 0;
}