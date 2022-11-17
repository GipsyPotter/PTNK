#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    int s=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a%2==0) s+=a;
    }
    cout<<s;
}