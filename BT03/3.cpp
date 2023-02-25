#include <iostream>
#include<vector>
using namespace std;
bool check(int i)
{
	vector<int> f;
	while(i != 0)
	{
		int r = i%10;
		f.push_back(r);
		i/=10;
	}
	int n = f.size();
	for(int j = 0; j < n/2; j++)
	{
		if(f[j] != f[n-j-1]) return false;
	}
	return true;
}
int main() {
	int num;
	cin >> num;
	for(int i = 0; i < num; i ++)
	{
		int A,B;
		cin>>A>>B;
		int cnt = 0;
		for(int j = A; j <= B; j++)
		{
			if(check(j)) cnt++;
		}
		cout<<cnt<<"\n";
	}
}
