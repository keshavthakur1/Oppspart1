// gettter setter koi bari chij nahi bas ye koi data member class ke private ho aur meras mn kre ushe acess kare toh kre using getter setter 
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
    Hero ramesh;

    ramesh.setHealth(5);
    ramesh.level = 'A';

    // Access health using the getHealth method
    cout << "health is: " << ramesh.getHealth() << endl;
    cout << "level is: " << ramesh.level << endl;

    return 0;
}
