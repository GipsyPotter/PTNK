#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    int oldDigit = n % 10;
    n /= 10;
    while(n != 0)
    {
        int digit = n % 10;
        sum += abs(digit - oldDigit);
        oldDigit = digit;
        n /= 10;
    }
    cout << sum;
}