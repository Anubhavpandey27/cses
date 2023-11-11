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
long long temp=1;
for(int j=2;j<=t;j++){
    temp=temp^j;

}
for(int i=0;i<t-1;i++){
    long long k;
    cin>>k;
    temp=temp^k;
}
cout<<temp;

}