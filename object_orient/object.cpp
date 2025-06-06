#include <iostream>
using namespace std;
class MyClass {
    public: // Public access specifier allows members to be accessible outside the class
        int n1, n2; // Member variables
};
int main(){
    MyClass obj; // Creating an object of MyClass
    obj.n1 = 10; // Initializing member variable n1
    // obj.n2 = 20; // Initializing member variable n2
    cout << "n1: " << obj.n1 << endl; // Accessing and printing member variable n1
    cout << "n2: " << obj.n2 << endl; // Accessing and printing member variable n2
  
    return 0;
}