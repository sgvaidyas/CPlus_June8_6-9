#include<iostream>
using namespace std;

int main()
{
	int i=5;
	
	//while(i<=-1)  cond==false = no of execution cycles will be 0
	while(i>=0)
	{
		cout<<i<<endl;
		i--;
	}
	cout<<"\n outside the loop\n";
}
