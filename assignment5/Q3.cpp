// Q3. Implement following classes. Test all functionalities in main() of each created class. Note that 
// employee is inherited into manager and salesman.

#include <iostream>
using namespace std;

class Employee{
protected:
    int id;
    double salary;

public:
    Employee(): id(0), salary(00000){}

    Employee(int id ,double salary) : id(id), salary(salary){
        // this ->id = id ;
        // this ->salary = salary ;
    }
    void setid (int id){
        this -> id = id ;
    }
    int getid (){
        return id;
    }
    void setsalary(double salary){
        this -> salary = salary;
    }
    double getsalary(){
        return salary;
    }

    virtual void accept(){
        cout << "Enter the id : " ;
        cin >> id;
        cout << "Enter the salary : ";
        cin >> salary ;

    }
    virtual void display(){
        cout << "id = " << id << endl;
        cout << "Salary = " << salary << endl;
    }
};

class Manager : public virtual Employee{
    double bonous ;
protected:
void acceptManager(){
    cout << "Enter the bonous : " ;
    cin >> bonous;
  }
  void displayManager(){
    cout << "Bonous = " << bonous << endl;
  }



public :
  Manager():Employee(), bonous(0){}

  Manager(int id , double salary, double bonous) : Employee(id,salary),bonous(bonous) 
  {
    //  this ->id = id ;
    //  this->salary = salary;
    //  this -> bonous = bonous;
  }
  void setbonous (double bonous){
    this -> bonous = bonous;
  }

  double getbonous(){
    return bonous;
  }
  void accept(){
    Employee :: accept();
    acceptManager();
    // cout << "Enter the bonous : " ;
    // cin >> bonous;
  }
  
  void display(){
    Employee::display();
    displayManager();
    //cout << "Bonous = " << bonous << endl;
  }

};

class Salesman : public virtual Employee{
    double commission ;

protected:
void acceptSalesman(){
    cout << "Enter the commission :  " ;
    cin >> commission ;
  }

  void displaySalesman(){
    cout << "commission = " << commission << endl;
  }

public :
    Salesman(): commission(0) {}

    Salesman(int id , double salary, double commission ){
        this->id = id;
        this ->salary = salary;
        this -> commission = commission;
    }
    void setcommmission (double commission){
    this -> commission = commission;
  }

  double getcommission(){
    return commission;
  }
  void accept(){
    Employee :: accept();
    acceptSalesman();
    // cout << "Enter the commission : " ;
    // cin >> commission;
  }
  
  void display(){
    Employee::display();
    displaySalesman();
    //cout << "commission = " << commission << endl;
  }
  

};

class SalesManager : public Manager, public Salesman{


public :
     SalesManager(){

     };
     SalesManager(int id ,double salary , double bonous, double commission ){
      
     }
    void accept(){
      Manager::accept();
      // Employee::accept();
      // acceptManager();
      acceptSalesman();

    }
    void display(){
      Manager::display();
      displaySalesman();

    }

};


int main(){
  
  Employee *arr[5];  //pointer array 

  arr[0] = new Manager();
  arr[0]->accept();
  arr[1] = new Salesman();
  arr[1]->accept();
  arr[2] = new SalesManager();
  arr[2]->accept();
  arr[3] = new Manager();
  arr[3]->accept();
  arr[4] = new SalesManager();
  arr[4]->accept();


  for(int i = 0 ; i < 5; i++){
    cout << "------------------" << endl;
    arr[i]->display();
  }

  //  Employee *ptr = new SalesManager();
  //  ptr->accept();
  //  ptr->display();


    //Employee *eptr = new Manager(12, 10000, 500) ; // is salary bonous

    //eptr->accept();
    //eptr->display();


    // Employee *eptr = new Salesman();

    // Salesman *dptr = (Salesman *) eptr;
    //  eptr->accept();
    //  eptr->display();
    //  //Salesman s1;
    //  dptr->setcommmission(5000);
    //  cout << "commission " << dptr->getcommission();
    


    return 0;

}