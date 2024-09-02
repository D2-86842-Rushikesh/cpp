/* Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
Date is having data members day, month, year. Implement the following functions.
void initDate();
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();*/


#include<iostream>
using namespace std;

struct Date {
    int day; 
    int month;
    int year;

    void initDate(){
        day = 1;
        month = 1;
        year = 1999;

    }
    void printDateOnConsole(){
        cout << "Date --> " << day << "/" << month << "/" << year;

    }
    void acceptDateFromConsole(){
        cout << "Enter Day : ";
        cin >> day ;
        cout << "Enter month : ";
        cin >> month ;
        cout << "Enter year : ";
        cin >> year ;

    }
    bool isLeapYear(){

        if(year % 4 == 0 || year % 400 ==0)
        return true;
        else 
        return false;

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
    struct Date d1;
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


    

//     if(d1.isLeapYear()==1){
//         cout << "Leap Year" << endl;
//     }
//     else{
//        cout << "Non-Leap Year" << endl;
//     }
     
//     return 0;
// }