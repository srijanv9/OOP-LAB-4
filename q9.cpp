#include <iostream>
using namespace std;
void area(double);
void area(double,double);
void area(double,double,double);
int main(){
	double radius,length,breadth,height,base,half=0.5;
	cout<<"enter the radius of circle:";
	cin>>radius;
	area(radius);
	cout<<"enter the length and bredth of rectangle:";
	cin>>length>>breadth;
	area(length,breadth);
	cout<<"enter the base and height of triangle:";
	cin>>base>>height;
	area(height,base,half);
	
	return 0;
}

void area(double r){
	cout<<"The area of the circle is: "<< 3.14*r*r<<endl;
}

void area(double l, double b){
	cout<<"The area of the rectangle is: "<< l*b<<endl;
}

void area(double h, double b, double c){
	cout<<"The area of the triangle is: " <<c*h*b<<endl;
}
