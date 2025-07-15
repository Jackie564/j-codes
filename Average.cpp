/*
Author: Jackline Mwaniki
Reg no: BSE-01-0058/2025
Description: Average marks
version 1
*/
#include <iostream>

using namespace std;

int main()
{
    float mark1, mark2, mark3, Average;
    cout<<"Enter mark1, mark2, and mark3: "<<endl;
    cin>>mark1>>mark2>>mark3;
    
    Average= (mark1+ mark2+ mark3) / 3;
    cout<<"average: "<<Average<<endl;
    
    if(Average>=70 && Average<=100) {
		cout<<"Grade: A: "<<endl;
	}
	else if(Average>=60 && Average<=69){
		cout<<"Grade: B: "<<endl;
	}
	else if(Average>=50 && Average<=59) {
		cout<<"Grade: C: "<<endl;
	}
	else if(Average>=40 && Average<=49) {
		cout<<"Grade: D: "<<endl;
	}
	else {
		cout<<"Grade: E(fail): "<<endl;
	}
    return 0;       
}
