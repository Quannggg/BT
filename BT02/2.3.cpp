#include<iostream>
using namespace std;
void printRow(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<n;j++)
        {
            std::cout<<" ";
        }
        for(int k=1;k<i*2;k++)
        {
           std::cout<<"*";
        }
        for(int m=i;m<n;m++)
        {
            std::cout<<" ";
        }
        std::cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    printRow(n);
    return 0;
}
