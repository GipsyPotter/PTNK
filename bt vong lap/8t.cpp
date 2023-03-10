#include <iostream>

using namespace std;

uint64_t TongUoc(uint64_t n)
{
    uint64_t sum = 0;
    int i = n - 1;
    while(i > 0) {
        if (n % i == 0) {
            sum += i;
        }
        i--;
    }
    return sum;
}

int main() {
    uint64_t n, m, sum = 0, sum2 = 0;
    cin >> n >> m;
    sum = TongUoc(n);
    sum2 = TongUoc(m);
    cout << sum << " " << sum2 << endl;
    if (sum == m && sum2 == n) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}