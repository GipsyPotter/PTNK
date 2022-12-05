#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int x1,y1, x2,y2, x3,y3;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    int a=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    int b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    int c=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    cout<<setprecision(2)<<fixed<<(double)(a+b+c);
}