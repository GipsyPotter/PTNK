#include <iostream>
#include <cmath>
using namespace std;

int main(){
    uint64_t a, n, m;
    cin>>a>>n>>m;
    uint64_t pow1 = pow(a, n);
    cout<<pow1%m;
}