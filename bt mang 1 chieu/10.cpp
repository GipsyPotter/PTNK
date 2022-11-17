#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int maxx=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(maxx<a) maxx=a;
    }
    cout<<maxx;
}