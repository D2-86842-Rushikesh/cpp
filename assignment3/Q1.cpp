// Q1. Write a class to find volume of a Cylinder by using following members. (volume of 
// Cylinder=3.14 * radius * radius *height) ( use static wherever needed. hint-PI)
// Class having following member functions:
// Cylinder()
// Cylinder(double radius, double height)
// getRadius()
// setRadius()
// getHeight()
// setHeight()
// calculateVolume()
// Initialize members using constructor member initializer list.

#include<iostream>
using namespace std;

class Cylinder {

    // data member
    private:
    double radius ;
    double height ;
    static double const PI ;

    // member function 
    public: 

    // parameterless constructor  
    Cylinder() : radius(5), height(5) 
     {
    //      this-> radius = 5;
    //      this-> height = 5;
     };
    // parameterised constructor 
    Cylinder(double radius , double height) : radius(radius), height(height)
    {
       
        // this -> radius = radius ;
        // this -> height = height ;
    };

    // mutators 
    void setRadius(double radius){
        this -> radius = radius ;
    }
    
    // inspector
    double getRadius(){
        return radius;
    }

    void setHeight(double height){
       this -> height = height;
    }

    double getHeight(){
        return height;
    }
    //calculate volume
    void CalculateVolume(){
        double volume;
        //Cylinder::PI;
        volume = PI * radius * radius * height;

        cout << "Volume of Cylinder = " << volume << endl;

    }

};

double const Cylinder::PI = 3.14;

int main(){

    Cylinder c1(2,2);
    Cylinder c2;

    c1.CalculateVolume();
    c2.CalculateVolume();
    
    c1.setHeight(4);
    c1.setRadius(5);
    c1.CalculateVolume();

    c1.getRadius();

  

  

    return 0;
}