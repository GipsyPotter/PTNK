#include <iostream>

using namespace std;
int main(){
    int n, x, num = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> x;
    for (int i = 0; i < n; i++){
        if (a[i] == x){
            num ++;
        }
    }
    cout << num;
}