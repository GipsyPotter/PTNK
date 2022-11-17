#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    string str;
    cin>>str;
    int c=0;
    bool flag=1;
    for(int i=0;i<str.length();i++){
        if(flag&&str[i]!='0'){
            c++;
            flag=0;
        }else if(!flag&&str[i]=='0') flag=1;
    }
    cout<<c;
}