#include <bits/stdc++.h>
using namespace std;
vector <int> kq;

void show()
{
    for(auto it = kq.begin(); it != kq.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void partition(int n, int lim)
{
    if(n == 0)
    {
        show();
        return;
    }
    if(lim > n) lim = n;
    for(int i = lim; i > 0; i--)
    {
        int tmp = n;
        kq.push_back(i);
        tmp = tmp - i;
        partition(tmp,i);
        kq.pop_back();
    }
}
int main()
{
    int n;
    cin>>n;
    partition(n,n);
}
