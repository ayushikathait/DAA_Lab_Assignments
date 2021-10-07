#include <iostream>
using namespace std;

int c=0, s=0;

void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int pivot(int arr[], int st, int en){
    srand(time(0));
    int pivot_index = st + rand()%(en-st);
    swap(arr+pivot_index, arr+en);
    int pos=st, i;
    for(i=st; i<en; ++i){
        ++c;
        if(arr[i]<=arr[en]){
            swap(arr+i, arr+pos);
            ++s;
            ++pos;
        }
    }
    swap(arr+pos, arr+en);
    ++s;
    return pos;
}

void quick_sort(int arr[], int st, int en){
    if(st<en){
        int mid = pivot(arr, st, en);
        quick_sort(arr, st, mid-1);
        quick_sort(arr, mid+1, en);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        c=0, s=0;
        int n;
        cin >> n;
        int a[n], i;
        for(i=0; i<n; i++) cin >> a[i];
        quick_sort(a, 0, n-1);
        for(i=0; i<n; i++){
            cout << a[i] << ' ';
        }
        cout << "\nComparisons - " << c;
        cout << "\nSwaps - " << s << endl;
        
    }
    return 0;
}
