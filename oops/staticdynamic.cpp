#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

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

int main()
{
    // static allocation
    Hero a;
    a.setHealth(80); // Set health to 80
    a.level = 'B';   // Set level to 'B'

    cout << "level is " << a.level << endl;
    cout << "health is " << a.getHealth() << endl;

    // dynamic allocation
    Hero *b = new Hero;
    b->setHealth(700); // Set health to 700
    b->level = 'A';    // Set level to 'A'
    
    cout << "level is " << b->level << endl;
    cout << "health is " << b->getHealth() << endl;

    delete b;  // Don't forget to free the dynamically allocated memory

    return 0;
}
