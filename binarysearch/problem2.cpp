#include<bits/stdc++.h>
 using namespace std ;

  
    int peakIndexInMountainArray(int arr[], int n ) {
        int s=0;
        int e =n -1;
        int mid = s + (e-s)/2 ;
        while(s<e)
        {
            if(arr[mid] < arr[mid + 1]){
                s = mid +1;
            }
            else {
                e= mid;
            }
            mid = s+ (e-s)/2;      
    }
        return s; 
    }


int main(){
    int arr[4]={1,2,5,1};
    int n =4;
    cout<< peakIndexInMountainArray(arr,n);
    return 0;
}