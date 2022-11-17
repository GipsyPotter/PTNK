#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool prime(int n){
    if(n==1) return 0;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    int c=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(prime(a)) c++;
    }
    cout<<c;
}