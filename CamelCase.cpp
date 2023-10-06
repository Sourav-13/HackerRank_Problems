#include <bits/stdc++.h>

using namespace std;

int camelcase(string s)
{
    int countS=0;
    for(int i=0; i<s.length()-1; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            countS++;
        }
    }
    return countS+1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    cout << result << "\n";

    fout.close();

    return 0;
}

