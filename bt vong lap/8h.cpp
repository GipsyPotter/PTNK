#include <iostream>
using namespace std;
int main(){
    uint64_t temp, n, max = 0, i=0, mi = 0;
    cin>>n;
    temp = n;
    while(temp != 0)
    {
        int tmp = temp % 10;
        if(tmp != 0)
        {
            if(tmp > max){
                max = tmp;
                mi=i;
            }
        }
        temp = temp / 10;
        i++;
    }
    cout << mi;
}