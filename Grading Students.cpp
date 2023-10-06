#include<iostream>
using namespace std;
int main()
{
    int aSize;
    cin>>aSize;
    int a[aSize],finalA[aSize];
    for(int i=0; i<aSize; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<aSize; i++)
    {
        if(a[i]>37 && a[i] % 5 > 2)
        {
            finalA[i] =a[i]+ 5 - a[i]%5;
        }
        else
        {
            finalA[i] =a[i];
        }
    }
    for(int i=0; i<aSize; i++)
    {
        cout<<finalA[i]<< endl;
    }
    return 0;
}
