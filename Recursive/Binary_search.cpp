#include<iostream>
using namespace std;
int bSearch( int arr [],int low, int high, int x){
    if(low<= high)
    return -1;
    int mid= (low+high)/2;
    if (arr[mid]==x)
    {
        return mid;
    }
    else if(arr[mid] >x){
    return bSearch(arr,low, mid-1, x);}
    else{
    return bSearch(arr,high, mid+1, x);}
}
int main(void){
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int x = 7;
   int n = sizeof(arr)/sizeof(arr[0]);
   int idx = bSearch(arr,0,n-1,x);
   if(idx==-1){
    cout<<"Element is not present in array";}
    else{
        cout<<"Element is present at index "<<idx;}
}