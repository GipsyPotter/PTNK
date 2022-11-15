#include<iostream>
using namespace std;
int main()
{
    int n = 0;
    cin>>n;
    bool CheckTangDan = true;
    int themang = n;
    int ChuSoCuoi = themang % 10;
    themang /= 10;
    while(themang != 0)
    {
        int ChuSoKeCuoi = themang % 10;
        themang /= 10;
        if (ChuSoCuoi < ChuSoKeCuoi)
        {
            CheckTangDan = false;
            break;
        }
        else
        {
            ChuSoCuoi = ChuSoKeCuoi;
        }
    }
    if(CheckTangDan)
        cout<<"YES";
    else
        cout<<"NO";
}