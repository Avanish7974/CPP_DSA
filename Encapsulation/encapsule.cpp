 Hiding non essentials details from the user
we  use private access specifier for member data and define getter and setter from every member data

getter: it is used to get value value of particular member
The return type of get method is same as its member data
get method does not take any argument
Syntax:
public:
MemberData data type getMemberDataName(){
return memberdata
}
string getName(){
return name;
}
string getEnroll(){
returm enroll;
}
char getS(){
return s;
}
int getP(){
return p;
}
int getC(){
return c;
}
int getM(){
return m;
}
int getH(){
return h;
}
int getE(){
return e;
}
setter : it is uset to change value of particular member
The return type of set method always void but it take one argument(same as its member data , data type)

public:
void  setMemberDataName(Member data  data type variable){
this->memberdataName=variable;
}
void setName(string name){
this->name=name;
}
void setEnroll(string enroll){
this->enroll=enroll;
}
void setS(char s){
this->s=s;
}
void setM(int m){
this->m=m;
}
void setC(int c){
this->c=c;
}
void setP(int p){
this->p=p;
}
void setH(int h){
this->h=h;
}
void setE(int e){
this->e=
#include <iostream>
using namespace std;
int main(){
   
    return 0;
}