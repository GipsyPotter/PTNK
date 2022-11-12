#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    float x;
    cin >> x;
    float s = 1;
    for (int i = 1; i <= n; i++) {
        s = s * x;
    }
    cout << setprecision(2) << fixed;
    cout << s;
}