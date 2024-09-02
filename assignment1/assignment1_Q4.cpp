// Q4. Create a namespace NStudent. Create the Student class(created as per Q3) inside namespace. 
// Create the object of student and perform accept and display student.

#include<iostream>
using namespace std;
namespace NStudent{


   class Students{
       // data members
      public:
      int roll_no;
      string name ;
      int marks ;

      void accept(){
          cout << "Enter the roll no : ";
          cin >> roll_no ;
          cout << "Enter the name  : " ;
          cin >> name ;
          cout << "Enter the marks : ";
          cin >> marks ;
      }

      void display(){
        cout << "roll no: " << roll_no << endl;
        cout << " name : " << name << endl;
        cout << " marks : " << marks << endl;

      }

};
}

int main(){

    NStudent::Students s1;

    s1.accept();
    s1.display();

    return 0;
}