#include<iostream>
using namespace std;



//HOW TO CREATE CLASS AND OBJECT 
class Hero {    // ye maine hero type ki class bana di hai 

//ek class banaya jishki kuch properties hai (isi ko Data Members bhi kaha jata h:-The variables which are declared inany class by using any fundamental data types (like int, char, float, etc.) or derived data types (like class, structure, pointer, etc.) are known as Data Members)
char name[100];   //bhai hero ka toh kuch name hoga isliye maine 100 char me name likh diya 

int health;
char level;

};

int main()
{
  //class banane ke bad ham object bhi banyege na 
    Hero h1;  //jish name ka classs rahega ushi name object bhi hoona chaiye 
    cout << "size: " << sizeof(h1) << endl;
}
// Twisted  Output
/*why i am getting size of h1 is 108   but according me size of h1 is 105(100 for name +4 for interger , +1 for char level 


The size of an object in C++ is influenced by factors such as memory alignment and padding. When you create a class, the compiler often adds padding to align data members in memory to improve access speed. This padding ensures that the data members are aligned according to the system's architecture, which can sometimes lead to a larger size than expected.

In your case, you are getting a size of 108 bytes instead of the expected 105 bytes because of padding added by the compiler for memory alignment.

For example, let's consider the data members:

char name[100] (100 bytes)
int health (4 bytes)
char level (1 byte)
Due to alignment requirements, the compiler might add 3 bytes of padding after the char level member to ensure proper alignment for the int member that follows. This would result in a total of 108 bytes for the object's size.

If you want to avoid padding and ensure that the size of the object matches your calculation, you can use compiler-specific features to control memory alignment and packing, but this might not be very portable across different systems and compilers.

Remember that the actual size of objects can vary depending on the compiler, the architecture, and the compiler settings. It's important to be aware of these considerations when working with memory allocation and data structures.


Why do we need object-oriented programming?
 ❖To make the development and maintenance of projects more effortless.
  ❖To provide the feature of data hiding that is good for security concerns.
  ❖We can solve real-world problems if we are using object-oriented programming.
  ❖It ensures code reusability.
   ❖It lets us write generic code: which will work with a range of data, so we don't have to write basic stuff over and over again.

*/
