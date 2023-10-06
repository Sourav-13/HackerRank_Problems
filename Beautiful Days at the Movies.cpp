
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int beautifulDays(int i, int j, int k)
{
    int countDay=0;
    for(int ii=i; ii<=j; ii++)
    {
        int num=ii, revNum=0;
       // cout<<num<<" ";
        while(num>0)
        {
            int temp=num%10;
            revNum = revNum*10+ temp;
            num/=10;
        }
      //  cout<<revNum<< " ";
        if(revNum>=ii)
        {
            if( (revNum-ii)%k ==0)
            {
                countDay++;
            }
        }
        else if(revNum-ii == 0)
        {
            countDay++;
        }
        else if(revNum<ii)
        {
            if( (ii-revNum)%k ==0)
                countDay++;
        }
    }
    return countDay;
}



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int i = stoi(first_multiple_input[0]);

    int j = stoi(first_multiple_input[1]);

    int k = stoi(first_multiple_input[2]);

    int result = beautifulDays(i, j, k);

    cout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}


