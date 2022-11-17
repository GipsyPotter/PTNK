#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a%2==0) c++;
    }
    cout<<c;
}