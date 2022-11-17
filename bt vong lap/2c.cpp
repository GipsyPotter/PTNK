#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> fact(1,1);
vector<double> prod(1,1);

void factorial(int n){
    for(int i=2;i<=n;i++) fact.push_back(fact[fact.size()-1]*i);
}

void product(double x, int n){
    for(int i=2;i<=n;i++) prod.push_back(prod[prod.size()-1]*x);
}

int main(){
    int n;
    double x;
    cin>>n>>x;
    factorial(n);
    product(x,n);
    reverse(prod.begin(),prod.end());
    double s=0;
    for(int i=0;i<n;i++){
        s+=prod[i]/fact[i];
    }
    cout<<setprecision(2)<<fixed<<s;
}