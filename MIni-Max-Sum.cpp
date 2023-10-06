
#include<iostream>
using namespace std;
int main()
{
    int a[5],maxA, minA;
    long sum=0, sum1, sum2;

    for(int i=0; i<5; i++)
    {
        cin>>a[i];
    }
    maxA=a[0],minA=a[0];
    for(int i=0; i<5; i++)
    {
        sum+=a[i];
        if(a[i]>maxA)
        {
            maxA=a[i];
        }
        if(a[i]<minA)
        {
            minA=a[i];
        }
    }
    sum1=sum-maxA;
    sum2=sum-minA;
    cout<<sum1<<" "<<sum2;

    return 0;
}
