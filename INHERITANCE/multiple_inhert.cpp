#include <iostream>
using namespace std;
// student program for multiple inheritance in C++
// now in this program we introduce parameterized constructor in all classes and make them run first even before default constructor
// the method to call parameterized constructor first in output is as follows:


class student{
    public:
    int roll_no;
    string name;
    student(){
        cout << "Student Default Constructor Called.\n";
    }
    student(int r, string n){
        cout << "Student Parametrized Constructor Called.\n";
        roll_no = r;
        name = n;
    }

    ~student(){
        cout << "Student Destructor Called.\n";
    }
    void getDetails(){
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter name: ";
        cin >> name;
    }
};

class marks{
    public:
    int maths, physics, chemistry;
    marks(){
        cout << "Marks Default Constructor Called.\n";
    }
    marks(int m, int p, int c){
        cout << "Marks Parametrized Constructor Called.\n";
        maths = m;
        physics = p;
        chemistry = c;
    }
    ~marks(){
        cout << "Marks Destructor Called.\n";
    }
    void getMarks(){
        cout << "Enter maths marks: ";
        cin >> maths;
        cout << "Enter physics marks: ";
        cin >> physics;
        cout << "Enter chemistry marks: ";
        cin >> chemistry;
    }
  
};
// in result we print total marks and details of student
class result: public student,public marks{
    public:
    result(){
        cout << "Result Default Constructor Called.\n";
    }
    // simple parameterized calling here
    result(int r, string n, int m, int p, int c): student(r, n), marks(m, p, c){
        cout << "Result Parametrized Constructor Called.\n";
    }
    

    ~result(){
        cout << "Result Destructor Called.\n";
    }
    int total;
    void calculateTotal(){
        getDetails();
        getMarks();
        total = maths + physics + chemistry;
        cout << "Total marks are: " << total << endl;

    }
     
};   
int main(){
    result r(1, "John", 85, 90, 80);
    r.calculateTotal();

    


    


   

    return 0;
}