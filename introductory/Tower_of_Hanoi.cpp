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
int n;
cin>>n;
cout<<2*(n)-1<<"\n";
for(int i=0;i<n-1;i++){
    cout<<1<<" "<<2<<"\n";
}
cout<<1<<" "<<3<<"\n";
for(int i=0;i<n-1;i++){
    cout<<2<<" "<<3<<"\n";
}

}