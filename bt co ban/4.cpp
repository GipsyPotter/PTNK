#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    float x1,y1,x2,y2,s;
    cin>>x1>>y1>>x2>>y2;
    s=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<setprecision(2)<<fixed;
    cout<<s;
}