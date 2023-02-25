#include<iostream>
using namespace std;
bool check(int f[],int N)
{
    long sum = 0;
    for(int i = 0; i < N; i++)
    {
        sum+=f[i];
    }
    if((sum - f[0]) == 0) return true;
    if((sum - f[N-1]) == 0) return true;
    int tmp = f[0];
    for(int i = 1; i < N; i ++)
    {
        int x = sum - tmp -f[i];
        if(x == tmp) return true;
        tmp += f[i];
    }
    return false;

}
int main()
{
    int T;
    cin>>T;
    for(int i = 0; i < T; i++)
    {
        int N;
        cin>>N;
        int f[N];
        for(int i = 0; i < N; i ++)
        {
            cin>>f[i];
        }
        if(check(f,N)) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    return 0;
}
