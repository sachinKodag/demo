#include <iostream>

using namespace std;

int main()
{
	int arr[5]={2,5,4,3,6};
	int sum=1;
	int arrM[5];
	
	for(int i=0; i<5; i++)
	{
		sum=sum*arr[i];
	}
	
	for(int i=0; i<5; i++)
	{
		arrM[i]=sum/arr[i];
	}
	
	cout<<"Multiplication of array except that number: ";
	for(int i=0; i<5; i++)
	{
		cout<<arrM[i]<<" ";
	}
}
