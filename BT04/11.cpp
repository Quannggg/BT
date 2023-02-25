#include<iostream>
#include<string>

using namespace std;
bool check(string a, string b)
{
    string tmp = a + b;
    int n = tmp.size();
    for (int i = 0; i < n; i ++)
    {
        if(tmp[i] != tmp[n-i-1]) return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    string s[101];
    for(int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    for(int i = 0; i < n; i ++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(check(s[i],s[j]))
            {
                int n = s[j].size();
                cout<< s[j].size()<<" "<<s[j][(n/2)];
            }
        }
    }
    return 0;
}
