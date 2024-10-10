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
vector<ll> vec1;
vector<ll>vec2;
ll n,x;
cin>>n>>x;
for(int i=0;i<n;i++){
ll ele;
cin>>ele;
vec1.emplace_back(ele);

}
for(int i=0;i<n;i++){
ll ele;
cin>>ele;
vec2.emplace_back(ele);

}
vector<ll> prev(x+1,0);
vector<ll>curr(x+1,0);


if(x>=vec1[n-1]){
       for(int i=vec1[n-1];i<x+1;i++){
                prev[i]=vec2[n-1];
       }
}
for(int i=n-2;i>=0;i--){
    for(int j=1;j<=x;j++){
        int a=0;
        int b=prev[j];
        if(j>=vec1[i]){
             a=vec2[i]+prev[j-vec1[i]];
        }
        curr[j]=max(a,b);
        
    }
    prev=curr;
}
cout<<prev[x];


}