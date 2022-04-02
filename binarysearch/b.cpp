#include<iostream>
 using namespace std ;



 int binarysearch(int arr[],int size,int key){
     int start = 0;
     int end =size-1;
     
     while (start<=end)
     {
         int mid = (start+end)/2;
         if (arr[mid]==key){
             return mid;
         }
         if (key>arr[mid]){
             start=mid+1;
         }
         if(key<arr[mid]){
            end =mid-1;
         }
         //mid =(start+end )/2;

     }
     return -1;
     
 }

int main () {

    int even[6]={2,4,6,8,10,12};
    int odd[5]={3,5,7,9,11};
    int key;
    //int index = binarysearch(even,6,12);
    //cout<<"index of 12 is "<<index<< endl;
    cout<<"enter the even ele"<<endl;
    cin>>key;
    cout<<"the index is "<<binarysearch(even,6,key)<<endl;

    
    return 0 ;
}