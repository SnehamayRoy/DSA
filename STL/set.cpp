#include<iostream>
#include<set>
 using namespace std ;

int main () {
    set<int>s;

    s.insert(5);
    s.insert (3);
    s.insert (3);
    s.insert(4);

    for (auto i: s){
        cout <<i<< endl;

    }cout << endl;   // print in sorted order 
 // count function 

    cout << "count "<< s.count(3)<<endl;
    set <int> :: iterator it =s.find(5);
    
    
    return 0 ;
}