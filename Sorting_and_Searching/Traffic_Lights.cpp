#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include<set>
#define ll long long
void helper(){
}
vector<ll>input(int n){
  
    vector<ll>vec;
    for(int i=0;i<n;i++){
      ll ele;
      cin>>ele;
      vec.emplace_back(ele);
    }
    return vec;
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int n;
ll x;

cin>>x>>n;
vector<ll>vec=input(n);
set<ll>st;
multiset<ll> ml;
st.insert(0);
st.insert(x);
ml.insert(x);
for(int i=0;i<n;i++){
    if(st.find(vec[i])!=st.end())
    {    
        auto it=ml.end();
        
        it--;
        cout<<*it<<" ";
        
        
        
    }
    else{
        auto pt=st.lower_bound(vec[i]);
        auto p2=st.lower_bound(vec[i]);
        p2--;
        ml.insert(vec[i]-*p2);
        ml.insert(*pt-vec[i]);
        ml.erase(ml.find(*pt-*p2));
       
        
        st.insert(vec[i]);
        auto it=ml.end();
        it--;
        cout<<*it<<" ";

    }
}




}