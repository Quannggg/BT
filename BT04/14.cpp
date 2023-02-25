#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int A[n];
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>A[i];
        sum1 +=A[i];
    }
    int B[n+1];
    for(int i = 0; i < n+1; i ++)
    {
        cin>>B[i];
        sum2 += B[i];
    }
    cout<<sum2-sum1;
    return 0;
}

