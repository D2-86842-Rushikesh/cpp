/* Q3. Write a menu driven program for Student in CPP language. Create a class student with data 
members roll no, name and marks. Implement the following functions
void initStudent();
void printStudentOnConsole();
void acceptStudentFromConsole();*/

#include <iostream>
using namespace std;

class Student {
    int roll_no;
    string name;
    int marks;

public:
    void initStudent() {
        roll_no = 1;          
        name = "Rushikesh";
        marks = 10;
    }

    void printStudentOnConsole() {
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    void acceptStudentFromConsole() {
        cout << "Enter roll no, name, and marks: ";
        cin >> roll_no >> name >> marks;
    }
};

int menu(){
    int choice;
    cout <<"0 --> Exit" <<endl;
    cout <<"1 --> initStudent" <<endl;
    cout <<"2 --> printStudentOnConsole" <<endl;
    cout <<"3 --> acceptStudentFromConsole" <<endl;
    cout << "Enter the choice: ";
    cin >> choice;
    return choice;
}

int main() {
    Student s1;
    int choice;

    while((choice = menu())!= 0){
        
        switch (choice)
        {
        case 1: 
             s1.initStudent();
             s1.printStudentOnConsole();
            break;
        case 2: 
             s1.printStudentOnConsole();
            break;
        case 3: 
             s1.acceptStudentFromConsole();
            break;
        
        default:
            cout << "Wrong choice " << endl;

            break;
        }

    }

    return 0;
}
