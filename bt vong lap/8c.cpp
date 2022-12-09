#include <iostream>
using namespace std;
int main(){
    long temp, n;
    int sum = 0;
    cin>>n;
    while(n <= 0);
    temp = n;
    while(temp != 0)
    {
        int tmp = temp % 10;
        if(tmp%2==0) sum += tmp;
        temp = temp / 10;
    }
    cout<<sum;
}