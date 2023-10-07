#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
    if(n<2) return false;   
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int n=37;
    cout<<checkPrime(n);
    return 0;

}