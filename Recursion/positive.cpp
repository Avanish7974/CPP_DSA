#include <iostream>
using namespace std;
void ispositive(){
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

int main(){
    for(int i=0;i<5;i++){
        ispositive();
    }

    return 0;
}