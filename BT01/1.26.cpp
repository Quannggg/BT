#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
	cin>>n;
	int a[1007];
	double mean = 0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mean += a[i];
	}
	sort(a,a+n);
	cout<<mean/(double)n<<endl
	    <<a[n-1]<<endl
		<<a[0]<<endl;
	return 0;
}
