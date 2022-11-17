#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool perfect(int n){
    int s=1;
    for(int i=2;i<=n/2;i++) if(n%i==0) s+=i;
    return s==n;
}
int main(){
    int n;
    cin>>n;
    int c=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(perfect(a)) c++;
    }
    cout<<c;
}