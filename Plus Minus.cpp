#include <iostream>
using namespace std;

int main ()
{
    int arraySize;
    cin>>arraySize;
    int a[arraySize];
    for(int i=0; i<arraySize; i++)
    {
        cin>>a[i];
    }
    int pos=0, neg=0, zero=0;

    for(int i=0; i<arraySize; i++)
    {
        if(a[i]<0)
            neg++;
        else if(a[i]>0)
            pos++;
        else
            zero++;
    }
    cout<<(float)pos/arraySize<<endl;
    cout<<(float)neg/arraySize<<endl;
    cout<<(float)zero/arraySize<<endl;
}
