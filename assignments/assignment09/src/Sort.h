/*************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 7:30-9:50pm
 * ASSIGNMENT # :    09
 * DUE DATE     :    Friday (04/22/22) @ 11:59pm
 *************************************************************/

#ifndef SORT_H
#define SORT_H

#include <iostream>
#include <string>
using namespace std;

// Function prototypes below...
void MergeSort(int firstIndex, int lastIndex, int* array, bool root);
void QuickSort(int firstIndex,int lastIndex, int* array, bool root);
void PrintArray(int* array, int size);

#endif