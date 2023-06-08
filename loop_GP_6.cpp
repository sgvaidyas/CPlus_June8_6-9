/*

	n = 7

1 2 4 8 16 32 64
-----------------
*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"\n Enter the n = ";
	cin>>n;
	
   /*	
	
	for(i=1,j=1;i<=n;j*=2,i++)
		cout<<j<<"\t";
	*/	

	
	for(i=1;i<=n;i++)
		cout<<pow(2,i-1)<<endl;	
}











