//first and last position 
#include<bits/stdc++.h>
 using namespace std ;

 int first ( int arr[10],int n,int key){

    int s =0;
    int e = n-1 ;
    int mid =s+(e-s)/2 ;
    int ans = 0;

    while ( s<=e)
    {
        if ( arr [mid] == key){

            ans = mid ;
            e =mid-1;
             
        }
        else if ( key> arr[mid]){

            s = mid + 1;
        }
        else if (key < arr[mid])
        {
        
             e = mid -1;
        }
        mid =s+(e-s)/2;
    }
    return ans ;
    


 }
 
  int last ( int arr[],int n,int key){

    int s =0;
    int e = n-1 ;
    int mid =s+(e-s)/2 ;
    int ans = 0;

    while ( s<=e)
    {
        if ( arr [mid] == key){

            ans = mid ;
            s = mid +  1 ;
             
        }
        if ( key> arr[mid]){

            s = mid + 1;
        }
        else if (key < arr[mid]){
        
             e = mid -1;
        }
        mid =s+(e-s)/2;
    }
    return ans ;
    


 }
 
 

int main () {
    
    int even [10] = { 2,4,4,4,4,4,4,4,6,10};
    cout<< " first occurence of 4 is "<< first( even ,10,4) << endl ;
    cout<< " last occurence of 4 is "<< last ( even ,10,4) << endl ;

    
    
    return 0 ;
}
// done 