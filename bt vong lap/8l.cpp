#include <iostream>
using namespace std;

int main()
{
    uint64_t n, sum = 0;
    cin >> n;
    if(n < 10)
    {
        cout<<"YES";
        return 0;
    }
    uint64_t oldDigit = n % 10, max = 0;
    n /= 10;
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