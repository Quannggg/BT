#include <iostream>

using namespace std;
bool check(int n)
{
    if(n < 0) return false;
    if(n == 2) return true;
    for(int i = 2 ; i < n; i++)
    {
        if(n%i == 0) return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    if(check(n)) cout<<"yes";
    else cout<<"no";
    return 0;
}
