#include <iostream>
using namespace std;
int main(){
    uint64_t temp, n, count = 0;
    cin>>n;
    temp = n;
    while(temp != 0)
    {
        if(temp % 10 != 0) count++;
        temp = temp / 10;
    }
    cout << count;
}