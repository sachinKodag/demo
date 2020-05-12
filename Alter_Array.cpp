#include <iostream>

using namespace std;

int main()
{
	int i=0, j=5, k=0;
	int arr[6]={1,2,3,4,5,6};
	int sort[6];
	
	while(j>i)
	{
		sort[k]=arr[j];
		k++;
		j--;
		sort[k]=arr[i];
		k++;
		i++;
	}
	
	
	for(int i=0; i<6; i++)
	{
		cout<<sort[i]<<" ";
	}
	return 0;
}
