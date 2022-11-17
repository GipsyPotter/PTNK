#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
vector<int> fact(1,1);
vector<double> prod;

void factorial(int n){
    for(int i=2;i<=n;i++) fact.push_back(fact[fact.size()-1]*i);
}

void product(double x, int n){
    prod.push_back(x);
    for(int i=2;i<=n;i++) prod.push_back(prod[prod.size()-1]*x);
}
int main(){
    int n;
    double x;
    cin>>n>>x;
    factorial(n);
    product(x,n);
    double s=0;
    for(int i=1;i<=n;i++){
        if(i%2==0) s-=prod[i-1]/fact[i-1];
        else s+=prod[i-1]/fact[i-1];
    }
    cout<<setprecision(2)<<fixed<<s;
}