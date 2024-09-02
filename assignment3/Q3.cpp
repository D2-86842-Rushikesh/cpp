// Q3. Stack is a Last-In-First-Out data structure. Write a Stack class that stores int type of data. It 
// implements stack using Dynamically allocated array. Stack size should be passed in parameterized 
// constructor. If size is not given, allocate stack of size 5.
// Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().

#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int capacity;

public:
    Stack(int size = 5) {
    
        arr = new int[size];
        top = -1;
        cout << "capacity of stack " << capacity << endl;
    }

    ~Stack() {
        delete[] arr;
        cout << "Stack destroyed" << endl;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack is full " << value << endl;
            return;
        }
        arr[++top] = value;
        cout << "Pushed " << value << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Empty" << endl;
            return;
        }
        cout << "Popped " << arr[top--] << endl;
    }

    int peek() const {
        if (isEmpty()) {
            cout << "Stack is empty " << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() const {
        return top == -1;
    }

    bool isFull() const {
        return top == capacity - 1;
    }

    void print() const {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements from bottom to top:" << endl;
        for (int i = 0; i <= top; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
   

    stack.print();

    cout << "Top element is: " << stack.peek() << endl;

    stack.pop();
    stack.pop();
    stack.pop();

    stack.print();

    cout << "Top element is: " << stack.peek() << endl;

    stack.pop(); 
    stack.pop();

    stack.print(); 

    return 0;
}
