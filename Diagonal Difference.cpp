#include<iostream>
using namespace std;
int main()
{
    int arraySize, a1=0, a2=0;
    cin>>arraySize;
    int j,i, arr[arraySize][arraySize];
    for(i=0; i<arraySize; i++)
    {
        for(j=0; j<arraySize; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0; i<arraySize; i++)
    {
        for(j=0; j<arraySize; j++)
        {
            if(i==j)
            {
                a1+=arr[i][i];
            }
        }

    }
    for(i=0; i<arraySize; i++)
    {
        for(j=0; j<arraySize; j++)
        {
            if(i+j==arraySize-1)
            {
                a2+=arr[i][j];
            }
        }
    }
    if(a1>a2)
    {
        cout<<a1-a2;
    }
    else if (a1<a2)
    {
        cout<<a2-a1;
    }
    else
    {
        cout<<"0";
    }

    return 0;
}
