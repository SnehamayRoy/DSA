#include<iostream>
#include<stack>
 using namespace std ;

int main () {
    stack <string >s;

    s.push("love ");
    s.push( "babbar");
    cout << "top eliments -> "<< s.top()<< endl ;
    cout << "size of stack "<< s.size();
    
    return 0 ;
}