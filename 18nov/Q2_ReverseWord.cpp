#include <iostream>
using namespace std;

const int MAX = 100;    
char charStack[MAX];    
int top = -1;           

void push(char c) {
    if (top < MAX - 1) {
        top++;
        charStack[top] = c;
    }
}


char pop() {
    if (top >= 0) {
        char c = charStack[top];
        top--;
        return c;
    }
    return '\0';       
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    for (int i = 0; i < (int)word.length(); i++) {
        push(word[i]);
    }

    cout << "\nOriginal word: " << word << "\n";
    cout << "Reversed word: ";

    while (top != -1) {
        cout << pop();
    }
    cout << "\n";

    return 0;
}
