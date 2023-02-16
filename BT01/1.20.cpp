#include<iostream>
using namespace std;
bool check(int n, int m)
{
     return (m%7 == 0 && n%7 == 0)
}
int main()
{
    int m,n;
    cin>>m>>n;
    if(check(m,n)) cout<<"true";
    else cout<<"false";
    return 0;
}
