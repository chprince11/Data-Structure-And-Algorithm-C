#include <stdio.h>
int main(int argc, char *argv[])
{
    // int salary = 30;
    // int salary2 = 32;
    // int salary3 = 45;
    // char name[] = "John";
    // char name2[] = "Tom";
    // char name3[] = "John";

    // printf("%s, Salary: %d\n", name, salary);
    // printf("%s, Salary: %d\n", name2, salary2);
    // printf("%s, Salary: %d\n", name3, salary3);

    int salary[] = {30,32,45};
    int size = sizeof(salary) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        printf("Salary: %d\n" , salary[i]);
    }

    return 0;
}
