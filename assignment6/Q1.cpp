// Q1. Provide menu driven code for the functionalities:
// 1. Accept Employee
// a. Accept Manager
// b. Accept Salesman
// c. Accept SalesManager
// 2. Display the count of all employees with respect to designation
// 3. Display All Managers
// 4. Display All Salesman
// 5. Display All SalesManagers

#include <iostream>
#include <typeinfo>
using namespace std;

class Employee {
protected:
    int id;
    double salary;

public:
    Employee() : id(0), salary(0.0) {}

    Employee(int id, double salary) : id(id), salary(salary) {}

    void setId(int id) {
        this->id = id;
    }

    int getId() {
        return id;
    }

    void setSalary(double salary) {
        this->salary = salary;
    }

    double getSalary() {
        return salary;
    }

    virtual void accept() {
        cout << "Enter the id: ";
        cin >> id;
        cout << "Enter the salary: ";
        cin >> salary;
    }

    virtual void display() {
        cout << "ID = " << id << endl;
        cout << "Salary = " << salary << endl;
    }
};

class Manager : public virtual Employee {
    double bonus;

protected:
    void acceptManager() {
        cout << "Enter the bonus: ";
        cin >> bonus;
    }

    void displayManager() {
        cout << "Bonus = " << bonus << endl;
    }

public:
    Manager() : Employee(), bonus(0.0) {}

    Manager(int id, double salary, double bonus) : Employee(id, salary), bonus(bonus) {}

    void setBonus(double bonus) {
        this->bonus = bonus;
    }

    double getBonus() {
        return bonus;
    }

    void accept()  {
        Employee::accept();
        acceptManager();
    }

    void display()  {
        Employee::display();
        displayManager();
    }
};

class Salesman : public virtual Employee {
    double commission;

protected:
    void acceptSalesman() {
        cout << "Enter the commission: ";
        cin >> commission;
    }

    void displaySalesman() {
        cout << "Commission = " << commission << endl;
    }

public:
    Salesman() : commission(0.0) {}

    Salesman(int id, double salary, double commission) {
        this->id = id;
        this->salary = salary;
        this->commission = commission;
    }

    void setCommission(double commission) {
        this->commission = commission;
    }

    double getCommission() {
        return commission;
    }

    void accept()  {
        Employee::accept();
        acceptSalesman();
    }

    void display()  {
        Employee::display();
        displaySalesman();
    }
};

class SalesManager : public Manager, public Salesman {
public:
    SalesManager() {}

    SalesManager(int id, double salary, double bonus, double commission) {}

    void accept()  {
        Manager::accept();
        acceptSalesman();
    }

    void display()  {
        Manager::display();
        displaySalesman();
    }
};

int main() {
    Employee* arr[10];
    int count = 0;
    int choice;

    do {
        cout << "Menu --------- >" << endl;
        cout << "0 -> Exit" << endl;
        cout << "1. Accept Employee" << endl;
        cout << "  a. Accept Manager" << endl;
        cout << "  b. Accept Salesman" << endl;
        cout << "  c. Accept SalesManager" << endl;
        cout << "2. Display the count of all employees" << endl;
        cout << "3. Display All Managers" << endl;
        cout << "4. Display All Salesman" << endl;
        cout << "5. Display All SalesManagers" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 0:
            cout << "Thank you :)" << endl;
            break;

        case 1: {
            char choice1;
            cout << "Enter a, b, c: ";
            cin >> choice1;

            switch (choice1) {
            case 'a':
                arr[count] = new Manager();
                arr[count]->accept();
                count++;
                break;

            case 'b':
                arr[count] = new Salesman();
                arr[count]->accept();
                count++;
                break;

            case 'c':
                arr[count] = new SalesManager();
                arr[count]->accept();
                count++;
                break;

            default:
                cout << "Wrong choice" << endl;
            }
            break;
        }

        case 2:
            cout << "Total number of Employees: " << count << endl;
            break;

        case 3:
            for (int i = 0; i < count; i++) {
                if (typeid(*arr[i]) == typeid(Manager)) {
                    cout << "---------------" << endl;
                    arr[i]->display();
                    cout << "----------------" << endl;
                }
            }
            break;

        case 4:
            for (int i = 0; i < count; i++) {
                if (typeid(*arr[i]) == typeid(Salesman)) {
                    cout << "---------------" << endl;
                    arr[i]->display();
                    cout << "----------------" << endl;
                }
            }
            break;

        case 5:
            for (int i = 0; i < count; i++) {
                if (typeid(*arr[i]) == typeid(SalesManager)) {
                    cout << "---------------" << endl;
                    arr[i]->display();
                    cout << "----------------" << endl;
                }
            }
            break;

        default:
            cout << "Wrong choice" << endl;
        }

    } while (choice != 0);

    return 0;
}
