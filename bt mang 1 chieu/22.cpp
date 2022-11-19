#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
void reverse(int arr[],int res[], int n)
{
    int j = 0;
    for (int i = n - 1; i >= 0; i--) {
        res[j] = *(arr+i);
        j++;
    }
}
int main()
{

    int N;
    cin>>N;
    int arr[N];
    int res[N];
    for(int i=0;i<N;i++) cin>>arr[i];
    bubbleSort(arr,N);
    reverse(arr,res,N);
    for(int i=0;i<N;i++) cout<<res[i]<<" ";
}

