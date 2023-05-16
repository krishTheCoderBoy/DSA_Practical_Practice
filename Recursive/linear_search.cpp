#include <iostream>
using namespace std;
 int linear_search(int arr[], int x, int size){
    size --;
    if(size< 0){
     return -1;}
     else if (arr[size]== x){
     return 1;}
     else{
     return linear_search(arr, x,size);
     }
 }
 int main(){
    int size;
    cin>>size;
    int arr[size], x, i;
    for(i=0;i<size; i++){
        cout <<"Enter"<<i<<"element :";
        cin>>arr[i];
    }
    for(i=0;i<size; i++){
        cout<<arr[i]<<endl;
    }
    cout<<"enter the no to be searched";
    cin>>x;
    int result;
    result=linear_search(arr, x,size--);
    if(result==1){
    cout<<"element found";
    }
    else{     cout<<"element not found";}
    return 0;
 }