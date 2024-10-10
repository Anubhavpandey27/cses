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

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
ll n,m;
cin>>n>>m;
vector<ll>ticket;
multiset<ll> st;
st.insert(-1);
for(int i=0;i<n;i++){
ll ele;
cin>>ele;
st.insert(ele);
ticket.emplace_back(ele);
}
sort(ticket.begin(),ticket.end());
vector<pair<ll,ll>> vec;
for(int i=0;i<m;i++){
ll ele;
cin>>ele;

vec.push_back({ele,i});

}
for(int i=0;i<m;i++){
    ll key=vec[i].first;
    auto it=st.lower_bound(key);
    if(it==st.end()){
        it--;
        if(*it==-1){
            cout<<-1<<"\n";
        }
        else{
            cout<<*it<<"\n";
            st.erase(it);
        }
    }
    else if(*it==key){
        cout<<key<<"\n";
        st.erase(it);
    }
    else{
        it--;
        if(*it==-1){
            cout<<-1<<"\n";
        }
        else{
            cout<<*it<<"\n";
            st.erase(it);
        }


    }

}




}