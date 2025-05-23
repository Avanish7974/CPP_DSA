// there is a difference in formal argument and actual argument
// formal argument is the one which is used in the function
// actual argument is the one which is used in the main function
#include<iostream>
using namespace std;
int add(int a, int b); // function declaration
// function prototype
// function declaration is used to tell the compiler that the function is defined later
int add();
// in above code line 6 and 9 are function declaration and both are same we can use any of them

int add(int a, int b){ 
    // here a and b are the parameters

    return a + b;
    
}
int main(){
    cout << "Hello World!" << endl;
    int x,y;
    cout << "Enter First Number: ";
    cin >> x;
    cout << "Enter Second Number: ";
    cin >> y;
    cout << "Sum is: " << add(x, y) << endl; // here x and y are used
    // here x and y are known as arguments



    return 0;
}
// there is a difference in formal argument and actual argument
// formal argument is the one which is used in the function
// actual argument is the one which is used in the main function

// there is a difference in call by value and call by reference
// call by value or call by reference is used to pass the value of the variable to the function
// call by value or call by reference me aantar hota hai
// orr wo aantar yah hai ki call by value me function me jo bhi changes karte hai wo main function me nahi hota hai
// // call by reference me function me jo bhi changes karte hai wo main function me hota hai  
// dono me yahi difference hai or eak point hai ki call by value me function me jo bhi changes karte hai wo main function me nahi hota hai
// // call by reference me function me jo bhi changes karte hai wo main function me hota hai     
