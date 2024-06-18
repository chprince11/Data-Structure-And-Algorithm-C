#include <stdio.h>

void bubbleSort(int[], int);
void swap(int[], int);

int main(int argc, char* argv[])
{
    int array[] = {58,13,67,3,45,70,22};
    int size = sizeof(array) / sizeof(int);

    bubbleSort(array, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
    
    return 0;
}

void bubbleSort(int array[], int size) {
    for (int j = 0; j < size - 1; j++)
    {
    //
    for (int i = 0; i < size - 1; i++)
    {
        if (array[i] > array[i + 1]) {
            swap(array, i);
        }
    }
    //
}
}

void swap(int array[], int index) {
    int tmp = array[index];
    array[index] = array[index + 1];
    array[index + 1] = tmp;
}
