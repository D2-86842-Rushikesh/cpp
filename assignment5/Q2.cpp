// Q2. A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class 
// holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books. 
// Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program 
// should be menu driven and should not cause memory leakage.
// Hint - Create class Product and inherit into Book and Tape. Also create array like Product* arr[3]

#include<iostream>
using namespace std;

class Product {
    int id ;
    string title ;

 public:

    Product(): id(0), title("blank"){}

    virtual void acceptData(){

        cout << "Enter the id : " ;
        cin >> id ;
        cout << "Enter the title : " ;
        cin >>title;

    }

    virtual void printData(){

        cout << " id : "  << id << endl;
        
        cout << "title : " << title << endl ;

    }
    virtual void calculateFinalBill() = 0;



    };

class Book : public Product {

    string author ;
    double price ;

public : 
    void acceptData(){
        Product::acceptData();
        cout << "Enter the name of Author : " ;
        cin >> author ;
        cout << "Enter the price : " ;
        cin >> price ;
    }

    void printData(){
        Product::printData();
        cout << "Name of author = " << author << endl;
        cout << "price of book = " << price  << endl; 

    }

    void calculateFinalBill(){
        int bill = price - (0.10 * price );
        cout << "Final Bill = " << bill << endl;

    }


};
class Tape : public Product{

    string artist ;
    double price ;
public:
    void acceptData(){
        Product::acceptData();
        cout << "Enter the name of Artist : " ;
        cin >> artist ;
        cout << "Enter the price : " ;
        cin >> price ;
    }

    void printData(){
        Product::printData();
        cout << "Name of author = " << artist  << endl;
        cout << "price of book = " << price  << endl;; 

    }

    void calculateFinalBill(){
        int bill = price - (0.05 * price );
        cout << "Final Bill = " << bill << endl;

        
}
};
int main() {
    Product* arr[3];
    int productCount = 0;
    int choice;

    do {
        cout << "0 -> Exit" << endl;
        cout << "1 -> Add product" << endl;
        cout << "2 -> Calculate total bill" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 0:
            cout << "Thank you :)" << endl;
            break;

        case 1:
            if (productCount >= 3) {
                cout << "You can only add 3 products." << endl;
                break;
            }
            int temp;
            cout << "Enter the choice: (1 for Book, 2 for Tape): ";
            cin >> temp;
            if (temp == 1) {
                arr[productCount] = new Book();
            }
            else if (temp == 2) {
                arr[productCount] = new Tape();
            }
            else {
                cout << "Invalid choice. Please enter 1 for Book or 2 for Tape." << endl;
                continue;
            }

            arr[productCount]->acceptData();
            productCount++;
            break;

        case 2:
            if (productCount == 0) {
                cout << "No products to calculate bill." << endl;
                break;
            }
            double totalBill = 0.0;
            for (int i = 0; i < productCount; i++) {
                arr[i]->printData();
                
            }
            cout << "Total Bill after discount: " << totalBill << endl;
            break;

        default:
            cout << "Invalid choice. " << endl;
            break;
        }

    } while (choice != 0);

    for (int i = 0; i < productCount; i++) {
        delete arr[i];
    }

    return 0;
}



// int main(){

    // Book *b = new Book();
    // b->acceptData();
    // b->printData();
   
    // b->calculateFinalBill();

    // Tape *t = new Tape();
    // t->acceptData();
    // t->printData();
    // t->calculateFinalBill();



    

    // Product *arr[3];

    

    // for(int i = 1 ; i < 3; i++){

    //    arr[i]->acceptData();
    // }


//     int choice;
//     do
//     { 
//         cout << "0 -> Exit " << endl;
//         cout << "1 -> Add product " << endl;
//         cout << "2 -> Total bill  " << endl;
//         cout << "Enter the choice : " ;
//         cin >> choice ;

//         switch (choice)
//         {
//         case 0 :
//             cout << "Thank you :) " << endl;
//             break;
//         case 1 : 
//         {
//             int temp;
//             cout << "Enter the choice : (Book = 1 ), (Tape = 2 " ;
//             cin >> temp ;
//             if(temp == 1 ){
//                 *arr = new Book (); 

//             }
//             else if(temp == 2){
//                 *arr = new Tape (); 

//             }


        

//         };
//         case 2 : 
         
           
          
        
//         default:
//             break;
//         }
        
//     } while (choice != 0);
    
   

//     return 0;
// }