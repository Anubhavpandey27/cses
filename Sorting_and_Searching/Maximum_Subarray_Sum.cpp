#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
void helper(){
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
ll n;
cin>>n;
vector<ll> vec;
for(int i=0;i<n;i++){
    ll a;
    cin>>a;
    vec.emplace_back(a);
}
ll ans=-1e15;
ll temp=-1e15;
for(int i=0;i<n;i++){
    if(temp<=0){
        temp=vec[i];
    }
    else{
        temp+=vec[i];
    }
    ans=max(temp,ans);
    
}
cout<<ans;


}