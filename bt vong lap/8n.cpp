#include <iostream>

using namespace std;

int main(){
    int n,cd = 0;
    cin >> n;
    for (int i = n; i > 0; i--){
        if (n%i == 0){
            cd++;
        }
    }
    cout << cd;
}