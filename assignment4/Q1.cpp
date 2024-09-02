// Q1. Create a class Date with data memebrs day,month and year.
// Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of 
// type Date.
// Implement above classes. Test all functionalities in main().

#include<iostream>
using namespace std;

class date{

    int day;
    int month;
    int year;


public: 
  date(){
    this ->day = 0;
    this ->month = 0;
    this -> year = 0;
  }

  date(int day ,int month, int year){
     this ->day = day;
    this ->month = month;
    this -> year = year;
  }

  void acceptDate(){
    cout << "Enter the date " << endl;
    cin >> day >> month >> year ;
  }

  void printDate(){
    cout << "Date : " << day << "/" << month<<"/" << year;
  }

};

class person {
    string name ;
    string address;
    date DOB;

public:


    person(){
        this-> name = " ";
        this-> address = " ";
       
    }
    void acceptPerson(){
        cout << "Enter the name :" <<endl;
        cin >> name;
        cout << "Enter the Address: "<< endl;
        cin >> address;
        cout << "Enter the birth Date" << endl;
        DOB.acceptDate();
    }

    void printPerson(){
        cout << "name: " << name <<endl;
        cout << "Address :" << address << endl;
        cout << "DOB :" ;
        DOB.printDate() ;

    }

};

int main(){

    date d1;
    d1.printDate();
    d1.acceptDate();
    d1.printDate();

    person p1;
    p1.printPerson();
    p1.acceptPerson();

    p1.printPerson();

    return 0;
}