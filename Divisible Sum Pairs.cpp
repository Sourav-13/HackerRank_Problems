#include <iostream>
using namespace std;
int division(int a[], int n, int k)
{
    int countDiv=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if( i < j )
            {
                if((a[i]+a[j]) % k == 0)
                {
                    countDiv++;
                }
            }
        }
    }
    return countDiv;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<division(a,n,k);
}
