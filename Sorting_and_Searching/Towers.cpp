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
cin>>n;
vector<ll>vec=input(n);
multiset<ll> st;
st.insert(vec[0]);
for(int i=1;i<n;i++){
   auto pt= st.upper_bound(vec[i]);
   if(pt==st.end()){
    st.insert(vec[i]);
   }
   else{
        st.erase(pt);
        st.insert(vec[i]);
   }
}
cout<<st.size();


}