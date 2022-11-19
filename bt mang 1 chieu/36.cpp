#include <iostream>

using namespace std;
int main(){
    int n, min = 1000000000;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        if (100000 <= a[i] && a[i] <= 999999){
            int sum1 = 0, sum2 = 0;
            for (int j = 2; j >= 0; j--){
                sum1 += a[i] % 10;
                a[i] /= 10;
            }
            for (int j = 5; j >= 3; j--){
                sum2 += a[i] % 10;
                a[i] /= 10;
            }
            if (sum1 == sum2 && a[i] < min) min = a[i];
        }

    }
    cout << min;
}
