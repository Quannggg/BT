#include <bits/stdc++.h>

using namespace std;

vector<char> result;
int No = 1;
int arr[26];
int n;
int k;
int c = 1;


void show()
{
    cout << "Case " << c++ << ": ";
    cout << "{";
    for(auto it = result.begin(); it != result.end(); it++)
    {
        if(it + 1 == result.end()) cout<<*it;
        else cout<<*it<<",";
    }
    cout<<"}\n";
}
void combination(int left, int right)
{
    if(result.size() == k)
    {
        No = 0;
        show();
        return;
    }
    for( int i = left; i <= right; i++)
    {
        result.push_back(arr[i]);
        combination(i+1, right);
        result.pop_back();
    }
}
int main()
{
    for(int i = 0; i < 26; i++)
    {
        arr[i] = char(i + 97);
    }
    cin>>n>>k;
    combination(0,n-1);
    if(No) cout<<"Can't solve";
    return 0;
}
