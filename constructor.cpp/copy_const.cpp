#include <iostream>
using namespace std;
// copy constructor with complete explaination in hindi
    class Point {
        int x, y; // Data members
        public:
        // Copy constructor
        Point(const Point &p) { // This constructor takes a reference to another object of the same class
            // here const is used to indicate that the function does not modify the object being copied.
            // point &p: A reference to the object being copied. This reference is passed as a parameter to the constructor.

            x = p.x; // Copying the value of x from the passed object
            y = p.y; // Copying the value of y from the passed object
            cout << "Copy constructor called: (" << x << ", " << y << ")" << endl;
        }
        void display() { // Member function to display the point
            cout << "Point: (" << x << ", " << y << ")" << endl;
        }
    };
    // main function to demonstrate the usage of copy constructor

int main(){
   
   
    return 0;
}