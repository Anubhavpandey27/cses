#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
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
int t;
cin>>t;
while(t){


ll a ,b;
cin>>a>>b;
ll x=min(a,b);
ll y=max(a,b);
if(2*x<y || (a+b)%3!=0){
    cout<<"NO";
}
else{
    cout<<"YES";
}
cout<<"\n";
t--;
}
}