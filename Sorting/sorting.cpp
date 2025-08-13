// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void selection_sort(int arr[] ,int n){
    for(int i=0;i<=n-2;i++){
       int  min=i;
        for(int j=i+1;j<=n-1;j++){
            if(arr[j]<arr[min]){
            min=j;
        }
    }
    int temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
    }
}
void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        int swap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                swap=1;
            }
        }
        if(swap==0){
            break;
        }
    }
    cout<<"runs"<<endl;
}
void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int key=arr[i];
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main() {
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
insertion_sort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i];
}
    return 0;
}