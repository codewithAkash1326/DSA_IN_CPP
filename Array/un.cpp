#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>ans(n);
    int k=0;
             
   for(int i=0;i<n;i++){
     if (v[i]!=0){
        ans[k++]=v[i];
     }

   }

   for(int i=0;i<n;i++){
     if(v[i]==0){
      ans[k++]=0;
     }
   }


for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
}

             
return 0;
}