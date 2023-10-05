#include<bits/stdc++.h>
using namespace std;


int gcd(int a,int b){
    if(a==b) return a;
    while(a>0&&b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    else return a;
}

int hcf(int a,int b){
    return (a*b)/gcd(a,b);
}

int main(){
    cout<<gcd(10,15)<<endl;
    cout<<hcf(10,15);
    return 0;
}