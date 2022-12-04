#include <iostream>
using namespace std;

int main(){
    uint64_t n,s=1;
    cin>>n;
    for(uint64_t i=2;i<=n;i++) s*=i;
    cout<<s;
}