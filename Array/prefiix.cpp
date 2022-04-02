#include<iostream>
 using namespace std ;
 void printprefix(char str[]){
     for (int e=0; str [e] !='\0';e++){
         for(int s=0;s<=e;s++){
             cout<<str[s];
         }
         cout << endl;
     }
    
 }

int main () {
    char str[]="abcd";
    printprefix(str);
    
    return 0 ;
}