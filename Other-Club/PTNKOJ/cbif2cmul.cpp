#include <iostream>
using namespace std;

int main(){
    uint32_t a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    uint32_t a1=b*c*d*e, b1=a*c*d*e, c1=a*b*d*e, d1=a*b*c*e, e1=a*b*c*d;
    if((a==a1)||(b==b1)||(c==c1)||(d==d1)||(e==e1)) cout<<"Yes";
    else cout<<"No";
}