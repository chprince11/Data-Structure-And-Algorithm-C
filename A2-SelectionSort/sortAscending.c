#include<stdio.h>

// Function prototype

void printArray( int*, int, int);
void swap(int[], int , int);
void sortAscending(int*, int, int, int);

// main function

int main(int argc, char* argv[])
{
    int myArray[] = { 7, 12, 3, 20, 0, 1, 6 };

    int size = sizeof(myArray) / sizeof(int); 

    printf("Unsorted array!\n");
    printArray(myArray, 0, size);

    printf("\n");

    sortAscending(myArray, 0, size, 0);
    printf("Sorted array!\n");
    printArray(myArray, 0, size);

    return 0;
}

// printArray function to print the array with a resursive approach

void printArray( int *array, int index, int size) 
{
    if (index < size)
    {
        printf("%d ", array[index]);
        // resursion
        printArray(array, index + 1, size);
    }
    else 
    {
        printf("\n");
    }
}

// Swap function

void swap(int array[], int i, int indexOfMinNum) 
{
    // Swapping array[i] and array[indexOfMinNum]
    int temp = array[i];
    array[i] = array[indexOfMinNum];
    array[indexOfMinNum] = temp;
}

// findSmallest function

// Used a pointer with indexOfMinNum, cause in C, arguments are pass by Value, indexOfMinNum simply not copy the values

void findSmallest(int *array, int index, int size, int *indexOfMinNum) 
{
    for (int j = index + 1; j < size; j++)
        {
              if(array[j] < array[*indexOfMinNum]) 
            {
                *indexOfMinNum = j;
            }
        }
}

// sortAscending function
// Used selection sort algorithm with resursive approach

void sortAscending(int *array, int index, int size, int runs) 
{
    // printf("Sorting funtion is working!\n");

    // size = size of an array ( This wil run the loop n-1 times )

    if(runs < size - 1)
    {
        int indexOfMinNum = index;

        findSmallest(array, index, size, &indexOfMinNum);

        swap(array,index,indexOfMinNum);
       
        // resursion
        sortAscending(array, index + 1, size, runs + 1);

    }

}