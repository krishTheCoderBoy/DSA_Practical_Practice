#include<iostream>
using namespace std;
void iSort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        iSort(arr,n);
        cout<<"The sorted array is : ";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";

        }
        return 0;
}