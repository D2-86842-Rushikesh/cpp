// Q1. Create a class Date with data memebrs day,month and year.
// Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of 
// type Date.
// Cretae a class Employee with data members id, sal, dept and joining date. The joining date should 
// be of type date.
// Employee class should be inherited from Person.
// Implement following classes. Test all functionalities in main().
// (Note - Perform the Association and Inheritance in the above case.)

#include<iostream>
using namespace std;

class Date{
    int date;
    int month;
    int year;


public :

    Date(): date(1) , month(1) , year(2024) {}

    Date(int date ,int month ,int year){
        this -> date = date ;
        this -> month = month ;
        this -> year = year ;
    }

void acceptDate(){
    cout << "enter the date : " ;
    cin >> date;
    cout << "Enter the month : ";
    cin >> month ;
    cout << "Enter the year : ";
    cin >> year ;
}
void displaydate(){
    cout << "Date " << date << "/ " << month << "/ " << year << endl;
}

void setDate(int date){
    this -> date = date ;
}
void setMonth(int month){
    this -> month = month ;
}
void setYear(int year){
    this -> year = year ;
}

int getDate (){
    return date;
}
int getmonth(){
    return month;
}
int getyear(){
    return this-> year;
}
};

class Person {
    string name ;
    string address ;
    Date dob;   //association 

public: 
   Person(): name(" ") , address(" ") ,dob() {}

void acceptPerson(){
    cout << "Enter the name : ";
    cin >> name ;
    cout << "Enter the address : " ;
    cin >> address ;
    cout << "Enter the dob "  ;
    dob.acceptDate(); 
}

void printPerson(){
    cout << "Name : " << name << endl;
    cout << "address : " << address  << endl;
    cout << "Date of birth : ";
    dob.displaydate() ;
}

};

class Employee : public Person  // inheritance 
{
    int id ;
    int salary;
    string dept ;
    Date joining ;
public :

    Employee(){
     id = 0 ;
     salary = 0000;
     dept = " ";
    Date joining ;
    }

   void accpetEmpolyee (){
        Person::acceptPerson();
        cout << "Enter the Id : ";
        cin >> id ;
        cout << "Enter the salary : ";
        cin >> salary;
        cout << "Enter dept : " ;
        cin >> dept;
        cout <<  "Enter the date of joining " ;
        joining.acceptDate() ; 

   }

   void printEmployee(){
    Person::printPerson();
    cout << "Id : " << id << endl;
    cout << "salary : " << salary << endl;
    cout << "dept :" << dept << endl; 
    joining.displaydate();
   }
};

int main(){

    // Date d1;
    // //d1.displaydate();
    // d1.acceptDate();
    //d1.displaydate();

    // Person p1;
    // p1.acceptPerson();
    // p1.printPerson();

    // Employee e1;
    // e1.accpetEmpolyee();
    // e1.printEmployee();

    Date *ptr = new Date(12,12,2002);

    
    // ptr->acceptDate();
    // ptr->displaydate();

   ptr->setDate(12);
   ptr->setMonth(13);
//    ptr->displaydate();
    cout << ptr->getyear() << endl;;

   delete ptr ;
   ptr = NULL;
    return 0;
}