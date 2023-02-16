#include <iostream>

using namespace std;

int main()
{
    int n;
    int tmp = -1;
    while(cin>>n )
    {

        if(n < 0 )
        {
            cout<<n;
            break;
        }
        if(n == tmp) continue;
        tmp = n;
        cout<<n;
    }
}
