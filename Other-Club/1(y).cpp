#include <iostream>
#include <string>

using namespace std;

int main()
{
    string   input   = "1m";
    cout<<input<<endl;
    uint64_t sec     = 0;
    uint64_t temp    = 0;

    bool     bSyntax = 0;

    for(int a : input)
    {
        a = tolower(a);

        if('0' <= a && a <= '9')
        {
            temp = temp * 10 + (a - '0');
            bSyntax = 1;
        }
        else if(a == 'd' && bSyntax)
        {
            sec += temp * 86400;
            temp = 0;
            bSyntax = 0;
        }
        else if(a == 'h' && bSyntax)
        {
            sec += temp * 3600;
            temp = 0;
            bSyntax = 0;
        }
        else if(a == 'm' && bSyntax)
        {
            sec += temp * 60;
            temp = 0;
            bSyntax = 0;
        }
        else if(a == 's' && bSyntax)
        {
            sec += temp;
            temp = 0;
            bSyntax = 0;
        }
    }
    cout<<sec;
    return 0;
}