#include <iostream>
using namespace std;
int main(){
    uint64_t n;
    cin>>n;
    uint64_t d=0;
    while(n>=5){
        n=n/5;
        d+=n;
    }
    cout<<d;
}