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

    PrintClassHeader(cout);

    std::queue<int> STLqueue;

    STLqueue.push(10);
    STLqueue.push(10);
    STLqueue.push(10);
    cout << STLqueue.size();

    Queue <int>myQueue;

    myQueue.Enqueue(7);
    myQueue.Enqueue(77);
    myQueue.Enqueue(777);
    myQueue.PrintQueue();

    return 0;
}