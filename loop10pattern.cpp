#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"\n Enter the n = ";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j<<j;
		}
		cout<<endl;
	}
}
