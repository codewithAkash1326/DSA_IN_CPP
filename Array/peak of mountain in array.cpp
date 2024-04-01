#include<iostream>
#include<vector>
using namespace std;
int peak(int arr[],int size){
    int s=0;
    int e = size-1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s = mid+1;
        }
        else if(arr[mid]>arr[mid+1]){
            e = mid;
        }
        mid = s +(e-s)/2;
        
    }
    return s;
}
 


int main(){

    int size; 
    cout<<"enter the size"<<endl;
    cin>>size;

    int arr[size];
    cout<<"enter array elements"<<endl;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
 
             
    cout<<peak(arr,size);
return 0;
}
