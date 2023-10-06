#include<iostream>
using namespace std;
int checkA[6];
int main()
{
    int n,k,c,countA=0;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        checkA[a[i]]++;
    }

    int minA=checkA[1];
    for(int i=1; i<6; i++)
    {
        if(minA<checkA[i])
        {
            minA=checkA[i];
            c=i;
        }
    }
    cout<<c;
}
