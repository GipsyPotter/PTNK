#include <iostream>
#include <cmath>

using namespace std;

int main(){
    uint64_t a = pow(10,9);
    uint64_t n = pow(10,9);
    uint64_t m = 3;

    uint64_t res = 1;
    uint64_t pow1;
    pow1 = pow(a, n);
    res = mod(pow1, m);
    cout<<res;
}