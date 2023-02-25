#include<iostream>
using namespace std;
bool check(int a[], int n)
{
    int f[10007] = {0};
    for(int i = 0; i < n; i ++)
    {
        f[a[i]]++;
        if(f[a[i]] >= 2) return true;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int a[10007];
    for(int i = 0; i < n; i ++)
    {
        cin>>a[i];
    }
    if(check(a,n)) cout<<"Yes";
    else cout<<"No";
}
