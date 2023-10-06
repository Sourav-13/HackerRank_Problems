#include<iostream>
using namespace std;
int main()
{
    int x1,v1,x2,v2, s1=0, s2=0, n=0, result;
    cin>>x1>>v1>>x2>>v2;

    if(x1<x2 && v2>v1)
    {
        cout<<"NO";
    }
    else
    {
        if (v2-v1 == 0)
        {
            cout<<"NO";
        }
        else
        {
            result = (x1-x2) % (v2-v1);

            if (result == 0)
            {
                cout<<"YES";
            }
            else
            {
                cout<<"NO";
            }
        }

    }
}

