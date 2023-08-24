#include <iostream>
#include <cstring> // You need to include the cstring header for strcpy
using namespace std;

class Hero {
private:
    int health;

public:
    char *name;
    char level;
     static int timeTocomplete;

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

int  Hero :: timeTocomplete =5 //(:: ishka naame hai scope resulation)
int main (){

cout<<Hero::timeTocomplete<<endl; //acessing best best way 

Hero a;
cout<<a.timeTocomplete<<endl; //dont acess this way 

Hero b;
b.timeTocomplete =10;
cout<<a.timeTocomplete<<endl;
cout<<b.timeTocomplete<endl;


return 0;
}

