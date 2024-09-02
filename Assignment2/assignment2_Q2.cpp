// Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll. 
// Mostly they do, but sometimes a car goes by without paying.
// The tollbooth keeps track of the number of cars that have gone by and of the total amount of money 
// collected. Model this tollbooth with a class called tollbooth.
// The two data items are a type unsigned int to hold the total number of cars, and a type double to 
// hold the total amount of money collected.
// A constructor initializes all data members to 0. A member function called payingCar() increments 
// the car total and adds 0.50 to the cash total. An other function, called nopayCar()
// increments the car total but adds nothing to the cash total. Finally, a member function called 
// printOnConsole() displays the two totals and number of paying as well as non paying cars total.

#include <iostream>
using namespace std;

class Tollbooth {
private:
    unsigned int No_of_car;        
    double Money_collected;         
    int payingCars;        
    int nopayCars;        
public:
    
    Tollbooth() {
        No_of_car = 0;
        Money_collected = 0 ;
        payingCars = 0 ;
        nopayCars = 0;
    }

    void payingCar() {
        No_of_car++;                 
        Money_collected = Money_collected + 0.50;     
        payingCars++;                
    }

   
    void nopayCar() {
        No_of_car++;               
        nopayCars++;              
    }

    void printOnConsole() {
        cout << "Total number of cars -> " << No_of_car << endl;
        cout << "Total money collected =" << Money_collected << endl;
        cout << "Number of paying cars = " << payingCars << endl;
        cout << "Number of non-paying cars -> " << nopayCars << endl;
    }
};

int main() {
    Tollbooth t1;

    t1.payingCar();
    t1.payingCar();
    t1.nopayCar();
    t1.payingCar();
    t1.nopayCar();
    t1.nopayCar();


    t1.printOnConsole();

    return 0;
}

