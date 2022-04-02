#include<iostream>
#include<cstring>
 using namespace std ;

// int main () {
//     char name [100];
//     cin>>name;
//     int len = strlen(name);
//     cout<<len<<endl;
    
//     return 0 ;
// }

int main(){  
    char n1[100];
    char n2[100];
    cin >> n1>>n2;
    if (strcmp(n1 , n2) ==0)
    {
        cout<<"Equal"<<endl;

    }else{
        cout <<" Not Equal";


    }

    return 0;

}
// srtcpy
//strnncpy
//strcat