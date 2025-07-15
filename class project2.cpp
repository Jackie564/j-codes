/*
Author: Jackline Mwaniki
Reg no: BSE-01-0058/2025
Description: Class Cylinder
version 1
*/

#include<iostream>
using namespace std ;

class Cylinder{
	public:

double radius;
double height;

double calculateVolume(){
	return 3.142*radius*radius*height;
	
}

double surfaceArea(){
	return 2*3.142*radius*radius+2*3.142*radius*height;
}
};

int main(){
double area,vol;
Cylinder cylinder1;
//cylinder1.radius=12.4;
//cylinder1.height=40.8;
cout<<"Enter the radius"<<endl;
cin>>cylinder1.radius;
cout<<"Enter the height"<<endl;
cin>>cylinder1.height;


vol=cylinder1.calculateVolume();
area=cylinder1.surfaceArea();

cout<<"cylinder1"<<endl;
cout<<"radius"<<cylinder1.radius<<endl;
cout<<"height"<<cylinder1.height<<endl;
cout<<"Volume"<<vol<<endl;
cout<<"Surfacearea"<<area<<endl;

return 0;
}
