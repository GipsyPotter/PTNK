#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }else if(n==2){
        cout<<2;
        return 0;
    }else{
        int64_t f1=1, f2=2, f3=0, i=3;
        while(i<=n){
            f3 = 3*f2-2*f1;
            f1=f2;
            f2=f3;
            i++;
        }
        cout<<f3;
    }
    return 0;
}