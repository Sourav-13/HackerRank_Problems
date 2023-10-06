#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for (int k=0; k<n; k++)
    {
        int minA=10001;

        int countA=0;
        for (int i=0; i<n; i++)
        {
            if(a[i]!=0)
            {
                // minA=a[i];
                if(minA>a[i])
                {
                    minA=a[i];
                }
            }
        }
        // cout<<"cut "<<minA<<endl;
        for (int j=0; j<n; j++)
        {
            //   cout<<a[j]<<" "<<endl;
            if(a[j]!=0)
            {
                a[j]= a[j] - minA;
                countA++;
            }
        }
        //   cout<<endl;
        if(countA==0)
        {
            break;
        }
        cout<<countA<<endl;
        if(countA==1)
        {
            break;
        }

    }
    return 0;
}




