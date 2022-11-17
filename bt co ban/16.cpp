#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float x,y,max,min;
    cin>>x>>y;
    min=x;
    if(y<min) min=y;
    max=x;
    if(y>max) max=y;
    cout<<setprecision(2)<<fixed;
    cout<<min<<endl<<max;
}