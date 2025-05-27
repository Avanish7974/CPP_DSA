#include <iostream>
using namespace std;
class MyClass {
    public: // Public access specifier allows members to be accessible outside the class
        int n1, n2; // Member variables
        void display(){
            cout<<"Enter the value of n1: ";
            cin>>n1; // Initializing member variable n1
            cout<<"Enter the value of n2: ";
            cin>>n2; // Initializing member variable n2

        }
        void show(){
            cout << "n1: " << n1 << endl; // Accessing and printing member variable n1
            cout << "n2: " << n2 << endl; // Accessing and printing member variable n2
        }
        void add(){
            cout << "Sum: " << n1 + n2 << endl; // Displaying the sum of n1 and n2
        }
        void subtract(){
            cout << "Difference: " << n1 - n2 << endl; // Displaying the difference of n1 and n2
        }
        void multiply(){
            cout << "Product: " << n1 * n2 << endl; // Displaying the product of n1 and n2
        }
        
};
int main(){
    MyClass obj; // Creating an object of MyClass
    obj.display(); // Calling the display method to initialize member variables
    obj.show(); // Calling the show method to display member variables


   
  
    return 0;
}