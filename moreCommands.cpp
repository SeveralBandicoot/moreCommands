/*

More Commands

11/11/24

@AJ Enrique Arguello

Objectives: 
  Research the pre-built Functions( ) available with the STL Queue

  List 4 commands and explain what they do

  Create an example and demonstrate your commands

*/

#include <iostream>
#include <queue>
using namespace std;

void swapQueue();
void queueEmplace();
void queueBack();
void queuePush();

int main() {
    int userChoice;

    cout << "Select which support function you would like to see an example of:\n";
    cout << "1.) queue.swap()" << endl;
    cout << "2.) queue.emplace()" << endl;
    cout << "3.) queue.back()" << endl;
    cout << "4.) queue.push()" << endl;
    cout << "Enter choice: ";
    cin >> userChoice;

    switch (userChoice) {
        case 1:
            swapQueue();
            break;
        case 2:
            queueEmplace();
            break;
        case 3:
            queueBack();
            break;
        case 4:
            queuePush();
            break;
        default:
            cout << "Invalid input" << endl;
            break;
    }

    return 0;
}

void swapQueue() {
    queue<int> sQueue1;
    queue<int> sQueue2;

    cout << "\nSwapping queues:\n";

    sQueue1.push(2);
    sQueue1.push(4);
    sQueue1.push(6);
    sQueue1.push(8);

    sQueue2.push(5);
    sQueue2.push(10);
    sQueue2.push(15);
    sQueue2.push(20);

    cout << "Before swap:\nQueue 1: ";
    queue<int> tempQueue1 = sQueue1;
    while (!tempQueue1.empty()) {
        cout << tempQueue1.front() << " ";
        tempQueue1.pop();
    }
    cout << "\nQueue 2: ";
    queue<int> tempQueue2 = sQueue2;
    while (!tempQueue2.empty()) {
        cout << tempQueue2.front() << " ";
        tempQueue2.pop();
    }

    swap(sQueue1, sQueue2);

    cout << "\n\nAfter swap:\nQueue 1: ";
    while (!sQueue1.empty()) {
        cout << sQueue1.front() << " ";
        sQueue1.pop();
    }
    cout << "\nQueue 2: ";
    while (!sQueue2.empty()) {
        cout << sQueue2.front() << " ";
        sQueue2.pop();
    }
    cout << endl;
}

void queueEmplace() {
    queue<int> myQueue;

    cout << "\nUsing queue.emplace() to add elements:\n";

    // initial state of the queue
    cout << "Queue before emplacing elements: ";
    if (myQueue.empty()) {
        cout << "Empty";
    }
    cout << endl;

    // emplacing elements
    myQueue.emplace(10);
    myQueue.emplace(20);
    myQueue.emplace(30);

    // state of the queue after emplacing elements
    cout << "Queue after emplacing elements: ";
    queue<int> tempQueue = myQueue;
    while (!tempQueue.empty()) {
        cout << tempQueue.front() << " ";
        tempQueue.pop();
    }
    cout << endl;
}

void queueBack() {
    queue<int> myQueue;
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);
    myQueue.push(4);

    cout << "\nUsing queue.back():\n";
    cout << "Elements in the queue: ";
    queue<int> tempQueue = myQueue;
    while (!tempQueue.empty()) {
        cout << tempQueue.front() << " ";
        tempQueue.pop();
    }

    cout << "\nLast element (back of the queue): " << myQueue.back() << endl;
}

void queuePush() {
    queue<int> myQueue;

    cout << "\nUsing queue.push() to add elements:\n";

    // initial state of the queue
    cout << "Queue before pushing elements: ";
    if (myQueue.empty()) {
        cout << "Empty";
    }
    cout << endl;

    // pushing elements
    myQueue.push(100);
    myQueue.push(200);
    myQueue.push(300);

    // state of the queue after pushing elements
    cout << "Queue after pushing elements: ";
    queue<int> tempQueue = myQueue;
    while (!tempQueue.empty()) {
        cout << tempQueue.front() << " ";
        tempQueue.pop();
    }
    cout << endl;
}
