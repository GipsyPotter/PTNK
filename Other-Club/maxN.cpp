#include <iostream>
using namespace std;
int main(){
    uint64_t n, max = 0;
    cin >> n;
    while (n != 1){
        if (n % 2 == 0){
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
        if (n > max){
            max = n;
        }
    }
    cout << max;
}