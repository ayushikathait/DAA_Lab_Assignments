#include<iostream>
using namespace std;

int n;	//n is defined as global variable so that it isn't needed to be passes as an argument in the function

int search(int a[],int key)
{
	int position=-1,i;
	for(i=0;i<n;i++)
		if(a[i]==key)
			return i+1;
	return position;
}

int main()
{
	int key,i,ans,t;
	//cout<<"Enter the number of test cases:";
	cin>>t;	//number of test cases
	while(t--)
	{
		//cout<<"Enter the size of the array:";
		cin>>n;		//size of each array
		//cout<<"Enter the non-negative integers in a sorted order into the array:"; // zero can also be included in the array
		int arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		//cout<<"Enter the key element to be searched:";
		cin>>key;	//element to be searched
		ans=search(arr,key);
		if(ans==-1)
			cout<<"Not Present "<<n<<endl;
		else
			cout<<"Present "<<ans<<endl;
	}
return 0;
}
