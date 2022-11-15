#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, delta, digit, sum = 0;
    cin >> n;
    vector <int> nv;
    while (n != 0){
        digit = n % 10;
        nv.push_back(digit);
        n = n / 10;
    }
    reverse(nv.begin(), nv.end());
    for (int i = 0; i < nv.size() - 1; i++){
        delta = abs(nv[i] - nv[i+1]);
        sum += delta;
    }
    cout << sum;
}