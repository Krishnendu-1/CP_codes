//*Nearest grater element to left


#include<bits/stdc++.h>
using namespace std;

int main(){
// vector<int>arr{100,80,60,70,60,75,85};
// vector<int>v;
// stack<int>st;
// for(int i=0;i<arr.size();i++){
//     if(st.size()==0) v.push_back(-1);
//     else if(st.size()>0 && st.top()>arr[i]) v.push_back(st.top());
//     else if(st.size()>0 && st.top()<=arr[i]){
//         while(st.size()>0 && st.top()<=arr[i]){
//             st.pop();
//         }
//         if(st.size()==0) v.push_back(-1);
//         else v.push_back(st.top());
//     }
//     st.push(arr[i]);//storing each element after each iteration
// }


//*stock span problem
vector<int>arr{100,80,60,70,60,75,85};
vector<int>v;
stack<pair<int,int>>st;
for(int i=0;i<arr.size();i++){
    if(st.size()==0) v.push_back(-1);
    else if(st.size()>0 && st.top().first()>arr[i]) v.push_back(st.top());
    else if(st.size()>0 && st.top().first()<=arr[i]){
        while(st.size()>0 && st.top().first()<=arr[i]){
            st.pop();
        }
        if(st.size()==0) v.push_back(-1);
        else v.push_back(st.top().second);
    }
    st.push(arr[i],i);//storing each element after each iteration
}

for(auto &i:v){
    v[i]=i-v[i];
    cout<<v[i];
}








    return 0;

}