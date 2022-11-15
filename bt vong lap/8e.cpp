#include <iostream>
using namespace std;
int main(){
    long temp, n;
    int count = 0;
    cin>>n;
    while(n <= 0);
    temp = n;
    if(n == 0) count = 1;
    while(temp != 0)
    {
        count++;
        temp = temp / 10;
    }

    int array[count];
    int number = n;
    for (int i = 5; i >= 0; i--) {
        array[i] = number % 10;
        number /= 10;
    }
    int res = 1;
    for (int i = 0; i < count; i++) {
        if (array[i] % 2 != 0) {
            res *= array[i];
        }
    }
    cout<<res<<endl;
}