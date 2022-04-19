#include<bits/stdc++.h>
 using namespace std ;

//search in rotated sorted array

 int getpivot(int arr[],int n){
     int s =0;
     int e=n-1;
     int mid =s+(e-s)/2;
     while(s<e){
         if(arr[mid]>=arr[0])
         {
             s=mid+1;
         }
         else{
             e=mid;
         }
         mid =s+(e-s)/2;
     }
     return s;
 }

int binarysearch(int arr[],int s,int e,int key){
     int start = s;
     int end =e;
     int mid = (start+end)/2;// start+(end-start)/2

     while (start <=end)
     {
         if (arr[mid]==key){
             return mid;
         }
         if (key>arr[mid]){
             start=mid+1;

         }
         else {
             end =mid-1;
         }
         mid =(start+end )/2;

     }
     return -1;
     
 }


int main(){
   
   int n;
   cin>>n;
   int arr [n];
   for (int i = 0; i < n; i++)
  {
        cin>>arr[i];
    }
    int key ;
    cin>>key;
    int g= getpivot(arr,n);

    if (key>arr[g]&& key<arr[n-1]){
        cout<< binarysearch(arr ,g,n-1,key);
    }
    else{
       cout<< binarysearch(arr,0,g-1,key);
    }
    
   
    return 0;
}