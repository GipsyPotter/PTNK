#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int &a : arr) cin>>a;
    int worst = INT_MAX, sum = 0;
    int worst_start = 0, worst_end = 0, current_start = 0;
    for (int i = 0; i < n; i++) {
        if (sum + arr[i] > arr[i]) {
            current_start = i;
            sum = arr[i];
        } else {
            sum += arr[i];
        }

        if (worst > sum) {
            worst = sum;
            worst_start = current_start;
            worst_end = i;
        }
    }
    for(int i=worst_start;i<=worst_end;i++) cout<<arr[i]<<" ";
    return 0;
}