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
    int maxx=0;
    bool t=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(prime(a)){
            t=1;
            if(maxx<a) maxx=a;
        }
    }
    if(t) cout<<maxx;
    else cout<<-1;
}