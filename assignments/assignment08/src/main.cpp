/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 7:30-9:50pm
 * ASSIGNMENT # :    08
 * DUE DATE     :    Monday (04/06/22) @ 11:59pm
 **************************************************************/

#include "Functions.h"
#include "Queue.h"
#include <queue>

int main(void) {

    // Call function to print the class header to the console.
    PrintClassHeader(cout);

    // STL Queue Template Example.
    std::queue<int> STLqueue;
    STLqueue.push(10);
    STLqueue.push(10);
    STLqueue.push(10);
    cout << "\nThe size of the STL Queue is: " << STLqueue.size() << endl;

    // Create a new Queue of Char data type.
    Queue <char>QueueChar;

    // Test IsEmpty() class function. (PASS CONDITION)
    if(QueueChar.IsEmpty()){
        cout << "\nQueue is EMPTY!!";
        cout << "\nThe Current size is: " << QueueChar.Size() << endl;
    } else {
        cout << "\nQueue is NOT EMPTY!";
        cout << "\nThe Current size is: " << QueueChar.Size() << endl;
    }

    // Char Enqueue's (6 Total)
    QueueChar.Enqueue('a');
    QueueChar.PrintQueue();

    // Test IsEmpty() class function. (FAIL CONDITION)
    if(QueueChar.IsEmpty()){
        cout << "\nQueue is EMPTY!!";
        cout << "\nThe Current size is: " << QueueChar.Size() << endl;
    } else {
        cout << "\nQueue is NOT EMPTY!";
        cout << "\nThe Current size is: " << QueueChar.Size() << endl;
    }

    QueueChar.Enqueue('b');
    QueueChar.PrintQueue();

    // Display the front most item in queue.
    cout << "\nThe Front item is: " << QueueChar.Front() << endl;

    QueueChar.Enqueue('c');
    QueueChar.PrintQueue();
    QueueChar.Enqueue('d');
    QueueChar.PrintQueue();
    QueueChar.Enqueue('e');
    QueueChar.PrintQueue();
    QueueChar.Enqueue('f');
    QueueChar.PrintQueue();

    // Char Dequeue's (3 Total)
    QueueChar.Dequeue();
    QueueChar.PrintQueue();
    QueueChar.Dequeue();
    QueueChar.PrintQueue();
    QueueChar.Dequeue();
    QueueChar.PrintQueue();

    // Char Enqueue's (5 Total)
    QueueChar.Enqueue('g');
    QueueChar.PrintQueue();
    QueueChar.Enqueue('h');
    QueueChar.PrintQueue();
    QueueChar.Enqueue('i');
    QueueChar.PrintQueue();
    QueueChar.Enqueue('j');
    QueueChar.PrintQueue();
    QueueChar.Enqueue('k');
    QueueChar.PrintQueue();

    // Char Dequeue's (6 Total)
    QueueChar.Dequeue();
    QueueChar.PrintQueue();
    QueueChar.Dequeue();
    QueueChar.PrintQueue();
    QueueChar.Dequeue();
    QueueChar.PrintQueue();
    QueueChar.Dequeue();
    QueueChar.PrintQueue();
    QueueChar.Dequeue();
    QueueChar.PrintQueue();
    QueueChar.Dequeue();

    // Create a new Queue of Integer data type.
    Queue <int>QueueInt;

    // Test IsEmpty() class function. (PASS CONDITION)
    if(QueueInt.IsEmpty()){
        cout << "\nQueue is EMPTY!!";
        cout << "\nThe Current size is: " << QueueInt.Size() << endl;
    } else {
        cout << "\nQueue is NOT EMPTY!";
        cout << "\nThe Current size is: " << QueueInt.Size() << endl;
    }

    // Int Enqueue's (6 Total)
    QueueInt.Enqueue(1);
    QueueInt.PrintQueue();

    // Test IsEmpty() class function. (FAIL CONDITION)
    if(QueueInt.IsEmpty()){
        cout << "\nQueue is EMPTY!!";
        cout << "\nThe Current size is: " << QueueInt.Size() << endl;
    } else {
        cout << "\nQueue is NOT EMPTY!";
        cout << "\nThe Current size is: " << QueueInt.Size() << endl;
    }

    QueueInt.Enqueue(2);
    QueueInt.PrintQueue();

    // Display the front most item in queue.
    cout << "\nThe Front item is: " << QueueInt.Front() << endl;

    QueueInt.Enqueue(3);
    QueueInt.PrintQueue();
    QueueInt.Enqueue(4);
    QueueInt.PrintQueue();
    QueueInt.Enqueue(5);
    QueueInt.PrintQueue();
    QueueInt.Enqueue(6);
    QueueInt.PrintQueue();

    // Int Dequeue's (4 Total)
    QueueInt.Dequeue();
    QueueInt.PrintQueue();
    QueueInt.Dequeue();
    QueueInt.PrintQueue();
    QueueInt.Dequeue();
    QueueInt.PrintQueue();
    QueueInt.Dequeue();
    QueueInt.PrintQueue();

    // Int Enqueue's (3 Total)
    QueueInt.Enqueue(7);
    QueueInt.PrintQueue();
    QueueInt.Enqueue(8);
    QueueInt.PrintQueue();
    QueueInt.Enqueue(9);
    QueueInt.PrintQueue();

    // Int Dequeue's (3 Total)
    QueueInt.Dequeue();
    QueueInt.PrintQueue();
    QueueInt.Dequeue();
    QueueInt.PrintQueue();
    QueueInt.Dequeue();
    QueueInt.PrintQueue();
    
    // Create a new Queue of Double data type.
    Queue <double>QueueDouble;

    // Test IsEmpty() class function. (PASS CONDITION)
    if(QueueDouble.IsEmpty()){
        cout << "\nQueue is EMPTY!!";
        cout << "\nThe Current size is: " << QueueDouble.Size() << endl;
    } else {
        cout << "\nQueue is NOT EMPTY!";
        cout << "\nThe Current size is: " << QueueDouble.Size() << endl;
    }

    // Double Enqueue's (7 Total)
    QueueDouble.Enqueue(1.1);
    QueueDouble.PrintQueue();

    // Test IsEmpty() class function. (FAIL CONDITION)
    if(QueueDouble.IsEmpty()){
        cout << "\nQueue is EMPTY!!";
        cout << "\nThe Current size is: " << QueueDouble.Size() << endl;
    } else {
        cout << "\nQueue is NOT EMPTY!";
        cout << "\nThe Current size is: " << QueueDouble.Size() << endl;
    }

    QueueDouble.Enqueue(2.1);
    QueueDouble.PrintQueue();

    // Display the front most item in queue.
    cout << "\nThe Front item is: " << QueueDouble.Front() << endl;

    QueueDouble.Enqueue(3.3);
    QueueDouble.PrintQueue();
    QueueDouble.Enqueue(4.4);
    QueueDouble.PrintQueue();
    QueueDouble.Enqueue(5.5);
    QueueDouble.PrintQueue();
    QueueDouble.Enqueue(6.6);
    QueueDouble.PrintQueue();
    QueueDouble.Enqueue(7.7);
    QueueDouble.PrintQueue();

    // Double Dequeue's (1 Total)
    QueueDouble.Dequeue();
    QueueDouble.PrintQueue();

    // Double Enqueue's (2 Total)
    QueueDouble.Enqueue(8.8);
    QueueDouble.PrintQueue();
    QueueDouble.Enqueue(9.9);
    QueueDouble.PrintQueue();

    // Double Dequeue's (5 Total)
    QueueDouble.Dequeue();
    QueueDouble.PrintQueue();
    QueueDouble.Dequeue();
    QueueDouble.PrintQueue();
    QueueDouble.Dequeue();
    QueueDouble.PrintQueue();
    QueueDouble.Dequeue();
    QueueDouble.PrintQueue();
    QueueDouble.Dequeue();
    QueueDouble.PrintQueue();

    // Check if Queue is full using IsFull() function. (FAIL CONDITION)
    if(QueueDouble.IsFull()){
        cout << "\nQueue is FULL!!";
        cout << "\nThe Current size is: " << QueueDouble.Size();
    } else {
        cout << "\nQueue is NOT FULL!";
        cout << "\nThe Current size is: " << QueueDouble.Size();
    }

    cout << "\n\nChecking IsFull() Queue class function...\n";

    QueueDouble.Enqueue(999);
    QueueDouble.PrintQueue();
    QueueDouble.Enqueue(999);
    QueueDouble.PrintQueue();
    QueueDouble.Enqueue(999);
    QueueDouble.PrintQueue();
    QueueDouble.Enqueue(999);
    QueueDouble.PrintQueue();
    QueueDouble.Enqueue(999);
    QueueDouble.PrintQueue();
    QueueDouble.Enqueue(999);
    QueueDouble.PrintQueue();
    QueueDouble.Enqueue(999);
    QueueDouble.PrintQueue();
    QueueDouble.Enqueue(999);
    QueueDouble.PrintQueue();
    QueueDouble.Enqueue(999);
    QueueDouble.PrintQueue();

    // Check if Queue is full using IsFull() function. (PASS CONDITION)
    if(QueueDouble.IsFull()){
        cout << "\nQueue is FULL!!";
        cout << "\nThe Current size is: " << QueueDouble.Size() << endl;
    } else {
        cout << "\nQueue is NOT FULL!";
        cout << "\nThe Current size is: " << QueueDouble.Size() << endl;
    }

    // Testing Copy-Constructor with Double Type Queue.
    cout << "\n\nTesting Copy Constructor for Queue Class...\n";
    Queue <double> newQueueDouble(QueueDouble);
    newQueueDouble.PrintQueue();

    return 0;
}