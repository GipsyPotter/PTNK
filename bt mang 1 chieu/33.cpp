#include <iostream>
using namespace std;

int main(){
    int n, min = 2000000000;
    bool detect = false;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        int num = a[i];
        int digit, rev = 0;
        while (num != 0) {
            digit = num % 10;
            rev = (rev * 10) + digit;
            num = num / 10;
        }
        if ((a[i] == rev) && (a[i] < min)){
            min = a[i];
            detect = true;
        }
    }
    if (!detect) cout << -1;
    else cout << min;
}