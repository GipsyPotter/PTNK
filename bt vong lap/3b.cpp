#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int k,n,m;
    cin>>k>>n>>m;
    int sk=1,fk=1;
    for(int i=1;i<=n;i++){
        fk*=k;
        sk+=fk;
    }
    cout<<sk%m;
}