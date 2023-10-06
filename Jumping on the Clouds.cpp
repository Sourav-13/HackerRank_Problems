#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n, countA=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int i=0;
    while(i<n-1)
    {
        if (i+2 >= n || a[i + 2] == 1)
        {
            i = i + 1;
            countA++;
        }
        else
        {
            i = i + 2;
            countA++;
        }
    }
    cout<<countA;
}













































/*


//wrong


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n, countA=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int i=0;
    for(int j=0; i<n; j++)
    {
        countA++;
        if(a[i+2]=='0')
            i=i+2;
        else if(a[i+2]=='1')
        {
            i=i+1;
        }
        else if(a[i+1]=='1' || a[i+2]=='0')
        {
            i=i+2;
            //countA++;
        }
        else if (a[i+1]=='0')
        {
            i=i+1;
        }
    }
    cout<<countA;
}


*/

