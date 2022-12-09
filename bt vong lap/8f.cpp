#include <iostream>
using namespace std;
int main(){
    uint64_t temp, n, min = 10;
    cin>>n;
    temp = n;
    while(temp != 0)
    {
        int tmp = temp % 10;
        if(tmp != 0)
        {
            if(tmp < min) min = tmp;
        }
        temp = temp / 10;
    }
    cout << min;
}