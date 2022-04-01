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

const int MAX_QUEUE_SIZE = 12;

template <class data_type>
class Queue {
    public:
        Queue();
        ~Queue();
        void Enqueue(data_type data);

        void Dequeue(data_type data);

        data_type Front();

        data_type Size();

        data_type IsEmpty();

        data_type IsFull();

        void PrintQueue()const;
        
    private:
        int currentSize;
        data_type QueueArr[MAX_QUEUE_SIZE];

};

/***********************************************************
 * 
 ***********************************************************/
template <class data_type>
Queue<data_type>::Queue(){
    this->currentSize = 0;
    std::cout << "\n\nQueue Class Working!!!\n\n";
}


/***********************************************************
 * 
 ***********************************************************/
template <class data_type>
Queue<data_type>::~Queue(){

}


/***********************************************************
 * 
 ***********************************************************/
template <class data_type>
void Queue<data_type>::Enqueue(data_type item){
    this->QueueArr[this->currentSize] = item;
    this->currentSize++;
}


/***********************************************************
 * 
 ***********************************************************/
template <class data_type>
void Queue<data_type>::Dequeue(data_type item){

}


/***********************************************************
 * 
 ***********************************************************/
template <class data_type>
data_type Queue<data_type>::Front(){

}


/***********************************************************
 * 
 ***********************************************************/
template <class data_type>
data_type Queue<data_type>::Size(){

}


/***********************************************************
 * 
 ***********************************************************/
template <class data_type>
data_type Queue<data_type>::IsEmpty(){

}


/***********************************************************
 * 
 ***********************************************************/
template <class data_type>
data_type Queue<data_type>::IsFull(){

}


/***********************************************************
 * 
 ***********************************************************/
template <class data_type>
void Queue<data_type>::PrintQueue()const{
    for(int i = 0; i < this->currentSize; i++){
        std::cout << this->QueueArr[i] << std::endl;
    }
}

#endif