#include <iostream>


using namespace std;
int main(){
    long temp, n, num, digit, rev = 0;
    int count = 0;
    cin>>n;
    num = n;
    while (num != 0) {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }
    rev += n;
    cout<<rev<<endl;
}