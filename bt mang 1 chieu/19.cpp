#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int prev=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(prev>a){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}