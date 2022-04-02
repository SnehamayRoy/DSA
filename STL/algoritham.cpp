#include<iostream>
#include<algorithm>
#include<vector>
 using namespace std ;

int main () {

    vector<int>v;
    v.push_back(2);
    v.push_back(12);
    v.push_back(4);
    v.push_back(7);
    cout << binary_search( v.begin(),v.end(), 5);
    cout << endl;

    string s ="abcd ";
    reverse (s.begin(), s.end());
    cout <<s<< endl;

    sort (v.begin(),v.end());
    for( int i:v){
        cout <<i<< endl;
        
    }







    
    return 0 ;
}