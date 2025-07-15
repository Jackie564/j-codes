/*Author: Jackline Mwaniki
Reg No: BSE-01-0058/2025
Description: Car Mileage Tracker
Date: 27/3/2025
version 1
*/

#include <iostream>
#include <string>

using namespace std;

class Car {
private:
   string brand;
   string model;
   float price;
   int mileage;
  
public: 
   Car(string x, string y, float a, int b) {
	   brand = x;
	   model = y;
	   price = a;
	   mileage = b;
	    
}

void display() {
	cout<<"Brand: "<<brand<<endl;
	cout<<"Model: "<<model<<endl;
	cout<<"Price: $"<<price<<endl;
	cout<<"Mileage: "<<mileage<<" miles "<<endl;
}

void drive (int distance) {
	mileage= mileage + distance;
	cout<<"Update Mileage: "<<mileage<<" miles "<<endl;
}  
   
};
  
int main() {
	Car carobj("Toyota", "Corolla", 20000, 5000);
	
	carobj. display();
	cout<<"Driving 150 miles "<<endl;
	carobj.drive (150);
	
	cout<<"Driving 300 miles "<<endl;
	carobj.drive (300);	
    
    return 0;       
}