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
int main()
{

    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++) cin>>arr[i];
    bubbleSort(arr,N);
    for(int i=0;i<N;i++) cout<<arr[i]<<" ";
}

