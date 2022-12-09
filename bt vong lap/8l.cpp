#include<iostream>
using namespace std;
int main()
{
    uint64_t n = 0;
    cin>>n;
    bool CheckTangDan = true;
    uint64_t themang = n;
    uint64_t ChuSoCuoi = themang % 10;
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