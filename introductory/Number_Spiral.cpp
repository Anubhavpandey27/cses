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
    ll x,y;
    cin>>y>>x;


    
    if(y&1){
        ll sq=y-1;
        ll temp=sq+1;
        if(x<=y){
            cout<<(sq*sq +x);
        }
        else{
            if(x&1){
                cout<<(x*x)-(y-1);
            }
            else{
                cout<<(x-1)*(x-1)+1+y-1;
            }
        }
        cout<<"\n";
    }
    else{
        ll sq=y;
        ll temp=sq+1;
        if(x<=y){
            cout<<(sq*sq -(x-1));
        }
        else{
            if(x&1){
                cout<<(x*x)-(y-1);
            }
            else{
                cout<<(x-1)*(x-1)+1+y-1;
            }
        }
        cout<<"\n";

    }
  


  t--;}

}