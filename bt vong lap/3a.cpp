#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
vector<int> fact(1,1);

void factorial(int n){
    for(int i=2;i<=n;i++){
        fact.push_back(fact[fact.size()-1]*i);
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    factorial(n);
    int sum=0;
    for(int i=0;i<fact.size();i++) sum+=fact[i];
    cout<<sum%m;
}