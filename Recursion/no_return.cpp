#include <iostream>
using namespace std;
void no_return(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n>0){
        cout<<n<<" is positive\n";
    }
    else if(n<0){
        cout<<n<<" is negative\n";
    }
    else{
        cout<<n<<" is zero\n";
    }
}