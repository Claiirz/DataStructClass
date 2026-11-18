#include <iostream>
using namespace std;

const int MAX = 5;     
int stackArr[MAX];     
int top = -1;          

void push(int val) {

    if (top == MAX - 1) {
        cout << "Stack Overflow! Cannot insert " << val << ".\n";
    } else {
        top++;               
        stackArr[top] = val;   
        cout << val << " inserted successfully.\n";
    }
}


void pop() {

    if (top == -1) {
        cout << "Stack Underflow! Stack is empty.\n";
    } else {
        cout << stackArr[top] << " removed successfully.\n";
        top--;                
    }
}

void peek() {
    if (top == -1) {
        cout << "Stack is empty.\n";
    } else {
        cout << "Top element: " << stackArr[top] << "\n";
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty.\n";
    } else {
        cout << "Stack elements: ";

        for (int i = top; i >= 0; i--) {
            cout << stackArr[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int pil, val;

    while (pil != 5){
        cout << "\n===== STACK MENU =====\n";
        cout << "1. Push  2. Pop  3. Peek\n";
        cout << "4. Display  5. Exit\n\n";
        cout << "Choose operation: ";
        cin >> choice;


        if (pil == 1) {
            cout << "Enter value: ";
            cin >> val;
            push(val);     
        } else if (pil == 2) {
            pop();
        } else if (pil == 3) {
            peek();
        } else if (pil == 4) {
            display();
        } else if (pil == 5) {
            cout << "Exiting...\n";
        } else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
