#include <iostream>

using namespace std;
int main(){
    uint64_t temp, n, num, digit, rev = 0;
    uint64_t count = 0;
    cin>>n;
    num = n;
    while (num != 0) {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }
    cout<<rev<<endl;
}