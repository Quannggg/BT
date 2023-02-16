#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<24;i++)
	{
		if(i==1) cout<<"12 midnight"<<endl;
		if(i>=2 && i<=12) cout<<i-1<<"am"<<endl;
		if(i==13) cout<<"12 noon"<<endl;
		if(i>=13 && i<24) cout<<i-12<<"pm"<<endl;
	}
	return 0;
}

