#include <iostream>
#include <string>

using namespace std;
int main(){
    string n;
    cin >> n;
    int s1=0,s2=0;
    for(int i = 0; i < 3; i++ ){
        s1+=n[i]-'0';
    }
    for (int i = 5; i > 2; i--){
        s2+=n[i]-'0';
    }
    if (s1==s2){
        cout << "YES";
    } else {
        cout << "NO";
    }
}