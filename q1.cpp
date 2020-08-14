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
int main()
{
	int a[10][10];
	int row,col;
	cout<<"enter the number of rows:";
	cin>>row;
	cout<<"enter the number of columns:";
	cin>>col;
	input(a,row,col);
}
