#include<iostream>
using namespace std;

int binary_left(int a[],int n, int key,int l, int r)
{
    while(l<=r){
    int mid=l+(r-l)/2;
    //cout<<"midl="<<mid<<endl;
    if(a[mid]==key && a[mid-1]==key)
        return binary_left(a,n,key,l,mid-1);
    else if(a[mid]==key && a[mid-1]!=key)
        return mid;
    else if(a[mid]<key)
        return binary_left(a,n,key,mid+1,r);
    else if(a[mid]>key)
        return binary_left(a,n,key,l,mid-1);
    }
    return -1;
}
int binary_right(int a[],int n, int key, int l, int r)
{
     while(l<=r){
    int mid=l+(r-l)/2;
    //cout<<"midr="<<mid<<endl;
    if(a[mid]==key && a[mid+1]==key)
        return binary_right(a,n,key,mid+1,r);
    else if(a[mid]==key && a[mid+1]!=key)
        return mid;
    else if(a[mid]<key)
        return binary_right(a,n,key,mid+1,r);
    else if(a[mid]>key)
        return binary_right(a,n,key,l,mid-1);
    }
    return -1;
}


int main()
{
    int n,key,count=0,t;
    cin>>t;
    for(int j=0;j<t;j++){
   // cout<<"Enter the size of the array:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    //cout<<"Enter the key element to be searched:";
    cin>>key;
    int left=binary_left(a,n,key,0,n-1);
    int right=binary_right(a,n,key,0,n-1);
    count=(right-left)+1;
    if(count<=0)
        cout<<"Key not present"<<endl;
    else
        cout<<key<<" - "<<count<<endl;
    }
    return 0;
}
