#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){
    int min_index, j;
    for(int i = 0; i < n; i++){
         min_index=i;
        for( j = i+1; j < n; j++){
            if (arr[j]<arr[min_index]){
                min_index = j;
            } 
            }
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
            //swap(arr[min_index], arr[i]);
            }
}
int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elemnts :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
    cout<<"The sorted array is : ";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";

        }
    return 0;
}