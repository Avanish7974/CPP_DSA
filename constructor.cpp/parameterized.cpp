#include <iostream>
using namespace std;
class Point {
    int x, y; // Data members
public:
    // Default constructor
    // Point( ) { // This constructor does not take any parameters 
    //     // It initializes the data members to default values
    
    //     cout << "Default constructor called: (" << x << ", " << y << ")" << endl;
    //     cout<< "This is a default constructor" << endl;
    //     cout<<x+y<<endl; // This will print the sum of x and y
    // }
    // Parameterized constructor
    // this a and b are the formal parameters of the constructor
    Point(int a, int b) { // This constructor takes two parameters to initialize the object's data members
        x = a; // Using 'this' pointer to refer to the current object's data member
        y = b; // Using 'this' pointer to refer to the current object's data member
        cout << "Parameterized constructor called: (" << x << ", " << y << ")" << endl;

    }
    // parametrized constructor
    Point(int a, int b){
        // Using 'this' pointer to refer to the current object's data member
        this->x = a;
        this->y = b;
        cout << "Parameterized constructor called: (" << x << ", " << y << ")" << endl;
        

    }
    // Copy constructor
    
};
int main(){
    int a = 10; // Initializing a
    int b = 20; // Initializing b
    // a and b are the actual parameters passed to the constructor
    Point p(a, b); // Creating an object of the class Point using the parameterized constructor
    // The parameterized constructor is called with a and b as arguments
    
    
   
    return 0;
}