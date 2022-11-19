#include <iostream>

using namespace std;
int main(){
    int n, x;
    bool detect = false;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> x;
    for (int i = 0; i < n; i++){
        if (a[i] == x){
            detect = true;
            cout << i << " ";
        }
    }
    if (!detect) cout << -1;
}