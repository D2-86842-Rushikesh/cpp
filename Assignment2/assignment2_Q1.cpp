
/*Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor.
Create the local objects in respective case and call the function to caluclate area.
Menu options -> 
1. Calculate Volume with default values
2. Calculate Volume with length,breadth and height with same value
3. Calculate Volume with different length,breadth and height values */
#include<iostream>
using namespace std;

class volume {

    // data members 
    int length;
    int width;
    int height;

public:
    // parameterless constructor 
    volume() {
        length = 1;
        width = 1;
        height = 1;
    }

    //parameterized constructor 
    volume(int length , int width, int height){
        this->length = length;
        this->width = width;
        this->height = height; 
    }

    // single parameterised constructor

    volume(int value){
         length = value;
         width = value ;
         height = value;
    }

// function for calculate volume of box
void CalculateVolume(){
    int volume;
    volume = this->length * this->height* this->width;
    cout << "Volume of box = " << volume << endl;
}  
};

int menu(){
    int choice;
    cout <<"Enter the choice: "<< endl;
    cin >> choice ;
    cout <<"0. Exit" << endl;
    cout <<"1. Calculate Volume with default values" << endl;
    cout <<"2. Calculate Volume with length,breadth and height with same value" << endl;
    cout <<"3. Calculate Volume with different length,breadth and height values" << endl;

    return choice;
}

int main(){

    volume v1;
    volume v2(5);
    volume v3(2,3,4);
    int choice;

    while((choice = menu()) != 0){

        switch (choice)
        {
        case 1 : v1.CalculateVolume();
            break;
        case 2 : v2.CalculateVolume();
            break;
        case 3 : v3.CalculateVolume();
            break;
        
        default: cout << "Wrong choice " << endl;

        }
    }

    return 0;
}
