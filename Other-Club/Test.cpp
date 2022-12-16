#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int n, count = 0;
    cin >> n;
    while (n != 1){
        if (n % 2 == 0) n /= 2;
        else n = 3 * n + 1;
        count += 1;
    }
    cout << count + 1 ;

}