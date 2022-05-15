/*************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 7:30-9:50pm
 * ASSIGNMENT # :    09
 * DUE DATE     :    Friday (04/22/22) @ 11:59pm
 *************************************************************/

#include "Sort.h"

/*************************************************************
 * This function is for merge sorting a integer array. This
 * function will also calculate the total number of comparisons
 * and assignments for the root calling function. This function
 * is of type void and does not return anything.
 *************************************************************/
void MergeSort(int firstIndex, int lastIndex, int* array, bool root){
    
    int assignments = 0;
    int comparisons = 0;
	
    int aux[100] = {0};
	
	comparisons++;

	if (lastIndex <= firstIndex){
		return;
    }
	
	assignments++;

	int mid = (firstIndex + lastIndex) / 2;
	
	MergeSort(firstIndex, mid, array, false);

	MergeSort(mid + 1, lastIndex, array, false);
	
	assignments++;

	int left = firstIndex;
	
	assignments++;

	int right = mid + 1;

	comparisons++;

	for (int i = firstIndex; i <= lastIndex; i++){
		if (left == mid + 1){
			comparisons++;
			assignments++;
			aux[i] = array[right];
			right++;
	    } else if (right == lastIndex + 1){
			comparisons += 2;
			assignments++;
			aux[i] = array[left];
			left++;
	    } else if (array[left] < array[right]){
			comparisons += 3;
			assignments++;
			aux[i] = array[left];
			left++;
		} else {
			comparisons += 4;
			assignments++;
			aux[i] = array[right];
			right++;
	    }
	}
	for (int i = firstIndex; i <= lastIndex; i++){
		assignments++;
		array[i] = aux[i];	
	}
	
	if (root){
		printf("\nMerge-Sort did %u assignments and %u comparisons!\n", assignments, comparisons);	
		assignments = 0;
		comparisons = 0;
	}
}


/*************************************************************
 * This function is for Quick Sorting a integer array using
 * the predefined quicking sorting method approach. This
 * function will also calculate the total number of comparisons
 * and assignments for the root calling function. This function 
 * is of type void and does not return anything.
 *************************************************************/
void QuickSort(int firstIndex,int lastIndex, int* array, bool root){
    
    int assignments = 0;
    int comparisons = 0;
    int i, j, pivot, temp;

    comparisons++;

    if (firstIndex < lastIndex){
        pivot = firstIndex;
        i = firstIndex;
        j = lastIndex;
        assignments += 3;
        
        while (i < j){
            comparisons++;
            while (array[i] <= array[pivot] && i < lastIndex){
                comparisons++;
                i++;
            }
            while (array[j] > array[pivot]){
                comparisons++;
                j--;
            }
            comparisons++;
            if (i < j){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                assignments += 3;
            }
        }

        temp = array[pivot];
        array[pivot] = array[j];
        array[j] = temp;
        assignments += 3;

        QuickSort(firstIndex, j - 1, array, false);
        QuickSort(j + 1, lastIndex, array, false);
    }
   
	if (root){
		printf("\nQuick-Sort did %u assignments and %u comparisons!\n", assignments, comparisons);	
		assignments = 0;
		comparisons = 0;
	}
}


/*************************************************************
 * This is the function for printing out the array values for
 * the array passed to the function. This function will display
 * all array values to the console neatly. This function is of
 * type void and does not return anything.
 *************************************************************/
void PrintArray(int* array, int size){
    cout << endl;
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
        if(i % 10 == 0 && i != 0){
            cout << endl;
        }
    }
    cout << endl;
}

