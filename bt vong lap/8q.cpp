#include <iostream>

using namespace std;

bool KTSNT(int x) {
    if (x < 2)
        return false;
    for (int i = 2; i <= x / 2; i++)
        if (x % i == 0)
            return false;
    return true;
}

int main() {
    unsigned int n;
    cin >> n;
    if (KTSNT(n))
        cout <<"YES";
    else
        cout <<"NO";
}
