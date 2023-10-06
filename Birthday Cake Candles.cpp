
#include<iostream>
using namespace std;
int main()
{
    int aSize;
    cin>>aSize;
    int a[aSize],maxA, countA=0;
    for(int i=0; i<aSize; i++)
    {
        cin>>a[i];
    }
    maxA=a[0];
    for(int i=0; i<aSize; i++)
    {
        if(a[i]>maxA)
        {
            maxA=a[i];
        }
    }
    for(int i=0; i<aSize; i++)
    {
        if(maxA==a[i])
        {
            countA++;
        }
    }
    cout<<countA;
    return 0;
}
