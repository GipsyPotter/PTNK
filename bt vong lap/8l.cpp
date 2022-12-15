#include <iostream>
using namespace std;

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
        if(oldDigit < digit)
        {
            cout<<"NO";
            return 0;
        }
        oldDigit = digit;
        n /= 10;
    }
    cout << "YES";
}