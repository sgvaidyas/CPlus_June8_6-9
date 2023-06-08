/*

n = 4
1*4
2*3
3*2
4*1
*/
#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"\n Enter the n = ";
	cin>>n;
	
	for(i=1,j=n ; i<=n ; i++,j--)
		cout<<i<<"*"<<j<<" = "<<i*j<<endl;
}
