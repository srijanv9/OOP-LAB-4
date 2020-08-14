#include<iostream>
using namespace std;
void input(int mat[10][10],int row,int col)
{
	int i,j;
	cout<<"Enter the Matrix elements:"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>mat[i][j];
		}
	}
}
void display(int mat[10][10],int row,int col){
	int i,j;
	cout<<"The Entered Matrix is:"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<" "<<mat[i][j];
		}
		cout<<endl;
	}
}
void input(int mat[10][10],int row=0,int col=0);
void display(int mat[10][10],int row=0,int col=0);
int main()
{
	int mat[10][10];
	int row,col;

	input(mat);
	display(mat);
	
	return 0;
}
