#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    int s=1;
    for(int i=n;i>0;i--) {
        s = s * i;
    }
    cout<<s;
}