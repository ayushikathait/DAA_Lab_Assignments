#include<iostream>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,j;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        int key;
        cin>>key;
        int c=1,f=0;
        if(a[0]==key)
        {
            cout<<"Present "<<c<<endl;
            break;
        }
        int k = 1;
        while(k<n && a[k] <= key)
        {
            c++;
            k = k*2;
        }
        for(j=k/2;j<n;j++)
        {
            if(key == a[j])
            {
                c++;
                f=1;
                cout<<"Present "<<c<<endl;
                break;
            }
            else
                c++;
        }
        if(f==0)
            cout<<"Not Present "<<c<<endl;
    }
   	return 0;
}

