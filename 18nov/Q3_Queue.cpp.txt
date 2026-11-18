#include <iostream>
using namespace std;

const int MAX = 5;
int queueArr[MAX];
int frontidx = -1;
int rearidx = -1;

void enqueue(int val){
    if (rearidx == MAX -1){
        cout << "queue overflow!";
    } else {
        if (frontidx == -1){
            frontidx = 0;
        }
        rearidx++;
        queueArr[rearidx] = val;
        cout << val << " has been inserted.\n";
    }
}

void dequeue(){
    if (frontidx == -1 || frontidx > rearidx){
        cout << "queue underflow!\n";
    } else {
        cout << queueArr[frontidx] << " removed successfuklly.\n";
        frontidx++;

        if (frontidx > rearidx){
            frontidx = -1;
            rearidx = -1;
        }
    }
}

void fronts(){
    if (frontidx == -1 || frontidx > rearidx){
        cout << "queue empty.\n";
    } else {
        cout << "Front element: " << queueArr[frontidx] << "\n";
    }
}

void display(){
    if (frontidx == -1 || frontidx > rearidx){
        cout << "queue empty.\n";
    } else {
        cout << "Queue: ";
        for (int i = frontidx; i <= rearidx; i++){
            cout << queueArr[i] << " ";
        }
        cout << "\n";
    }
}

int main(){
    int pil, val;

    while (pil != 5){
        cout << "\n===== QUEUE MENU =====\n";
        cout << "1. Enqueue  2. Dequeue\n";
        cout << "3. Front  4. Display  5. Exit\n\n";
        cout << "Choose operation: ";
        cin >> pil;

        if (pil == 1){
            cout << "Enter value: ";
            cin >> val;
            enqueue(val);
        } else if (pil == 2) {
            dequeue();
        } else if (pil == 3) {
            fronts();
        } else if (pil == 4) {
            display();
        } else if (pil == 5) {
            cout << "exiting..\n";
        } else {
            cout << "invalid..\n";
        }
    }

    return 0;
};
