#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d=0;
    while(n>=5){
        n=n/5;
        d+=n;
    }
    cout<<d;
}