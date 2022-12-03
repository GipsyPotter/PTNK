#include <iostream>
#include <cmath>
using namespace std;

int main(){
    uint64_t a;
    uint64_t n;
    uint64_t m;
    cin>>a>>n>>m;
    uint64_t res = 1;
    uint64_t pow1;
    pow1 = pow(a, n);
    res = pow1 % m;
    cout<<res;
}