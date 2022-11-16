#include <iostream>

using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = n; i > 0; i--) {
        if (n % i == 0) {
            sum += i;
        }
    }
    cout << sum;
}