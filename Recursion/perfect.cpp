#include <iostream>
using namespace std;
// 1. Taking nothing and returning nothing
void is_perfect(){
    int n = 6;
    int sum = 0;
    for(int i = 1; i <= n/2; i++){ 
        if(n % i == 0){
            sum += i;
        }
    }
    if(sum == n){
        cout << n << " is a perfect number" << endl;
    } else {
        cout << n << " is not a perfect number" << endl;
    }
}
int is_perfect2(int n){
    int sum = 0;
    for(int i = 1; i <= n/2; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    if(sum == n){
        cout << n << " is a perfect number" << endl;
    } else {
        cout << n << " is not a perfect number" << endl;
    }
}


int main(){

    is_perfect();
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    is_perfect2(n);




    return 0;
}