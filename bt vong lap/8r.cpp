#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;
vector<int> ps;
void primes(int n){
    vector<bool> t(n,1);
    for(int i=2;i<=n;i++){
        if(!t[i]) continue;
        for(int j=i+i;j<=n;j+=i) t[j]=0;
    }
    for(int i=2;i<n;i++){
        if(t[i]) ps.push_back(i);
    }
}

int main(){
    int n;
    cin>>n;
    primes(n);
    for(auto a : ps){
        while(n%a==0){
            n=n/a;
            cout<<a<<" ";
        }
    }
}