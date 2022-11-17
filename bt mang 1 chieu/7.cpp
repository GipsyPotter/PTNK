#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    int maxx=0;
    bool t=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a%2==0){
            t=1;
            if(maxx<a) maxx=a;
        }
    }
    if(t) cout<<maxx;
    else cout<<-1;
}