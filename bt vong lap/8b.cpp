#include <iostream>
using namespace std;
int main(){
    long temp, n;
    int count = 0;
    cin>>n;
    temp = n;
    if(n == 0) count = 1;
    while(temp != 0)
    {
        if(temp % 10 != 0) count++;
        temp = temp / 10;
    }
    cout << count;
}