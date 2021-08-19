#include<iostream>
using namespace std;

void insertionsort(int a[],int n)
{ 
  int temp,j,i;
    for(i=1;i<n;i++)
    {
        temp=a[i];
      j=i-1;
      while(j>=0 && a[j]>temp)
      {
          a[j+1]=a[j];
          j--;
          
      }
      a[j+1]=temp;
    }

    
    for(i=0;i<n;i++){
      if(a[i]==a[i+1]){
        cout<<"YES"<<endl;
        break;}
    }
    if(i==n)
      cout<<"NO"<<endl;
}

int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
      int n;
       cin>>n;
      int a[n];
    for(int i=0;i<n;i++)
            cin>>a[i];

    insertionsort(a,n);
    }


return 0;
}
