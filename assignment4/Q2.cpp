// Q2. Write a menu driven program for Student management.
// Create a class student with data members name, gender, rollNumber(Auto generated) and array to 
// keep marks of three subjects. 
// Accept every thing from user and Print name, rollNumber, gender and percentage.
// Provide global functions void sortRecords() and int searchRecords() for sorting and searching array.
// In main(), create Student* arr[5] and provide facility for accept, print, search and sort.
// Search function returns index of found Student, otherwise returns -1.
// sortRecord sorts the students array based on roll no in descending order.


#include <iostream>
using namespace std;

class Student {
    string name;
    string gender;
    const int roll_no;
    static int roll_auto_generate;
    int marks[3];
    double percentage;

    void calculatePercentage() {
        double sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += marks[i];
        }
        percentage = (sum / 300.0) * 100.0;
    }

public:
    Student() : roll_no(++roll_auto_generate) {
        name = "";
        gender = "";
        percentage = 0;
        for (int i = 0; i < 3; i++) {
            marks[i] = 0;
        }
    }

    Student(string name, string gender, int marks[3]) : roll_no(++roll_auto_generate) {
        this->name = name;
        this->gender = gender;
        for (int i = 0; i < 3; i++) {
            this->marks[i] = marks[i];
        }
        calculatePercentage();
    }

    void Accept() {
        cout << "Enter Name: ";
        cin.ignore(); // To clear the newline left by previous input
        getline(cin, name);
        cout << "Enter Gender (M/F): ";
        cin >> gender;
        for (int i = 0; i < 3; i++) {
            cout << "Enter marks for subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
        calculatePercentage();
    }

    void Print() const {
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "Marks: ";
        for (int i = 0; i < 3; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Percentage: " << fixed << percentage << "%" << endl;
    }

    static void sortRecords(Student* ptr[], int size);
    static int searchRecords(Student* ptr[], int size, int roll_no);
    int getRollNo() const {
        return roll_no;
    }
};

int Student::roll_auto_generate = 0;

void Student::sortRecords(Student* ptr[], int size) {
    Student* temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (ptr[i]->getRollNo() < ptr[j]->getRollNo()) {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}

int Student::searchRecords(Student* ptr[], int size, int roll_no) {
    for (int i = 0; i < size; i++) {
        if (ptr[i]->getRollNo() == roll_no) {
            return i;
        }
    }
    return -1;
}

int main() {
    const int MAX_SIZE = 5;
    Student* students[MAX_SIZE] = { nullptr };
    int index = 0;
    int choice;

    do {
        cout << "\nStudent Management System Menu:\n";
        cout << "0 -> Exit\n";
        cout << "1 -> Accept\n";
        cout << "2 -> Print\n";
        cout << "3 -> Search\n";
        cout << "4 -> Sort\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 0:
                // Clean up dynamically allocated memory
                for (int i = 0; i < index; i++) {
                    delete students[i];
                }
                cout << "Thank you for using the app :)" << endl;
                break;

            case 1:
                if (index < MAX_SIZE) {
                    students[index] = new Student();
                    students[index]->Accept();
                    index++;
                } else {
                    cout << "Array is full." << endl;
                }
                break;

            case 2:
                for (int i = 0; i < index; i++) {
                    cout << "\nStudent " << (i + 1) << " details:\n";
                    students[i]->Print();
                }
                break;

            case 3: {
                int roll_no;
                cout << "Enter the roll number to search: ";
                cin >> roll_no;
                int foundIndex = Student::searchRecords(students, index, roll_no);
                if (foundIndex != -1) {
                    cout << "\nStudent found:\n";
                    students[foundIndex]->Print();
                } else {
                    cout << "Student with roll number " << roll_no << " not found." << endl;
                }
                break;
            }

            case 4:
                Student::sortRecords(students, index);
                cout << "Records sorted by roll number in descending order." << endl;
                for (int i = 0; i < index; i++) {
                    students[i]->Print();
                }
                break;

            default:
                cout << "Invalid choice! Please enter a valid option." << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}
