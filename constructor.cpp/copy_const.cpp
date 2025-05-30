#include <iostream>
using namespace std;
class Point {
    int x, y; // Data members
public:
// copy constructor
    Point(const Point &p) { // This constructor takes a reference to another object of the same class
        x = p.x; // Copying the value of x from the passed object
        y = p.y; // Copying the value of y from the passed object
        cout << "Copy constructor called: (" << x << ", " << y << ")" << endl;
    }
    void display() { // Member function to display the point
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};
int main(){

   
    return 0;
}