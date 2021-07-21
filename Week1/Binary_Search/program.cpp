#include<iostream>
using namespace std;

int n;	//n is defined as global variable so that it isn't needed to be passes as an argument in the function
int c=0;
int binary_search(int a[],int key,int low, int high)
{
	int i,mid;
	while(high>=low)
	{
		mid=low+(high-low)/2;

		if(a[mid]==key)
			{	
				c+=1;
				return c;
			}
		else if(a[mid]<key)
		{
			c+=1;
			return binary_search(a,key,mid+1,high);
		}
		else if(a[mid]>key)
		{
			c+=1;
			return binary_search(a,key,low,mid-1);
		}

	}
	return -1;
}

int main()
{
	int key,i,ans,t;
	//cout<<"Enter the number of test cases:";
	cin>>t;	//number of test cases
	while(t--)
	{
		c=0;
		//cout<<"Enter the size of the array:";
		cin>>n;		//size of each array
		//cout<<"Enter the non-negative integers in a sorted order into the array:"; // zero can also be included in the array
		int arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		//cout<<"Enter the key element to be searched:";
		cin>>key;	//element to be searched
		
		ans=binary_search(arr,key,0,n-1);
		if(ans==-1)
			cout<<"Not Present "<<c<<endl;
		else
			cout<<"Present "<<ans<<endl;
	}
return 0;
}
