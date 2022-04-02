#include<iostream>
#include<queue>
 using namespace std ;

int main () {
    
    queue<string > q;
    q.push("love ");
    q.push("love babar");
    cout << q.front ( )<<endl;

    return 0 ;
}  


// first in first out  complexcity o of 1 or O(1)