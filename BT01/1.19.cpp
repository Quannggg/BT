#include<iostream>
using namespace std;
bool b( int x, int y, int z )
{
    return( (x>y && y>z) || (x<y && y<z) );
}
int main()
{   int x,y,z;
    cin>>x>>y>>z;
    cout<<b(x,y,z);
    return 0;
}
