#include <iostream>

using namespace std;

bool Friend(int n, int m) {
    int sum = 0, sum2 = 0;
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
    if (sum == m && sum2 == n) return true;
    else return false;
}
int main(){
    int N;
    bool detect = false;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++){
        cin >> a[i];
    }
    for (int i = 0; i < N - 1; i++){
        for (int j = i + 1; j < N; j++){
            if (Friend(a[i], a[j])){
                detect = true;
                cout << a[i] << " " << a[j] << endl;
            }
        }
    }
    if (!detect) cout << -1;
}
