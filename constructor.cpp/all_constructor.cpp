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
};

int main(){
    Student s1; // Default constructor
    Student s2("John Doe", "12345", 'A', 85, 90, 88, 92, 95); // Parametrized constructor

   
    return 0;
}