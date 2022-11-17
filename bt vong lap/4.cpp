#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int x=0;2*x<=n;x++){
        int y=n-2*x;
        cout<<x<<" "<<y<<endl;
    }
}