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
    int best = INT_MIN, sum = 0;
    int best_start = 0, best_end = 0, current_start = 0;
    for (int i = 0; i < n; i++) {
        if (sum + arr[i] < arr[i]) {
            current_start = i;
            sum = arr[i];
        } else {
            sum += arr[i];
        }

        if (best < sum) {
            best = sum;
            best_start = current_start;
            best_end = i;
        }
    }
    for(int i=best_start;i<=best_end;i++) cout<<arr[i]<<" ";
    return 0;
}