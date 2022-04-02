#include<iostream>
#include <vector>
 using namespace std ;

int main () {
    vector <int>v;


    vector<int> a(5,1);// for size build on your own 
    for(int i :a){
        cout <<i<< " ";
    }cout << endl ;
    cout << " size"<< v.capacity ()<< endl;
    v.push_back(1);
    cout << " size"<< v.capacity ()<< endl;
    v.push_back(3);
     cout << " size"<< v.capacity ()<< endl;
     cout << " front"<< v.front()<<endl;
     cout << v.at(0);

     //pop back and after pop importantv
     // time complexcity bug o of 1 OR  O(1)




    
    return 0 ;
}