#include<bits/stdc++.h>
 using namespace std ;

int main ()
 {
  int t;
  cin>>t;
  while(t--){
      int n;
      
      cin>>n;
      int arr[n]; 
   for (int i = 0; i < n; i++)
  {
        cin>>arr[i];

    } 
    int ans = 0;
    sort(arr,arr+n);
     for (int i = 1; i < n; i++)
  {  
       ans =ans+(arr[i]-arr[0]);

       
      
  }
  cout<<ans<<endl;

  }
  return 0;
}
 