#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
void helper(){
}

int main(){
int t;
cin>>t;
long long sm=0;
vector<long long> vec;
for(int j=0;j<t;j++){
    long long k;
    cin>>k;
    vec.emplace_back(k);
}
for(int i=1;i<t;i++){
    if(vec[i]<vec[i-1]){
        sm=sm+vec[i-1]-vec[i];
        vec[i]=vec[i-1];
    }

}
cout<<sm;

}