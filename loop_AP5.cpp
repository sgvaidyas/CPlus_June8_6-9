/*
n = 7
j=1
i=1
1 4 7 10 13 16 19
                     (j=j+3)
i    i<=n   print j  j+=3         i++  
---------------------------------------
1    1<=5      1     1+3 = 4      2
2    2<=5      4     4+3 = 7      3
3    3<=5      7     7+3 = 10     4
4    4<=5     10     10+3 =13     5
5    5<=5     13     13+3 = 16    6
6    6<=5 ===========================

*/
#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"\n Enter the n = ";
	cin>>n;
	
	for(i=1 ,j=1 ;  i<=n ; j=j+3,i++)
	{
		cout<<j<<"\t";
	}		
}











