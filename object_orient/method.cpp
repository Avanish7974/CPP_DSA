#include <iostream>
using namespace std;
// This code snippet demonstrates how to define a class in C++.
// A class is a collection of data members (variables) and member functions (methods) that operate on those data members.
// Classes are used to create objects, which are instances of the class.
// instances ka ++matlab hota hai ki class ke andar jo bhi members hain unko use karne ke liye hum objects ka use karte hain.
// iss program me humne ek class banayi hai jiska naam MyClass hai.
// Is class ke andar humne kuch member variables aur member functions define kiye hain.
// iss program me jo instance banayi gayi hai uska naam obj hai.


class MyClass {
    public: // Public access specifier allows members to be accessible outside the class
        int n1, n2; // Member variables (n1 and n2 are data members)
        // here n1 and n2 are our local variables, which are used to store integer values.

        // Member functions (methods) to perform operations on n1 and n2

        // the member function display() is used to initialize the member variables n1 and n2
        // The member function show() is used to display the values of n1 and n2
        // The member function add() is used to display the sum of n1 and n2

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
        void divide(){
            cout<< "Quotient: " << n1 / n2 << endl; // Displaying the quotient of n1 and n2
        }
        void modulus(){
            cout<< "Remainder: " << n1 % n2 << endl; // Displaying the remainder of n1 and n2
        }


};
int main(){
    MyClass obj; // Creating an object of MyClass
    obj.display(); // Calling the display method to initialize member variables
    obj.show(); // Calling the show method to display member variables
    obj.add(); // Calling the add method to display the sum of n1 and n2
    obj.subtract(); // Calling the subtract method to display the difference of n1 and n2
    obj.multiply(); // Calling the multiply method to display the product of n1 and n2
    obj.divide(); // Calling the divide method to display the quotient of n1 and n2
    obj.modulus(); // Calling the modulus method to display the remainder of n1 and n2


   
  
    return 0;
}