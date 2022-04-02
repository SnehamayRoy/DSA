#include<iostream>
 using namespace std ;
 #include<list >

int main () {
    list <int>l;
    l.push_back(1);//pop back/pop_front
    l.push_back(2);
    list <int> n ;
    l.erase(l.begin());
    cout << "after erase "<< endl ;
    for ( int i:l){
        cout <<i <<  "  ";
    }




    
    return 0 ;
}