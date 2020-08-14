#include<iostream>
using namespace std;
inline int square(int n){
	return n*n;
}
int main(){
	int n;
	cout<<"Enter any num- ";
	cin>>n;
	cout<<"The sqaure of "<<n<<" is: "<<square(n);	
	return 0; 
}
