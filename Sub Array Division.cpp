#include <iostream>

using namespace std;


int main()
{
    int d,m,n, countBar=0;
    cin>>n;
    int s[n];
    for(int i =0; i<n; i++)
    {
        cin>>s[i];
    }
    cin>>d>>m;
    for(int i=0; i<n ; i++)
    {
        int sum=0;
        for(int j=i; j<i+m; j++)
        {
            sum += s[j];
            if(n-i<m )
            {
                break;
            }
        }
        if(sum==d)
        {
            countBar++;
        }
    }
    cout<<countBar;
}
