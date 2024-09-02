// Q3. Write a class Address with data members (string building, string street, string city ,int pin)
// Implement constructors, getters, setters, accept(), and display() methods.
// Test the class functunalities by creating the object of class and calling all the functions.

#include<iostream>
using namespace std;

class Address {

    // Data meneber
     string building ;
     string street;
     string city;
     int pin;

public: 
    // constructor 
    Address(string building, string street , string city, int pin){
        this -> building = building;
        this -> street = street;
        this -> city = city;
        this -> pin = pin ;
    }
    // getter
    string getBuilding (){
        return building;
    }
    string getstreet (){
        return street;
    }
    string getcity (){
        return city;
    }
    int getpin (){
        return pin;
    }

    // setter
    void setBuilding (string building){
        this -> building = building ;
    }
    void setstreet (string street ){
        this -> street = street ;
    }
    void setcity (string city){
        this -> city = city ;
    }
    void setPin (int pin){
        this -> pin = pin ;
    }
    
         
    void accept(){
        cout << "Enter the building name " << endl;
        cin >> building ;
        cout << "Enter the street name " << endl;
        cin >> street ;
        cout << "Enter the city name " << endl;
        cin >> city ;
        cout << "Enter the pin number " << endl;
        cin >> pin ;

    }

    void display(){
        cout << "building name : " << building << endl;
        cout << "street name  :" << street << endl;;
        cout << "city name : " << city << endl;
        cout << "pin number : " << pin << endl;

    }
};

int main(){

    Address a1("Laxmi","food_corner", "pune", 412210);
     
     a1.display();
    a1.setBuilding("Niwas");
    a1.setcity("pune");
    a1.setPin(212121);
    a1.setstreet("street");

    a1.display();

    return 0;
}