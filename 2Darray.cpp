#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string seat;
	cin>>seat;
	int num=64;
    int row;
    istringstream(seat) >> row;
	
	char colm = seat[1];
	int column=int(colm-64);
	char arr[row][column];
	cout<<"Row is: "<<row<<" and colm is: "<<column<<endl;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<4; j++)
		{
			arr[i][j]=char(65+j);
		}
	}
	
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
