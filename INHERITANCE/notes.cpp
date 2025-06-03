Class Notes:
//Hybrid Inheritance
#include<iostream>
using namespace std;
class Student{
    protected:
        string name;
        string enroll;
    public:
        Student(){
        cout<<"\n Student class Default constructor is called";
        }
        ~Student(){
        cout<<"\n Student class Destructor is called";
        }
       
       
    void getData(){
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Enrollment No : ";
        cin>>enroll;
    }
   
       
};
class Subject: public Student{
    protected:
    int subj1;
    int subj2;
    public:
        Subject(){
        cout<<"\n Subject class Default constructor is called";
        }
        ~Subject(){
        cout<<"\n Subject class Destructor is called";
        }
       
       
    void getMarks(){
        cout<<"Enter Subject 1 Marks : ";
        cin>>subj1;
        cout<<"Enter Subject 2 Marks  : ";
        cin>>subj2;
    }
   
       
};
class Sports{
    protected:
    int smarks;
    public:
        Sports(){
        cout<<"\n Sports class Default constructor is called";
        }
        ~Sports(){
        cout<<"\n Sports class Destructor is called";
        }
       
       
    void getSportsMarks(){
        cout<<"Enter Sports Marks : ";
        cin>>smarks;
       
    }
   
       
};

class Result: public Subject,public Sports{
    int total;
    public:
        Result(){
            cout<<"\n Result class Default Constructor is called";
        }
            ~Result(){
            cout<<"\n Result class Destructor is called";
        }
        void putInfo(){
            total=subj1+subj2+smarks;
        cout<<"\n Name : "<<name;
        cout<<"\n Enrollment No : "<<enroll;
        cout<<"\n Sports Marks : "<<smarks;
        cout<<"\n Subject 1 Marks : "<<subj1;
        cout<<"\n Subject 2 Marks : "<<subj2;
        cout<<"\n Total Marks : "<<total;
       
       
        }
};
int main(){
    Result r;
    r.getData();
    r.getMarks();
    r.getSportsMarks();
    r.putInfo();
    return 0;
}