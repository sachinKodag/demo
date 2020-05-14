#include <iostream>

using namespace std;

int main()
{
	int size, i;
	cout<<"Enter size of array: ";
	cin>>size;
	int arr[size];
	cout<<"Enter elements in array: ";
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0; i<size/2; i++)
	{
		int temp;
		temp=arr[i];
		arr[i]=arr[size-1-i];
		arr[size-1-i]=temp;
	}
	
	cout<<"After In place array is: ";
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
