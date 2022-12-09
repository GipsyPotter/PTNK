#include <iostream>
using namespace std;
int main(){
    uint64_t temp, n, sum = 1;
    cin>>n;
    temp = n;
    while(temp != 0)
    {
        int tmp = temp % 10;
        if(tmp%2!=0) sum *= tmp;
        temp = temp / 10;
    }
    cout<<sum;
}