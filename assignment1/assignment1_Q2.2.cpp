// using class

#include<iostream>
using namespace std;


 class Date {
        // data memeber 
        int day ;
        int month ; 
        int year;

public: 
    void initDate(){
        day = 01;
        month = 01;
        year = 2024;

    }
    void printDateOnConsole(){

        cout << "Date :" << day << "/" << month << "/" << year;
    }

    void acceptDateFromConsole(){
       cout << "Enter the Day : " << endl;
       cin >> day;
       cout << "Enter the month : " << endl;
       cin >> month;
       cout << "Enter the year : " << endl;
       cin >>year; 

    }
    bool isLeapYear(){

        if(year % 4 == 0 || year % 400 == 0){
            return true;
        }
        else {
           return false;
        }

    }
    };


int menu(){

    int choice ;
    cout << "0 --> Exit" << endl;
    cout << "1 --> initDate" << endl;
    cout << "2 --> printDateOnConsole" << endl;
    cout << "3 --> acceptDateFromConsole" << endl;
    cout << "4 --> check IsLeap year" << endl;

    cout << "enter your choice : ";
    cin >> choice ;

    return choice;
}

int main(){


    Date d1;
    int choice ;
    
    while((choice = menu()) != 0){
        
        switch (choice)
        {
        case 1 :
             d1.initDate();
             d1.printDateOnConsole();
            break;
        case 2 :
             d1.printDateOnConsole();
            break;
        case 3 :
             d1.acceptDateFromConsole();
            break;
        case 4 :{
              d1.isLeapYear();
              if(d1.isLeapYear()==1){
                cout << "Leap Year" << endl;
             }
             else{
                cout << "Non-Leap Year" << endl;
            } break;
        }
        default:
           cout << "Wrong choice" << endl;
      }
    }
    return 0;
}
