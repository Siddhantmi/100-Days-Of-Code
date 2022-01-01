#include<bits/stdc++.h>
using namespace std;

int main(){
  
        int n, k;
        cin>>n>>k;
        
        int arr[100];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        if(arr[0]==0){
            cout<<0<<endl;
           return 0;
        }


        int count=k;
       

        for( int i=k-1; i<n; i++){
            if(arr[i]==arr[i+1]){
                count++;
            }else{
                cout<<count<<endl;
                break;
            } 
        }
       
       
 }