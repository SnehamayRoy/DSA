#include<iostream>
 using namespace std ;

/*int main () {
    char name [100];
    cout<<" Enter your name :";
    cin.getline(name ,100);
    cout << "Your namr is :"<< name<<endl;
    return 0 ;
}*/
int main () {
    char name [100];
    cout<<" Enter your name :";
    cin.getline(name ,100,'a');
    cout << "Your namr is :"<< name<<endl;
    return 0 ;
}
//cin.getline print except new line 
//