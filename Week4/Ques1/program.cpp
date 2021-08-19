#include<bits/stdc++.h>
using namespace std;

int c=0; // count for comparisons

void Merge(int A[], int low, int mid, int high){
    int i = low;
    int j = mid+1;
    int k = low;
    int B[high+1];
    while (i <= mid && j <= high){
        if (A[i] < A[j]){
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
        c++;
    }
    while (i <= mid){
        B[k++] = A[i++];
    }
    while (j <= high){
        B[k++] = A[j++];
    }
    for (i=low; i<=high; i++){
        A[i] = B[i];

    }

}

void MergeSort(int A[],int l,int h)
{
 int mid;
 if(l<h)
 {
 mid=(l+h)/2;
 MergeSort(A,l,mid);
 MergeSort(A,mid+1,h);
 Merge(A,l,mid,h);

 }
}

int incount(int a[], int n) // function to count inversions
{
    int countt=0,i,j;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(a[i]>a[j])
            countt++;
    return countt;
}

int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
      int n,inversion;
       cin>>n;
      int a[n],i;
      for(i=0;i<n;i++)
            cin>>a[i];
     inversion = incount(a,n);
     MergeSort(a,0,n-1);


 for(i=0;i<n;i++)
 {
     cout<<a[i]<<" ";
 }

 cout<<endl<<"comparisons = "<<c<<endl;
 cout<<"inversions = "<<inversion<<endl;

 }
    return 0;
}
