

#include <iostream>
using namespace std;

class Hero {
private:
    int health;

public:
    char level;

   Hero (){
    cout<<"Simple constructor called"<<endl;

   }
    
    //paramerterise constructor 

  

     Hero (int health, int level){
        this ->health =health;
        this ->level =level;


     }

    ///  copy constructor 
    Hero(Hero& temp){
        cout<<"copy constructor called"<<endl;
        
         this ->health =temp.health;
        this ->level =temp.level;
    }

    void print() {
        cout << level << endl;
    }

    void setHealth(int h) {
        health = h;
    }

    int getHealth() {
        return health;
    }
};

int main(){
    Hero S(70,'c');
    S.print();

    //copy constructor
    Hero R(S);
    R.print();


}
