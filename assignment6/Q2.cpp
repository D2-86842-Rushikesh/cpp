// Q2. Write a user defined function factorial() that calculates factorial of given number and it throws 
// exception if number entered by user is negative.
#include<iostream>
using namespace std;
int calculateFactorial(int number){
    if(number > 0){
       int fact = 1;
       for(int i = 1 ; i <= number ; i++){
        fact = fact * i ;
       } 
       return fact;
    }
    else{
        throw 1;
    }
}
int main(){
    int number ;
    cout << "Enter the number : ";
    cin >> number;
    try{
        cout <<  calculateFactorial(number) ;
    }
    catch (int error){
        cout << "Enter the positive integer " <<endl;
    }
    return 0;
}