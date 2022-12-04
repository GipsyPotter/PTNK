#include <iostream>
#include <string>
using namespace std;
int i=3;
string f1="A",f2="B",fn="B";

void Func(string str, int n)
{
    int len = str.length();
    if(n==1) fn=f1;

    int c=0;
    for(;i<=n;i++)
    {
        fn+=f1;
        f1=f2;
        f2=fn;
    }
    int flen=fn.length();
    for(int j=0;j<=(flen-len);j++){
        if(fn.substr(j,len)==str){
            c++;
        }
    }
    cout<<c<<endl;
}

int main()
{
    int n;
    string str;
    for(int a=0;a<10;a++){
        cin>>str>>n;
        Func(str,n);
    }
    return 0;
}