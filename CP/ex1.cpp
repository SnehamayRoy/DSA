#include<bits/stdc++.h>

using namespace std;
int main()
{     int n,x=1,count=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=x;
            x++;}
        for(int i=0;i<n;i++){
            cout<<arr[i];
        }    
}