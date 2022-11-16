#include <iostream>

using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = n - 1; i > 0; i--) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}