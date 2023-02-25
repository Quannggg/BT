#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.size();
    int cnt = 0;
    string tmp;
    for(int i = 0; i < n; i ++)
    {
        tmp[i] = s[n-i-1];
    }
    for(int i = 0; i < n; i++)
    {
        if(s[i] == tmp[i]) cnt++;
    }
    if(cnt == n) cout<<"Yes";
    else cout<<"No";
}
