#include <iostream>
using namespace std;
int main() {
    int n, num, digit, rev = 0, maxeven;
    bool even = false;
    cin >> num;
    n = num;
    while (num != 0) {
        digit = num % 10;
        if(digit % 2 == 0) {
            if(digit > maxeven) {
                maxeven = digit;
                even = true;
            }
        }
        num = num / 10;
    }
    if(even) {
        cout << maxeven;
    } else {
        cout << -1;
    }
}