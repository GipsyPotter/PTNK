#include <iostream>
#include <vector>

using namespace std;
int main(){
    int num, digit;
    cin >> num;
    vector<int> a;
    while (num != 0){
        digit = num % 10;
        a.push_back(digit);
        num = num / 10;
    }
    vector <int> b;
    b.push_back(1);
    for (int i = 0; i < a.size(); i++)
        if (a[i] != 0) {

        }


}