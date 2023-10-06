#include <iostream>
using namespace std;
int main()
{
    int arr[26], in= -1;
    string word;
    for(int i=0; i<26; i++)
    {
        cin>>arr[i];
    }
    cin>>word;

    char charA[26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int checkArr[word.size()];
    for(int i=0; i<26; i++)
    {
        for(int j=0; j<word.size(); j++)
        {
            if(charA[i] == word[j])
            {
                in++;
                checkArr[in]=arr[i];
            }
        }
    }
    int maxA=checkArr[0];
    for(int i=0; i<word.size(); i++)
    {
        if(maxA<checkArr[i])
        {
            maxA=checkArr[i];
        }
    }
    maxA*=word.size();
    cout<<maxA;
    return 0;
}
