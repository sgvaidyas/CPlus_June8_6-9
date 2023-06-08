#include<iostream>
using namespace std;
int main()
{
	int i;
	//for loop first initialize i=0
	//then you check cond (if cond is true execute block of code)
	//increment the variable
	for( i=0 ; i<=5 ; i++)  
		cout<<i<<endl;      
	
	cout<<"decrementation \n";
	for( i=6 ; i>=0 ; i--)  
		cout<<i<<endl; 
	cout<<"\n outside ";
}
