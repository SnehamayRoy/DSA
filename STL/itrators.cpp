#include<bits/stdc++.h>
 using namespace std ;

int main () {
    vector <int >v={2,3,5,6,7};
    for (int i=0;i<v.size();i++){
        cout << v[i]<<" ";
    }cout <<endl;
    vector <int>::iterator it = v.begin();
    cout << (*(it+2))<<endl;
    for( it =v.begin() ; it !=v.end(); it++){
        cout<<(*it)<< "  ";
    }


    
    return 0 ;
}




// iterators are used to acess or change of containers
//they are like pointers
// it's like index , data stucture like set , map ,graph etc here index can't be used
// so we use iterators instead of that  
