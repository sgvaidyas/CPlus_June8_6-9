// i want to print values between
// a and b 
// a= 7  b = 55  7 8 9 .... 55
// a=77  b= 20   77 76 75 .. 20
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"\n enter the val of a nd b = ";
	cin>>a>>b;
	if(a<b)
	{
		while(a<=b)
		{
			cout<<a<<endl;
			a++;
		}
	}
	else
	{
		while(a>=b)
		{
			cout<<a<<endl;
			a--;
		}	
	}
	
}
