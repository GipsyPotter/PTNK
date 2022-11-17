#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    string str;
    cin>>str;
    int c=0, maxx=0;
    for(int i=0;i<str.length();i++){
        if(str[i]!='0') c++;
        else{
            if(maxx<c) maxx=c;
            c=0;
        }
    }
    cout<<maxx;
}