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
int n;
cin>>n;
vector<pair<ll,ll>> vec;
vector<pair<ll,ll>>arr;
for(int i=0;i<n;i++){
    ll a,b;
    cin>>a>>b;
    arr.push_back({b,i});
    vec.push_back({a,b});

}
sort(arr.begin(),arr.end());
ll ans=1;
pair<ll,ll> temp=arr[0];
for(int i=1;i<n;i++){
    if(temp.first<=vec[arr[i].second].first){
        ans++;
        temp=arr[i];
    }

}
cout<<ans;
}