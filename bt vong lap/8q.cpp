#include <iostream>
#include <cmath>

using namespace std;

bool KTSNT(uint64_t x) {
    if (x < 2)
        return false;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return false;
    return true;
}

int main() {
    uint64_t n;
    cin >> n;
    if (KTSNT(n))
        cout <<"YES";
    else
        cout <<"NO";
}
