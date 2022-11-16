#include <iostream>

using namespace std;

int main() {
    int n, m, sum = 0, sum2 = 0;
    cin >> n >> m;
    for (int i = n - 1; i > 0; i--) {
        if (n % i == 0) {
            sum += i;
        }
    }
    for (int j = m - 1; j > 0; j--) {
        if (m % j == 0) {
            sum2 += j;
        }
    }
    if (sum == m && sum2 == n) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}