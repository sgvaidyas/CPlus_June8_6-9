#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"\n Enter the n = ";
	cin>>n;
	
	for(i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
