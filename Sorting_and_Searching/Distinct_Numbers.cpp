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
vector<ll>vec;
for(int i=0;i<n;i++){
    ll ele;
    cin>>ele;
    vec.emplace_back(ele);

}
sort(vec.begin(),vec.end());
int ans=1;
for(int i=1;i<n;i++){
 if(vec[i]!=vec[i-1]){
    ans++;
 }
}
cout<<ans;

}