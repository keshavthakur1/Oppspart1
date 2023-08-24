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

    void print() {
        cout << "Name: " << name << ", Level: " << level << ", Health: " << health << endl;
    }
};

int main() {
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');

    char name[7] = "Babbar";
    hero1.setName(name);

    hero1.print(); // Print the hero's information

    delete[] hero1.name; // Deallocate dynamically allocated memory

    return 0;
}
