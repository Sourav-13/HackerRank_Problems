#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int height[n];
    for(int i=0; i<n; i++)
    {
        cin>>height[i];
    }
    int maxH=height[0];
    for (int i=0; i<n; i++)
    {
        if(maxH<height[i])
        {
            maxH=height[i];
        }
    }
    if(k>maxH)
        cout<<"0";
    else
    {
        int sum=maxH-k;
        cout<< sum;
    }
}


