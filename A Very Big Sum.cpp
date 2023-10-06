
#include <iostream>
using namespace std;
long long aVeryBigSum(int arr[], int arraySize);
int main ()
{
    int arraySize;
    cin>>arraySize;
    int arr[arraySize];
    for(int i=0; i<arraySize; i++)
    {
        cin>>arr[i];
    }
    long long sum = aVeryBigSum(arr, arraySize);
    cout<<sum;
    return 0;
}
long long aVeryBigSum(int arr [], int arraySize)
{
    long long sumArray = 0;
    for(int i=0; i<arraySize; i++)
    {
        sumArray+=arr[i];
    }
    return sumArray;
}
