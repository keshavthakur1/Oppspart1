
//paramertize constructor mean aise constructor kuch paramer hoge 



#include <iostream>
using namespace std;

class Hero {
private:
    int health;

public:
    char level;


    // paramertised constructor banate hai aapun 
    Hero (int health){
       // health =health; // ye thora anocha nahi lag raha , matlab ushi chij me ushi chijh ko dal diya gajab 
        // yahi concdept ko created karne ke liye this ketyword aaya hai 

        //jab esh papakar ki suition aa jati hai jab input parameter bhi wahi hai aur data member bhi wahi hai 

        // isliye hamlog this keyword ko padhte h 
        //jo bhi current object hota wo this keyword me strore hota 

        cout<<"this ->"<<this<<endl;
     }
     

     Hero (int health, int level){
        this ->health =health;
        this ->level =level;


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

int main() {

 // Creating objects using parameterized constructors
    Hero ramesh(10);
    ramesh.print(); // Print Level: (random value), Health: 10

    // Dynamically allocating object using parameterized constructor
    Hero *h = new Hero(11);

    // Creating an object using two parameters
    Hero temp(22, 'B');
    temp.print(); // Print Level: B, Health: 22

    // Don't forget to delete the dynamically allocated object
    delete h;

    return 0;
}
