#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
void helper(){
}

int main(){
long long t;
cin>>t;
if(t==1){
    cout<<1;
}
else if(t<=3){
    cout<<"NO SOLUTION";
}
else if(t==4){
    cout<<2<<" "<<4<<" "<<1<<" "<<3;
}
else{
    vector<long long> vec;
for(int j=1;j<=t;j+=2){
cout<<j<<" ";
}
for(int i=2;i<=t;i+=2){
    cout<<i<<" ";
}
}

}