//Day-1
//SOLUTION 1 : 
#include <bits/stdc++.h>
using namespace std;

 int main(){
    
     int t;
     cin>>t;
     
     while(t--){
    string A ;
    cin>>A;
     
     int Size = A.size();
     int SS= Size-2;
    
      if( Size > 10){
           cout<<A[0]<<SS<<A[A.size()-1]<<endl;
     }else{
        cout<<A<<endl;
     }
         
     }
 }

 //SOLUTION 2 :
 #include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string str;
        cin>>str;

        if(str.size()%2!=0){
            cout<<"NO"<<endl;
        }else{
            int halfString = str.size()/2;
            int count = 0;
           
            for(int i=0;i<halfString;i++){
                if(str[i]==str[halfString + i]){
                      count++;    
                }
            }

          if(count == halfString ){
              cout<<"YES"<<endl;
          }else{
               cout<<"NO"<<endl;
          }
             
        }
    }
}

//SOLUTION 3 :
#include <bits/stdc++.h>
 
using namespace std;
 
#define forn(i, n) for (int i = 0; i < int(n); i++)
 
int main() {
    int t;
    cin >> t;
    forn(tt, t) {
        int n;
        cin >> n;
        set<int> a;
        for (int i = 1; i * i <= n; i++)
            a.insert(i * i);
        for (int i = 1; i * i * i <= n; i++)
            a.insert(i * i * i);
        cout << a.size() << endl;
    }
}

//Day 2
//solution-1
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

int count=0;
int A , B, C;
    while(t--){
        
        cin>>A>>B>>C;

    int sum = A+B+C;

    if(sum>=2){
        count++;
    }
       
    }

cout<<count<<endl;
}

//solution-2
    #include<iostream>
    using namespace std;
    int n,k,i,j,a[51];
    int main()
    {
    cin>>n>>k;
    while(n>i)
        cin>>a[i++];
    while(a[j]&&a[j]>=a[k-1])
        j++;
    cout<<j;
    }