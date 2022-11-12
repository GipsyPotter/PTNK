#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int s = 1;
    if (n % 2 == 0) {
        for (int i = n; i >= 2;i-=2){
            s*=i;
        }
    }
    else{
        for (int i = 1;i<=n;i+=2){
           s*=i;
        }
    }
    cout<<s;
}