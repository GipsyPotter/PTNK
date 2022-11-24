#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n=0;
    cin>>n;
    int arr[n], s;
    cin>>s;
    for(int &a : arr) cin>>a;
    int c=0, mini=0;
    vector<int> t;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        vector<int> fact;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            fact.push_back(arr[j]);
            if(sum==s){
                for(int a : fact) cout<<a<<" ";
                return 0;
            }
            else if(sum>s) break;
        }
    }
    cout<<-1;
    return 0;
}