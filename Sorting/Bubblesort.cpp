#include<iostream>
#include<vector>
using namespace std;


void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        //iterating on passes
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
 
    int n;
    cin>>n;
    int arr[n]; 
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
     bubblesort(arr,n);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
  
             
return 0;
}


