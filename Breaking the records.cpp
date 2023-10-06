#include <iostream>
using namespace std;
int main ()
{
    int aSize=9, minCount=0, maxCount=0;
    cin>>aSize;
    int a[aSize];
    for(int i=0; i<aSize; i++)
    {
        cin>>a[i];
    }
    int  maxA=a[0], minA=a[0];
    for(int i=0; i<aSize; i++)
    {

        if(maxA<a[i])
        {
            maxCount++;
            maxA=a[i];
        }
        else if(minA>a[i])
        {
            minCount++;
            minA=a[i];
        }
    }
    cout<<maxCount<<" "<<minCount;
    return 0;
}

