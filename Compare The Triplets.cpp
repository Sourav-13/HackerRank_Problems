#include <iostream>
using namespace std;
int main ()
{
    int a[3], b[3], returnArray[2]= {0, 0};
    for(int i=0; i<3; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<3; i++)
    {
        cin>>b[i];
    }
    int i=0,j=0;
    while(i!=3)
    {
        if(a[i]>b[i])
        {
            returnArray[0]++;
        }
        else if(a[i]<b[i])
        {
            returnArray[1]++;
        }
        i++, j++;
    }
    for(int i=0; i<2; i++)
    {
        cout<<returnArray[i]<<" ";
    }
    return 0;
}






