#include <iostream>
using namespace std;
class rectangel{
    public:
    int length, breadth; // Member variables to store dimensions of the rectangle
    void getData();
    void display();
    void area();
    void perimeter();
};
// return type class name :: method name(){}
void rectangel::getData() {
    cout << "Enter length: ";
    cin >> length; // Input for length
    cout << "Enter breadth: ";
    cin >> breadth; // Input for breadth
}
void rectangel::display() {
    cout << "Length: " << length << endl; // Display length
    cout << "Breadth: " << breadth << endl; // Display breadth
}
void rectangel::area() {
    cout << "Area: " << length * breadth << endl; // Calculate and display area
}
void rectangel::perimeter() {
    cout << "Perimeter: " << 2 * (length + breadth) << endl; // Calculate and display perimeter
}

int main(){
    rectangel r;
    r.getData(); // Call method to get dimensions
    r.display();
    r.area();
    r.perimeter(); // Call perimeter method to display perimeter
   
    return 0;
}