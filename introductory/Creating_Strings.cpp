
#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
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
ll fac(ll n){
    ll ans=1;

    for(int i=1;i<=n;i++){
       ans*=i;
    }
    return ans;
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
string s;
string s1;
cin>>s;
s1=s;
ll n=s.size();
map<char,ll> mp;
for(int i=0;i<n;i++)
{
    mp[s[i]]++;
}
ll test=fac(n);
for(auto x: mp){
   test/=fac(x.second);
}
cout<<test<<"\n";
sort(s1.begin(),s1.end());
reverse(s1.begin(),s1.end());

sort(s.begin(),s.end());
cout<<s<<"\n";
ll t=test-1;
while(t--){
    multiset<char>st;
    char mx='a';
    for(int i=s.size()-1;i>=0;i--){
            st.insert(s[i]);
            char tp=s[i];
       
             s.pop_back();
            mx=max(tp,mx);
            auto ls=st.end();
            --ls;
             
            if(mx!=tp){

               s.push_back(*st.upper_bound(tp));
               st.erase(st.upper_bound(tp));
               
               for( auto z=st.begin();z!=st.end();z++){
                s.push_back(*z);
               }
               break;

            }
    }
    cout<<s<<"\n";
   


}




}