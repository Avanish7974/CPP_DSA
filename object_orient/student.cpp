#include <iostream>
using namespace std;
class student{
    public:
    string name;
    string enrollment;
    char branch;
    int p;
    int c;
    int m;
    int h;
    int e;
    // here all these are data members of the class student
   void getinfo(){
    cout<<"Enter your name: \n";
    cin>>name; // Read name as a single word (no spaces)
    cin.ignore(); // To clear the buffer before getline
    getline(cin, name); // Read full name including spaces

    cout<<"Enter your enrollment number: ";
    cin>>enrollment;
    
    cout<<"Enter your branch: ";
    cin>>branch;
    
    cout<<"Enter your marks in Physics: ";
    cin>>p;
    
    cout<<"Enter your marks in Chemistry: ";
    cin>>c;
    
    cout<<"Enter your marks in Mathematics: ";
    cin>>m;
    
    cout<<"Enter your marks in Hindi: ";
    cin>>h;
    
    cout<<"Enter your marks in English: ";
    cin>>e;
}

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Enrollment Number: "<<enrollment<<endl;
        cout<<"Branch: "<<branch<<endl;
        cout<<"Marks in Physics: "<<p<<endl;
        cout<<"Marks in Chemistry: "<<c<<endl;
        cout<<"Marks in Mathematics: "<<m<<endl;
        cout<<"Marks in Hindi: "<<h<<endl;
        cout<<"Marks in English: "<<e<<endl;
    }
    int total(){
        return p + c + m + h + e; // Returns the total marks
    }
    float percentage(){
        return (total() / 5.0); // Returns the percentage of marks
    }
    // here  get info ,display, total and percentage are member functions of the class student

};
int main(){
    student s; // Creating an object of the student class
    s.getinfo(); // Calling the getinfo method to input student details
    s.display(); // Calling the display method to show student details
    cout<<"Total Marks: "<<s.total()<<endl; // Displaying total marks
    // here we are using cout in total but in getinfo  we are not using cout because we are not displaying anything in getinfo function
    cout<<"Percentage: "<<s.percentage()<<"%"<<endl; // Displaying percentage of marks


  

    return 0;
}