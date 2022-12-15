#include <iostream>

using namespace std;

uint64_t TongUoc(uint64_t n)
{
    uint64_t sum = 0;
    for (int i = n - 1; i > 0; i--) {
        if (n % i == 0) {
            sum += i;
        }
    }
}

int main() {
    uint64_t n, m, sum = 0, sum2 = 0;
    cin >> n >> m;
    sum = TongUoc(n);
    sum2 = TongUoc(m);
    if (sum == m && sum2 == n) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}