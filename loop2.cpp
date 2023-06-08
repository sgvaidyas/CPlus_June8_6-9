#include<iostream>
using namespace std;

int main()
{
	int i=0;
	
	do
	{
		cout<<i<<endl;  //0 
		i--;	        //-1
	}while(i>0);       //-1>0 false come out of loop
	
	//we check condition after
	cout<<"\n outside the loop\n";
}
