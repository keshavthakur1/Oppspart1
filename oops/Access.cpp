#include <iostream>
using namespace std;

class Hero
{
public:  //bina aaha class ke property ka public bina run kare ka kosish karbey ta error dhikat
//te karan sa first learn about acess modifier  
//public ka matlab ho che je aha public data member ko class ke bhar bhi acess ka sake chi aur under 
    // data member (perperty)
    int health;
    char level;

    // agar thora pass functiono cho na  okro tu acess ka sake cha 
    void print(){
        cout<<level<<endl;
        cout<<health  <<endl;

    }

};

int main()
{

    Hero ramesh;

    // isliye phale value set kr lete hai ,kise kare   using dot operator 
    ramesh.health=5;
    ramesh.level =70;
    //aab aha exact value get hat

// dot opertot je che okar help sa property ka acess ka sake chi 
    cout << "health is:" << ramesh.health << endl;
    cout<<"level is:" <<ramesh.level <<endl;
    //hame output  garbage value mile kiyu ki hamne kuch dala nahi tha 

    return 0;
};