#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a,b;
    cin>>a>>b;
    if(a==0){
        if(b==0) cout << "Infinty solution";
        else cout<<"No solution";
    }else{
        cout<<setprecision(3)<<fixed<<(-b)/a;
    }

}