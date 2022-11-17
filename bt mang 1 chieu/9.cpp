#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        int t=sqrt(a);
        if(t*t==a) cout<<a<<" ";
    }
}