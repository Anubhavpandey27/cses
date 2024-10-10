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
ll n,x;
cin>>n>>x;
vector<pair<ll,ll>> vec;
for(int i=0;i<n;i++){
    ll a;
    cin>>a;
    vec.push_back({a,i+1});

}
sort(vec.begin(),vec.end());
int i=0;
int j=n-1;
bool check=true;
while(i<j){
    if(vec[i].first+vec[j].first==x){
        cout<<vec[i].second<<" "<<vec[j].second;
         check=false;
         break;
    }
    else if(vec[i].first+vec[j].first<x){
        i++;

    }
    else{
        j--;    
    }

}
if(check){
    cout<<"IMPOSSIBLE";
}



}