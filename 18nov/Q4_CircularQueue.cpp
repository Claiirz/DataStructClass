#include <iostream>
using namespace std;

const int MAX = 5;
int cQueue[MAX];
int frontidx = 0;
int rearidx = -1;
int itemcount = 0;

bool isFull(){
    return itemcount == MAX;
}

bool isEmpty(){
    return itemcount == 0;
}

void enqueue(int val){
    if (isFull()) {
        cout << "queue overflow\n";
    } else {
        rearidx = (rearidx + 1) % MAX;
        cQueue[rearidx] = val;
        itemcount++;
    }
}

void dequeue(){
    if (isEmpty()){
        cout << "queue underflow\n";
    } else {
        frontidx = (frontidx + 1) % MAX;
        itemcount--;
    }
}

void display(){
    if(isEmpty()){
        cout << "queue underflow\n";
    } else {
        cout << "Queue: ";
        for(int i = 0; i < itemcount; i++){
            cout << cQueue[(frontidx + i) % MAX] << " ";
        }
        cout << "\n";
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    dequeue();
    dequeue();

    enqueue(60);
    enqueue(70);

    display();

    return 0;
};
