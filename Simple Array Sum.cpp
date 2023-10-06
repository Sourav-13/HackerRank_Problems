#include <iostream>
using namespace std;
int simpleArraySum(int arr[], int arraySize);
int main ()
{
    int arraySize;
    cin>>arraySize;
    int arr[arraySize];
    for(int i=0; i<arraySize; i++)
    {
        cin>>arr[i];
    }
    int sum = simpleArraySum(arr, arraySize);
    cout<<sum;
    return 0;
}
int simpleArraySum(int arr [], int arraySize)
{
    int sumArray = 0;
    for(int i=0; i<arraySize; i++)
    {
        sumArray+=arr[i];
    }
    return sumArray;
}
