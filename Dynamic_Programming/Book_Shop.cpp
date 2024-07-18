#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
ll helper(int x ,vector<pair<ll,ll>>vec,vector<ll>&dp){
    if(x<0){
        return 0;
    }
    
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t,x;
cin>>t>>x;
vector<pair<ll,ll>> vec(t,{-1,-1});

for(int i=0;i<t;i++){
ll ele;
cin>>ele;
vec[i].first=ele;
}
for(int i=0;i<t;i++){
ll ele;
cin>>ele;
vec[i].second=ele;
}

}