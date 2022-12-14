#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

uint64_t notU(int64_t n){
    if(n < 0) return -1*n;
    return n;
}
int main()
{
    uint64_t n, sum = 0;
    cin >> n;
    uint64_t oldDigit = n % 10;
    n /= 10;
    uint64_t max = 0;
    while(n != 0)
    {
        uint64_t digit = n % 10;
        uint64_t delta = notU(digit - oldDigit);
        if(delta > max) max = delta;
        oldDigit = digit;
        n /= 10;
    }
    cout << max;
}