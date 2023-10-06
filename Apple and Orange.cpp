#include<iostream>
using namespace std;
int main()
{
    long s,t, a,b, m,n;
    long ap=0, orn=0;
    cin>>s>>t>>a>>b>> m>>n;
    int apple[m], orange[n];
    for(int i=0; i<m; i++)
    {
        cin>>apple[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>orange[i];
    }
    int getApple[m], getOrange[n];
    for(int i=0; i<m; i++)
    {
        getApple[i]=a+apple[i];
    }
    for(int i=0; i<n; i++)
    {
        getOrange[i]=b+orange[i];
    }

    for(int i=0; i<m; i++)
    {
        if(getApple[i] >= s && getApple[i] <= t)
        {
            ap++;
        }

    }
     for(int i=0; i<m; i++)
    {
         if(getOrange[i]>=s && getOrange[i]<=t)
        {
            orn++;
        }

    }

    cout<<ap<<" "<<orn;
    return 0;
}



