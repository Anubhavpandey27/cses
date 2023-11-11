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
while(t!=1){
    cout<<t<<" ";
    if(t%2==0){
        t=t/2;
    }
    else{
        t=(3*t)+1;
    }
}
cout<<1;

}