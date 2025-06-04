/*
Author: Jackline Mwaniki
Reg no: BSE-01-0058/2025
Description: Calculating BMI
Date: 27/3/2025
version 1
*/

#include <iostream>

using namespace std;

int main()
{
    float weight, height, BMI;
    cout<<"Enter weight in kilograms and height in meters: "<<endl;
    cin>>weight>>height;
    
    BMI= weight / (height*height);
    cout<<"BMI: "<<BMI<<endl;
    
    if (BMI<18.5) {
		cout<< "Category: Underweight: "<<endl;
	}
	else if (BMI>= 18.5 && BMI<= 24.9) {
		cout<< "Category: Normal weight: "<<endl;
	}
	else if (BMI>= 25 && BMI<= 29.9) {
		cout<< "Category: Overweight: "<<endl;
	}
	else {
		cout<< "Category: Obesity: "<<endl;
	}
    return 0;       
}