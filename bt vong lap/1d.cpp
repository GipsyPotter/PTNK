#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    double s = n + (1.0 / n);
    for (int i = n; i > 0; i--) {
        s = i + (1.0 / s);
    }
    cout << setprecision(2)<<fixed;
    cout << s;
}