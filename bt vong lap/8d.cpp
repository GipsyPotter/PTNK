#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    uint64_t n, sum = 0;
    cin >> n;
    uint64_t oldDigit = n % 10;
    n /= 10;
    while(n != 0)
    {
        uint64_t digit = n % 10;
        sum += abs(digit - oldDigit);
        oldDigit = digit;
        n /= 10;
    }
    cout << sum;
}