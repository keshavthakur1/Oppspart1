#include <iostream>
#include <cstring> // You need to include the cstring header for strcpy
using namespace std;

class Hero {
private:
    int health;

public:
    char *name;
    char level;

    Hero() {
        cout << "simple constructor called" << endl;
        name = new char[100];
    }

    Hero(int h) {
        this->health = h;
    }

    Hero(int h, char l) {
        this->health = h;
        this->level = l;
    }

    char getLevel() {
        return level;
    }

    int getHealth() {
        return health;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void setName(const char name[]) { // Use const char[] to avoid modifying input
        strcpy(this->name, name);
    }

     ~Hero(){  //constructor ka ulta tilda laga de (~)

        cout<<"Distructors called"<<endl;

     }
};

int main (){

//satic  
Hero a;

//Dynamic
Hero *b =new Hero();

//manually distructor create karna parega
delete b;
return 0;
}

