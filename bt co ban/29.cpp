#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    float a,b,c,d,x,x1,x2;
    cin>>a>>b>>c;
    cout<<setprecision(2)<<fixed;
    if(a==0){
        if(b==0){
            if(c==0){
                cout<<"A";
            }else{
                cout<<"E";
            }
        }
        else{
            x=-c/b;
            cout<<x;
        }
    }
    else{
        d=b*b-4*a*c;
        if(d<0){
            cout<<"E";
        }
        else if(d==0){
            x=-b/(2*a);
            cout<<x;
        }
        else{
            x1=(-b-sqrt(d))/(2*a);
            x2=(-b+sqrt(d))/(2*a);
            cout<<x1<<" "<<x2;
        }
    }
}