#include<bits/stdc++.h>
using namespace std;
void pattern(){
    //Containers in STL......--->

    //#Pair:-->
// pair<pair<int,int>,pair<int,int>>a={{3,4},{2,4}};
// cout<<a.first.first<<a.second.first<<a.second.second;

//#Vectors:-->
vector<int>v1(4,2);//Defines that there is four times 2, first written number is for how many times the same number will be repeated
v1.emplace_back(4);// "emplace_back" is faster than 'push_back'
cout<<v1[4];
cout<<endl;
vector<int>vec{1,2,4,3,5,6};//initialization of vector
vector<int>vec2{5,6,7,8,9};
cout<<vec[0]<<" ";
vec.emplace_back(3);//dynamically adding space for value of 3,we can add any value in that added space
cout<<vec[6];


//insert of variables
vec.insert(vec.begin()+1,3);
vec.erase(vec.begin()+4);
vec.emplace_back(3);


for(auto it:vec ){
    cout<<(it)<<" ";
}cout<<endl;
for (auto i =vec2.begin(); i <vec2.end(); i++)//AFTER ".BEGIN" DONOT FORGOT TO USE "()"
{cout<<*(i)<<" ";
}cout<<endl;
vector<int>v3(vec);//storing of one vector to another......here "vec" is stored in "v3"
for (auto i =v3.begin(); i < v3.end(); i++)
{
    cout<<*(i);//WHEN .BEGIN() AND .END() , THEN ADDRESS IS MARKED NOT THE VALUE AT THAT ADDRESS. SO USE *{POINTERS}
}

vec.swap(vec2);//vec--->{56789}...... v2--->{1324563}


}


void learnlist(){
//Container=List
// List has same function of vector having some changes

list<int>l{2,3,2};
l.emplace_front(3);
l.emplace_back(3);
for(auto i:l){
    cout<<i;//only this initializing "for loop " is valid for "list" container.....
}


}
//*Deque is same as "list" and "vector".....all the functions are same
void learndq(){
    deque<int>dq{1,3,4};
    dq.pop_back();
     dq.pop_front();
    for(auto i:dq){
        cout<<i<<" ";
    }
}
//learning priority_queue
void pq(){
     
priority_queue<int>pq;
pq.push(0);
pq.push(2);
pq.emplace(5);
pq.pop();
cout<<pq.top();
cout<<pq.size();
cout<<endl;

int n=pq.size();
for (auto i =0 ; i < n; i++)   //THERE IS NO ANY ".BEGIN()" AND ".END()" FUNCTIONS so we have to use this technique
{
cout<<pq.top()<<" ";
pq.pop();//it will remove the current top position holder and put the next top one
}
}
//Learn Set
void learnset(){
    set<int>st;
    st.emplace(3);
    st.emplace(4);
    st.emplace(5);
    st.emplace(4);//only unique values should be there ....no repetation is allowed 
    cout<<st.size();
    cout<<endl;
    for(auto i:st){ //this worked very well due to the presence of "begin" and "end" functions
        cout<<i;
    }
}
//learn MultiSet{Here is more than one same type element is valid}
void multiserlearn(){
    multiset<int>mst;
    mst.emplace(2);
    mst.emplace(3);
    mst.emplace(4);
    mst.emplace(2);
    mst.emplace(2);

    cout<<mst.size()<<endl;
    for(auto k:mst){
         cout<<k;
    }
    cout<<endl;
    multiset<int>::iterator it=mst.begin();
    it++;
    mst.erase(it);//deleting method using iterator
     for(auto k:mst){
         cout<<k;
    }
    cout<<endl;
    cout<<"5 is present or not  "<< mst.count(5)<<endl;
    cout<<"3 is present or not  "<< mst.count(3);
   

    }
    //learn map
    void learnmap(){  // Maps are used to sort the data and relate the given data with the integer value 
        map<int,string>mp;
        mp[1]="Krishnendu";
        mp[2]="love";

        for(auto i:mp){
            cout<<i.first<<" "<<i.second;
        }
        cout<<endl;
mp.erase(2);

        for(auto i:mp){
            cout<<i.first<<" "<<i.second;
        }
        cout<<endl;

    }
    //Learn Multimap
    void multimp(){
        multimap<int,string>mmp;
        mmp.emplace(pair<int,string>(3,"krishnendu"));// only pair is allowed for input taking
        mmp.emplace(pair<int,string>(3,"disha"));
        for(auto k:mmp){
            cout<<k.first<<k.second;
        }cout<<endl;
        multimap<int,int>mmp2;
        mmp2.emplace(pair<int,int>(2,5));
        mmp2.emplace(pair<int,int>(1,5));//normal brackets are used since both are integer datatypes
     cout<<mmp2.size();
     cout<<endl;
    for(auto i:mmp2){
        cout<<i.first<<i.second;
    }
    }

int main(){
    
return 0;
}
