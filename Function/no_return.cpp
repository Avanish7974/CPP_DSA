#include <iostream>
using namespace std;
// here we write all four types of functions
// 1. Function with no return type and no parameters
void noReturnFunction() {  
    cout << "This function does not return a value and has no parameters." << endl;
}
// 2. Function with no return type and parameters
void noReturnFunctionWithParams(int a, int b) {
    // This function takes two integer parameters and does not return a value
    cout << "This function does not return a value and has parameters: " << a << " and " << b << endl;
}
// 3. Function with return type and no parameters
int returnFunction() {
    cout << "This function returns an integer value." << endl;
    return 42; // Returning an integer value
}
// 4. Function with return type and parameters
int returnFunctionWithParams(int a, int b) {
    cout << "This function returns the sum of two integers: " << a << " and " << b << endl;
    return a + b; // Returning the sum of the two parameters
}


int main() {
    // Calling the function with no return type and no parameters
    noReturnFunction();
    // Calling the function with no return type and parameters
    noReturnFunctionWithParams(5, 10);
    // Calling the function with return type and no parameters
    int result = returnFunction();
    cout << "Returned value: " << result << endl;
    // Calling the function with return type and parameters
    int sum = returnFunctionWithParams(15, 25);

    cout << "Sum of parameters: " << sum << endl;
    
    return 0; // The main function returns 0 to indicate successful execution
}
