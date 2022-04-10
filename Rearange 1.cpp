#include<iostream>
using namespace std;

void reArrane(int arr[],int n)
{
	for(int i=0; i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[j]==i)
			{
				int temp = arr[i];
				arr[i]=arr[j];  //if found
				arr[j]=temp;
				break;
			}
		}
	}
	// if not found 
	for(int i = 0;i<n;i++)
	{
		if(arr[i]!=i)
		{
			arr[i]=-1;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<< arr[i]<<" ";
	}
	
}

	


int main()
{
	int arr[]={-2,4,1,-1,6,9,3,7};
	int n = sizeof(arr)/ sizeof(arr[0]);
	reArrane(arr,n);
	
	
	
}
