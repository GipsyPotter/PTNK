#include <iostream>
using namespace std;

int main(){
    int64_t temp, n, max = -1;
    cin>>n;
    temp = n;
    while(temp != 0)
    {
        int tmp = temp % 10;
        if(tmp%2==0 && tmp > max){
            max = tmp;
        }
        temp = temp / 10;
    }
    cout<<max;
}