#include<iostream>
using namespace std;
int main()
{
    int n,k,b,sum=0;
    cin>>n>>k;
    int items[n];
    for(int i=0; i<n; i++)
    {
        cin>>items[i];
    }
    cin>>b;
    for(int i=0; i<n; i++)
    {
        sum+=items[i];
    }
    sum=sum-items[k];
    sum=sum/2;
    if(sum==b)
    {
        cout<<"Bon Appetit";
    }
    else
        cout<<b-sum;
}



