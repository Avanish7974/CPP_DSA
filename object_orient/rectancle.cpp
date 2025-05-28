#include <iostream>
using namespace std;
// the default access specifier for class members is private, so we need to explicitly declare them as public
//  if we want to access them outside the class.
class Rectangle{
    public: // Change access specifier to public to allow access from outside the class
    int length, breadth; // Member variables to store dimensions of the rectangle
    void getData(){ // Method to get dimensions from user
        cout << "Enter length: ";
        cin >> length; // Input for length
        cout << "Enter breadth: ";
        cin >> breadth; // Input for breadth
    }
    void diaplay(){
        cout<<"Length: " << length << endl; // Display length
        cout<<"Breadth: " << breadth << endl; // Display breadth
    }
    void area(){
        cout << "Area: " << length * breadth << endl; // Calculate and display area

    }

};
int main(){
    Rectangle r; // Create an instance of Rectangle
    // Accessing the methods of Rectangle class
    // Since the methods are private, we need to make them public in the class definition
    // or use a public method to access them

    r.getData(); // Call method to get dimensions
    r.diaplay(); // Call method to display dimensions
    r.area(); // Call area method to display area

    return 0;
}