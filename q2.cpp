#include<iostream>
using namespace std;
void input(int a[10][10],int row,int col)
{
	int i,j;
	cout<<"enter the matrix:";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
	}
}
void display(int a[10][10],int row,int col){
	int i,j;
	cout<<"the entered matrix is as:\n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
}

int main()
{
	int a[10][10];
	int row,col;
	cout<<"enter the number of rows:";
	cin>>row;
	cout<<"enter the number of columns:";
	cin>>col;
	input(a,row,col);
	display(a,row,col);
}

