#include<iostream>
 using namespace std ;

 class hero {

     public :
     int health ;//properties
     
     char level ;
     
     hero (){
         cout << " simple  constuctor called"<< endl;
     }
     //paramitarised constuctor 
     hero(int health , char level){
         this -> health =health;
         this -> level =level ;

     }
     
    //  hero ( char level ){
    //      this -> level =level ;
    //  }


     int getHealth(){
         return health;
     }
 };





int main () {


    //  hero suresh(430 , 'C');
    //  hero R (suresh );

    // hero ramesh;
    // hero *h =new hero;



    /*
   hero ram ;// creation of object
   //cout<<"size "<< sizeof(ram)<< endl;
  // ram.health = 34;
//ram.level= 'A';//
  // cout << "health is "<< ram.health<< endl;
 //  cout << "level is "<< ram.level<< endl;
  // cout <<" size "<< sizeof(ram)<< endl ;
  // dynamacally
  hero *sham =new hero ;
  cout << " health is "<< (*sham).getHealth()<< endl;*/


    
    return 0 ;
}