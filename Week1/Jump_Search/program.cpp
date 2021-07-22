#include<iostream>
#include<cmath>
using namespace std;

int n;	//n is defined as global variable so that it isn't needed to be passes as an argument in the function
int c=0;
int jump_search(int a[],int key,int step)
{
	int i=0,end,start;
	while(a[step*i]<=key && step*i<n)
	{
		if(a[step]==key)
		{
			c++;
			return c;
		}
		else if(a[step*i]<key)
		{
			c++;
			end=step*(i+1);
			start=step;

		}
		i++;
	}
	while(start<=end)
	{
		if(a[start]==key)
			{
				c++;
				return c;}
		start++;
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
		//cout<<"Enter the positive integers in a sorted order into the array:";
		int arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		//cout<<"Enter the key element to be searched:";
		cin>>key;	//element to be searched
		
		ans=jump_search(arr,key,sqrt(n));
		if(ans==-1)
			cout<<"Not Present "<<c<<endl;
		else
			cout<<"Present "<<ans<<endl;
	}
return 0;
}
