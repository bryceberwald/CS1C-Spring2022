/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 7:30-9:50pm
 * ASSIGNMENT # :    08
 * DUE DATE     :    Monday (04/06/22) @ 11:59pm
 **************************************************************/

#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <string>

const int MAX_QUEUE_SIZE = 12;     // Variable used to determine max array size.

template <class data_type>         // Template for Queue class.

/***************************************************
 * Queue Class
 **************************************************/
class Queue {
    public:
        /**************************************************
        * Default Constructor
        * No Parameters
        **************************************************/
        Queue();

        /**************************************************
        * Non-Default Constructor
        * 1 Parameter (Queue Object passed by reference)
        **************************************************/
        Queue(Queue& copyQueue);

        /**************************************************
        * Destructor
        * No Parameters
        **************************************************/
        ~Queue();

        /**************************************************
        * This is the Queue class enqueuing function. A
        * queue is a LIFO data structure. This function
        * takes one parameter of a to be determined data
        * type. This function is of type void and does not
        * return anything.
        **************************************************/
        void Enqueue(data_type data);

        /**************************************************
        * This is the Queue class dequeuing function. A
        * queue is a LIFO data structure. This function
        * has no parameters and is of type void, so nothing
        * is returned.
        **************************************************/
        void Dequeue();

        /**************************************************
        * This is the Queue class function for returning
        * the front item in the queue. The Queue class uses
        * a template, so the determined data type for the
        * queue will be used for returning the front item.
        **************************************************/
        data_type Front()const;

        /**************************************************
        * This is the Queue class function for returning
        * the current size of the queue. This function is
        * of type integer and the same data type will be
        * returned.
        **************************************************/
        int Size()const;

        /**************************************************
        * This is the Queue class function for checking if
        * the queue is currently empty. This function is of
        * type boolean, true will be returned fort empty
        * and false will be returned otherwise.
        **************************************************/
        bool IsEmpty()const;

        /**************************************************
        * This is the Queue class function for checking if
        * the queue is currently full. This function is of
        * type boolean, true will be returned for full and
        * false will be returned otherwise.
        **************************************************/
        bool IsFull()const;

        /**************************************************
        * This is the Queue class function for printing all
        * items currently in the queue. This function is of
        * type void and nothing will be returned.
        **************************************************/
        void PrintQueue()const;

        /**************************************************
        * This is the Queue class function for getting a
        * queue value with the index being passed as the
        * parameter. This function will return the
        * determined data type for the array value.
        **************************************************/
        data_type getQueueArrayValue(int index)const;

    private:
        int currentSize;                      // Variable holds the current size of the queue/queueArr.
        int topIndex;                         // Variable holds the head-index of the queue.
        int bottomIndex;                      // Variable holds the tail-index of the queue.
        data_type QueueArr[MAX_QUEUE_SIZE];   // Array for holding all of the array items of Max Size of 12.
};


/***********************************************************
 * This is the default constructor for the Queue class. This
 * function will initialize the needed attributes for a
 * Queue.
 ***********************************************************/
template <class data_type>
Queue<data_type>::Queue(){
    this->currentSize = 0;
    this->topIndex = -1;
    this->bottomIndex = -1;
    std::cout << "\nQueue Class Template has been Initialized!\n";
}


/***********************************************************
 * This is the non-default copy constructor for the Queue
 * class. This constructor takes a Queue object as a parameter
 * being passed by reference to copy all of it's list elements
 * to the current queue.
 ***********************************************************/
template <class data_type>
Queue<data_type>::Queue(Queue& copyQueue){
    this->currentSize = copyQueue.Size();
    for(int i = 0; i < currentSize; i++){
        this->QueueArr[i] = copyQueue.getQueueArrayValue(i);
    }
}


/***********************************************************
 * This is the destructor for the queue class. This function
 * will be called when the queue class goes out of scope.
 ***********************************************************/
template <class data_type>
Queue<data_type>::~Queue(){

}


/***********************************************************
 * This is the Queue class function for adding a item to
 * the queue. A queue is a LIFO data structure, so we will be
 * adding to the end of the queue. This function is of type 
 * void and does not return anything.
 ***********************************************************/
template <class data_type>
void Queue<data_type>::Enqueue(data_type item){
    if(currentSize != MAX_QUEUE_SIZE){
        if(currentSize == 0){
            this->topIndex = 0;
            this->bottomIndex = 0;
            this->QueueArr[bottomIndex] = item;
        } else {
            this->bottomIndex = this->currentSize;
            this->QueueArr[bottomIndex] = item;
        }
        this->currentSize++;
    }
}


/***********************************************************
 * This is the Queue class function for removing an item
 * from the queue. A queue is a LIFO data structure, and
 * the item will be removed from the front. This function is
 * of type void and does not return anything.
 ***********************************************************/
template <class data_type>
void Queue<data_type>::Dequeue(){
    if(this->currentSize != 0){
        for(int i = 0; i < this->currentSize; i++){
            this->QueueArr[i] = this->QueueArr[i+1];
        }
        this->currentSize--;

        if(this->currentSize == 0){
            topIndex = -1;
            bottomIndex = -1;
        }
    }
}


/***********************************************************
 * This is the Queue class function for returning the front
 * item of the queue of to be determined data type thanks to
 * the class template. 
 ***********************************************************/
template <class data_type>
data_type Queue<data_type>::Front()const{
    if(currentSize != 0){
        return this->QueueArr[topIndex];
    }
}


/***********************************************************
 * This is the Queue class function for returning the current
 * size of the array. This function is of type integer and
 * the same data type will be returned.
 ***********************************************************/
template <class data_type>
int Queue<data_type>::Size()const{
    return this->currentSize;
}


/***********************************************************
 * This is the Queue class function for checking if the 
 * queue is currently empty. This function is of type bool
 * and will return true for a empty queue and will return
 * false when the queue is not empty.
 ***********************************************************/
template <class data_type>
bool Queue<data_type>::IsEmpty()const{
    if(this->currentSize == 0){
        return true;
    } else {
        return false;
    }
}


/***********************************************************
 * This is the Queue class function for checking if the queue
 * is currently full or not. This function is of type bool
 * and will return true if the queue is full and false
 * otherise.
 ***********************************************************/
template <class data_type>
bool Queue<data_type>::IsFull()const{
    if(this->currentSize == MAX_QUEUE_SIZE){
        return true;
    } else {
        return false;
    }
}


/***********************************************************
 * This is the Queue class function for printing all the
 * current queue values to the console. This function is of
 * type void and nothing is returned.
 ***********************************************************/
template <class data_type>
void Queue<data_type>::PrintQueue()const{
    std::cout << "\nCURRENT QUEUE: \n";
    for(int i = 0; i < this->currentSize; i++){
        std::cout << this->QueueArr[i] << std::endl;
    }
}


/***********************************************************
 * This is the Queue class function for getting a value from
 * the queue at the index being passed as the parameter.
 * This function is of a to be determined data type, which
 * will be returned for the queue's value to be obtained.
 ***********************************************************/
template <class data_type>
data_type Queue<data_type>::getQueueArrayValue(int index) const{
    return this->QueueArr[index];
}


#endif