#include <iostream>
using namespace std;

int main(){
    int l,r;
    cin>>l>>r;
    int c=0;
    for(int i=l;i<r;i++){
        for(int j=i+1;j<=r;j++){
            if(j%i==0) c++;
        }
    }
    cout<<c;
}