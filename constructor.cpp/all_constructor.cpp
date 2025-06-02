#include <iostream>
using namespace std;
// Q1. Write a C++ Program to create a Class Student with default and parametrized constructor?
 
// name
// enroll
// section
// physics_marks
//  math_marks
//  chemistry_marks
//  english_marks
//  hindi_marks

class Student{
    string name;
    string enroll;
    char section; //int section we using char as it is more efficient to use single character in comparison to string.
    int physics_marks;
    int math_marks;
    int chemistry_marks;
    int english_marks;
    int hindi_marks;
    
public:
    // Default constructor
    Student(){
        cout << "Default constructor called" << endl;
    };
    // Parametrized constructor
    Student(string n, string e, char s, int p, int m, int c, int en, int hi){
        name = n;
        enroll = e;
        section = s;
        physics_marks = p;
        math_marks = m;
        chemistry_marks = c;
        english_marks = en;
        hindi_marks = hi;
        cout << "Parametrized constructor called with values: " << name << ", " << enroll << ", " << section << ", " << physics_marks << ", " << math_marks << ", " << chemistry_marks << ", " << english_marks << ", " << hindi_marks << endl;
    };
    

    // Destructor
    // these are the following rules for destructor:
    // 1. The name of the destructor is the same as the class name prefixed with a tilde (~).
    // 2. It does not have any parameters.
    // 3. It does not take any arguments.
    // 4. The destructor is automatically called when an object goes out of scope.
    // 5. It is useful for releasing resources or performing any necessary cleanup before the object is destroyed.

    ~Student(){
        cout << "Destructor called" << endl;
    };
    // here the total number of times the destructor is called is equal to the number of objects created.
    //  This is known as the "destructor's lifespan" rule.
    //  object is create four  times and then destroyed four times.
    // when we create the object then some memory is allocated
    //  for the object and when we destroy the object then that memory is deallocated. this is the work of destructor.

};

int main(){
    Student s1; // Default constructor
    Student s8; // Default constructor called
    // here we are taking input values for the object s2
    int physics_marks, math_marks, chemistry_marks, english_marks, hindi_marks;
    cout << "Enter physics marks: ";
    cin >> physics_marks;
    cout << "Enter math marks: ";
    cin >> math_marks;
    cout << "Enter chemistry marks: ";
    cin >> chemistry_marks;
    cout << "Enter english marks: ";
    cin >> english_marks;
    cout << "Enter hindi marks: ";
    cin >> hindi_marks;
    Student s2("John Doe", "12345", 'A', physics_marks, math_marks, chemistry_marks, english_marks, hindi_marks); // Parametrized constructor
    Student s3("John Doe", "12345", 'A', 85, 90, 88, 92, 95); // Parametrized constructor

    

   
    return 0;
}