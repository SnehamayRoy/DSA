#include<iostream>
#include<map>
 using namespace std ;

int main () {
    map<int,string>m;

    m[1]="babar";
    m[2]="hello";
    m[3]=" baby";
    m.insert({5,"bheem"});
    for ( auto i : m){
        cout << i.first << endl;
    }
    for ( auto i : m){
        cout << i.second << endl;
    }

    
    return 0 ;
}