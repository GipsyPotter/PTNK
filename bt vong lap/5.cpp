#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int n, x = 0;
    cin>>n;
    double sum = 0;
    for(int i = 0; sum < n; i++){
        sum += sqrt(i);
        x ++;
    }
    cout<<fixed<<setprecision(2)<<x;
}