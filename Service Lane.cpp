#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    int n,t, min;
    cin>>n>>t;
    int wide[n], cases[t*2];
    for(int i=0; i<n; i++)
    {
        cin>>wide[i];
    }
    for(int i=0; i<t*2; i++)
    {
        cin>>cases[i];
    }
    int i=0;
    for(int j=1; j<t*2;  j+=2)
    {
        min=wide[cases[i]];
        for(int k=cases[i]; k<=cases[j]; k++)
        {
            if(min>wide[k])
            {
                min=wide[k];
            }
        }
        cout<<min<<endl;
        i+=2;
    }
    return 0;
}

