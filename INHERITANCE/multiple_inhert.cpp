#include <iostream>
using namespace std;
// student program for multiple inheritance in C++

class student{
    public:
    int roll_no;
    string name;
    student(){
        cout << "Student Default Constructor Called.\n";
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
    result obj;
    obj.calculateTotal();


   

    return 0;
}