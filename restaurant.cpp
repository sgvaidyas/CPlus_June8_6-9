#include<iostream>
using namespace std;
int main()
{
	int ch,qty=0,price=0;
	do
	{		
		cout<<"1 Burger 100 \n 2 Pizza 250\n";
		cout<<" 3 Wrap 150 \n 4 Exit \n Enter choice = ";
		cin>>ch;
		if(ch>=1  && ch<=3)
		{
			cout<<"\n Enter the quantity = ";
			cin>>qty;
		}
		switch(ch)
		{
			case 1: cout<<"\n=======BURGER   = "<<qty<<endl;
			       // price = price + (qty *100);
			        price += (qty *100);
			        break;
			case 2: cout<<"\n=======PIZZA   = "<<qty<<endl;
			        price += qty *250;
			        break;
			case 3: cout<<"\n=======WRAP   = "<<qty<<endl;
			        price += qty *150;
			        break;
			case 4:cout<<"\n=========EXITING=================\n";
			       break;
		}
	}while(ch!=4);
	if(price>=1000)
	{
		cout<<"\n DISCOUNT ............. = 5% ";
		cout<<"\n BILL     ............. = "<<price;
		cout<<"\n BILL AFTER DISCOUNT . = "<<price-(price*0.05);           
	}
	else if(price>=500 && price<1000)
	{
		cout<<"\n DISCOUNT ............. = 2% ";
		cout<<"\n BILL     ............. = "<<price;
		cout<<"\n BILL AFTER DISCOUNT . = "<<price-(price*0.02);           
	}
	else
	{
		cout<<"\n BILL     ............. = "<<price;
	}	
}
	
	
	
	
	
	
	
