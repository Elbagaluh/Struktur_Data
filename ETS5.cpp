#include <iostream>
using namespace std;

#define MAX 10

string queueArr[MAX];
int front = -1, rear = -1;

bool isFull() {
    return rear == MAX - 1;
}

bool isEmpty() {
    return front == -1 || front > rear;
}

void enqueue(string data) {
    if (isFull()) {
        cout << "Antrian penuh\n";
        return;
    }
    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear++;
    }
    queueArr[rear] = data;
}

void dequeue() {
    if (isEmpty()) {
        cout << "Antrian kosong\n";
        return;
    }
    cout << "Dilayani: " << queueArr[front] << endl;
    front++;
    if (front > rear) {
        front = rear = -1;
    }
}

void display() {
    if (isEmpty()) {
        cout << "Antrian kosong\n";
        return;
    }
    for (int i = front; i <= rear; i++) {
        cout << queueArr[i] << " ";
    }
    cout << endl;
}
void peekFront() {
    if (isEmpty()) {
        cout << "Tidak ada mahasiswa yang sedang dilayani\n";
    } else {
        cout << "Sedang dilayani: " << queueArr[front] << endl;
    }
}

void peekRear() {
    if (isEmpty()) {
        cout << "Tidak ada antrian\n";
    } else {
        cout << "Mahasiswa terakhir: " << queueArr[rear] << endl;
    }
}

int main() {
    enqueue("A");
    enqueue("B");
    enqueue("C");
    dequeue();
    enqueue("D");
    cout << "Antrian saat ini: ";
    display();

    return 0;
}
