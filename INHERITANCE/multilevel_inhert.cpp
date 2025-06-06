#include <iostream>
using namespace std;
// here we write student program for multilevel inheritance in C++
class Student{
    public:
    int roll_number;
    string name;
    char section;
    Student(){
        cout<<"Default constructor of Student class called"<<endl;
    }
    ~Student(){
        cout<<"Destructor of Student class called"<<endl;
    }
    void getinfo(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll number: ";
        cin>>roll_number;
        cout<<"Enter section: ";
        cin>>section;
    }

};

class ExamMarks: public Student{
    public:
    int english, maths, science;
    ExamMarks(){
        cout<<"Default constructor of ExamMarks class called"<<endl;
    }
    ~ExamMarks(){
        cout<<"Destructor of ExamMarks class called"<<endl;
    }
    void getMarks(){
        cout<<"Enter English marks: ";
        cin>>english;
        cout<<"Enter Maths marks: ";
        cin>>maths;
        cout<<"Enter Science marks: ";
        cin>>science;
    }
};

class Result: public ExamMarks{
    public:
    int total_marks;

    Result(){
        cout<<"Default constructor of Result class called"<<endl;
    }
    ~Result(){
        cout<<"Destructor of Result class called"<<endl;
    }
    void calculateTotal(){
        total_marks = english + maths + science;
        cout<<"Total marks: "<<total_marks<<endl;

    }
    void displayResult(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<roll_number<<endl;
        cout<<"Section: "<<section<<endl;
        cout<<"English: "<<english<<endl;
        cout<<"Maths: "<<maths<<endl;
        cout<<"Science: "<<science<<endl;
        cout<<"Total Marks: "<<total_marks<<endl;}
    
};

int main(){
    Result r;
    r.getinfo();
    r.getMarks();
    r.calculateTotal();
    r.displayResult();

   
    return 0;
}