#include<iostream>
using namespace std;

int main(){
	cout<<" What you want "<<endl;
	cout<<" 1. Add Income "<<endl;
	cout<<" 2. Add Expense "<<endl;
	cout<<" 3. View Balance "<<endl;
	cout<<" 4.Exit "<<endl;
	
	int options;
	double totalbalance = 0;
	double income;
	double expense;
	char choice;
	do{
		cout<<" Enter Your Options From (1-4)"<<endl;
		cin>>options;
	switch(options){
		case 1:
		double income;
		cout<<"Enter your Income  "<<endl;
		cin>>income;
		cout<<" Your Income is "<<income<<endl;
		totalbalance = totalbalance + income;
		break;
		
		case 2:
		double expense;
		cout<<"Enter your Expense  "<<endl;
		cin>>expense;
		cout<<" Your expense is "<<expense<<endl;
		totalbalance  = totalbalance-expense;
		break;
		
		case 3:
		double balance;
		cout<<"Your Total balance   "<<totalbalance<<endl;
		break;
		
		case 4:
		cout<<" Thank you";
		break;
		default:
			{ 
			cout<<" Error ";
			}
	}
	cout<<" Do you want to try again : y/n ?"<<endl;
	cin>>choice;
	
	}while(choice == 'Y'|| choice == 'y');
	return 0;
}
