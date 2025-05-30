// A constructor is a special member function of a class that is automatically called when an object of that class is created.
//  It is used to initialize the object's data members and allocate resources if necessary.
// Constructors have the same name as the class and do not have a return type, not even void.
// rules for constructors:
// 1. A constructor must have the same name as the class.
// 2. A constructor does not have a return type, not even void.
// 3. A constructor is automatically called when an object of the class is created.
// 4. if we not define a constructor in the class, the compiler provides a default constructor.
// 5. There are three types of constructors:
//    a. Default constructor: A constructor that does not take any parameters.
// the structure of a constructor in C++ is as follows:
// class ClassName {
// public:
//     ClassName(); // Default constructor
//    b. Parameterized constructor: A constructor that takes parameters to initialize the object's data members.
// the structure of a parameterized constructor in C++ is as follows:
// class ClassName {
// public:
//     ClassName(int param1, int param2); // Parameterized constructor
//    This constructor takes two parameters to initialize the object's data members.

//    c. Copy constructor: A constructor that creates a new object as a copy of an existing object.
// 6. A class can have multiple constructors, each with different parameters (constructor overloading).
// 7. constructor cannot be static, virtual, or friend.
// 8. constructor cannot be override 

#include <iostream>
using namespace std;
class point{
public:    
    int x, y; // data members
public:
int value(){
    cout<<x<<endl; // This will print the value of x
    cout<<y<<endl; // This will print the value of y
    return x + y; // This function returns the sum of x and y
}

    // Default Constructor
    point( ) { // This constructor does not take any parameters 
        // It initializes the data members to default values
    
        cout << "Default constructor called: (" << x << ", " << y << ")" << endl;
        cout<< "This is a default constructor" << endl;
        cout<<x+y<<endl; // This will print the sum of x and y
    }
    void display() { // Member function to display the point
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
    // Parameterized constructor
    point(int a, int b) { // This constructor takes two parameters to initialize the object's data members
        x = a; // Using 'this' pointer to refer to the current object's data member
        y = b; // Using 'this' pointer to refer to the current object's data member
        cout << "Parameterized constructor called: (" << x << ", " << y << ")" << endl;
    }
    // Copy constructor
    point(const point &p) { // This constructor takes a reference to another object of the same class
        x = p.x; // Copying the value of x from the passed object
        y = p.y; // Copying the value of y from the passed object
        cout << "Copy constructor called: (" << x << ", " << y << ")" << endl;
    }

};
int main(){
    point p; // Creating an object of the class point
    int x = 10; // Initializing x
    int y = 20; // Initializing y
    p.x = x; // Assigning value to x
    p.y = y; // Assigning value to y
    p.display(); // Calling the display function to show the point
    cout << "Sum of x and y: " << p.value() << endl; // Calling the value function to get the sum of x and y
  
    return 0;
}