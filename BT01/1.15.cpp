#include<iostream>
#include<string>
using namespace std;
int main()
{
    string f[1007];
    f[0]='a';
    f[1]='b';
    cout<<f[0]<<endl;
    cout<<f[1]<<endl;
    for(int i=2;i<11;i++)
    {
        f[i]=f[i-1]+f[i-2];
        cout<<f[i]<<endl;
    }
}
