#include<iostream>
using namespace std;
bool checknhuan(int n)
{
    return(n%400==0||(n%100!=0&&n%4==0));
}
int main()
{
    int n;
    cin>>n;
    if(checknhuan(n)) cout<<"nhuan";
    else cout<<"khong nhuan";
    return 0;
}
