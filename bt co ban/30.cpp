#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a1,b1,c1,a2,b2,c2;
    cin>>a1>>b1>>c1>>a2>>b2>>c2;
    cout<<setprecision(2)<<fixed;
    c1=-c1;c2=-c2;
    float D = a1 * b2 - a2 * b1;
    float Dx = c1 * b2 - c2 * b1;
    float Dy = a1 * c2 - a2 * c1;
    if(D==0){
        if(Dx==Dy&&Dy==0) cout<<"A";
        else cout<<"E";
    }else{
        cout<<Dx/D<<" "<<Dy/D;
    }
}