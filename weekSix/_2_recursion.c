#include <stdio.h>

void bubbleSort(int[], int, int,int);
void swap(int[], int);

int main(int argc, char* argv[])
{
    int array[] = {58,13,67,3,45,70,22};

    int size = sizeof(array) / sizeof(int);

    bubbleSort(array, 0, size,0);
    // create a function called print

    print(array, 0, size);
    
    return 0;
}

// print function

void print(int array[], int index, int size){
    if (index < size)
    {
        printf("%d", array[index]);
        // recursion
        print(array, index + 1, size);
    }
    else {
        printf("\n");
    }
    
}

void bubbleSort(int array[], int index, int size, int runs) {
    if( runs < size - 1 ) {
        if(index < size - 1) {
            if(array[index] > array[index + 1]) {
            swap(arrry,index);
        }
        if (index == size - 1 ) {
            index = -1;
            runs++;
        }
        bubbleSort(array, index + 1, size, runs);
    }
}
}

void swap(int array[], int index) {
    int tmp = array[index];
    array[index] = array[index + 1];
    array[index + 1] = tmp;
}

