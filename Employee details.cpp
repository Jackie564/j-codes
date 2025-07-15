/*
Author: Jackline Mwaniki
Reg no: BSE-01-0058/2025
Description: Employeee
version 1
*/

#include <iostream>

using namespace std;

class employee {
private:
	int idno;
    string name;
    string occupation;
    
    public:
    void getDetails() {    
    cout<<"Enter ID number: "<<endl;
    cin>>idno;
    
    cout<<"Enter name: "<<endl;
    cin>>name;
    
    cout<<"Enter occupation: "<<endl;
    cin>>occupation;
}
    
    void display() {
   	    cout << "\nEmployee Details:" << endl;
        cout << "ID Number: " << idno << endl;
        cout << "Name: " << name << endl;
        cout << "Occupation: " << occupation << endl;
}
              
};      
    int main() {
    employee zu_emp;  
    zu_emp.getDetails();
    zu_emp.display();

    return 0;       
}