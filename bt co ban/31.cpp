#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c,x1,x2;
    cin>>a>>b>>c;
    cout<<setprecision(2)<<fixed;
    if(a==0){
        if(b==0){
            if(c==0)cout<<"A";
            else cout<<"E";
        }else{
            x1 = (-c)/b;
            if(x1>=0) cout<<(-sqrt(x1))<<" "<<sqrt(x1);
            else cout<<"E";
        }
    }
    else{
        float delta = b*b-4*a*c;
        if(delta<0) cout<<"E";
        else if(delta>=0) {
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            if(x1>=0) cout << (-sqrt(x1))<<" "<<sqrt(x1)<<endl;
            if(x2>=0) cout << (-sqrt(x2))<<" "<<sqrt(x2)<<endl;
        }
    }
}

//v copy file ra desktop :))))
// gui t di