#include<iostream>
using namespace std;


class Hero
{
private:
    int health;

public:
    char level;
    

    //chalo constructure bante hai 

    Hero (){
        cout<<"constructor called"<<endl;

    }
    void print()
    {
        cout << level << endl;
    }

    void setHealth(int h)
    {
        health = h;
    }

    int getHealth()
    {
        return health;
    }
};

int main(){


     // object creation statically 
   
     Hero ramesh; //hero ramesh name ka object cresate kr lekin behind the scence kiya horata compiler kiya kr , jab aap koi bhi object ko create kar rahe h BTS scence constructure create hua hoga 
     

     // object creation using dynamically;
     Hero *h =new Hero();
     //kuch propeerties of construre 
     // no return type 
     //object creation  ke time per invoke hoga 
     //No i/p paramater 
cout<<"HI"<<endl;

cout<<"hello"<<endl;
//output we first Hi 
//then hello 
return 0;

}
