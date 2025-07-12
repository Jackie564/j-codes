/*
Author: Jackline Mwaniki
Reg no: BSE-01-0058/2025
Description: Computing net_pay
version 1
*/

#include <iostream>

using namespace std;

int main()
{
    double hourly_worked, hourly_wage, gross_pay, taxes, net_pay;
    
    cout<<"Enter hourly_worked: "<<endl;
    cin>>hourly_worked;
    
    cout<<"Enter hourly_wage: "<<endl;
    cin>>hourly_wage;
    
    if(hourly_worked<=40) {
		gross_pay= hourly_worked * hourly_wage;
	}
	else {
		gross_pay= (hourly_worked * hourly_wage) + (hourly_worked - 40) * hourly_wage * 1.5;
	}
	cout<<"gross_pay is: "<<gross_pay<<endl;
	
	if(gross_pay<=600) {
		taxes= 0.15 * gross_pay;
	}
	else {
		taxes= (0.15 * 600) + (gross_pay - 600) * 0.20;
	}
	cout<<"taxes is: "<<taxes<<endl;
	
	net_pay=gross_pay-taxes;
	cout<<"net_pay is: "<<net_pay<<endl;
	
    return 0;       
}