// Q2. Write a class for Time and provide the functionality
// Time()
// Time(int h,int m,int s)
// getHour()
// getMinute()
// getSeconds()
// printTime()
// setHour()
// setMinute()
// setSeconds()
// In main create array of objects of Time.
// Allocate the memory for the array and the object dynamically.

#include<iostream>
using namespace std;

class Time {
    // Data member 
    private:
    int h;
    int m;
    int s;

public: 
    // constructor 
    Time(){
        this -> h = 0;
        this -> m = 0;
        this -> s = 0;
    }

    Time(int h, int m, int s){
        this -> h = h;
        this -> m= m ;
        this -> s = s;

    }

    int getHours(){
        return h;
    }
    int getMinutes(){
        return m;
    }
    int getSecond(){
        return s;
    }

    void setHours(int h){
       this -> h = h ;
    }
    void setMinutes(int m){
       this -> m = m ;
    }
    void setSecond(int s){
       this -> s = s ;
    }

    
    void printTime(){
        cout << "Time: " << h << ":" << m << ":" << s ;
    }

}; 

int main(){

     
    Time *ptr = new Time[3];

    ptr[0] = Time(5, 15, 30);
    ptr[1] = Time(10, 45, 55);
    ptr[2] = Time(23, 59, 59);

    for (int i = 0; i < 3; ++i) {
        ptr[i].printTime();
    }

    delete[] ptr;
    ptr = NULL;

    ptr->setHours(5);
    ptr->setMinutes(30);
    ptr->setSecond(15);

    ptr->printTime();
    ptr->setHours(9);
    ptr->getHours();
    return 0 ;
}
   
 