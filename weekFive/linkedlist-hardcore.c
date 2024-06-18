#include <stdio.h>
#include <string.h>

typedef struct person_def{
    char name[20]; // charater array = string
    int age;
    struct person_def *next;
} Person;

typedef struct {
    Person *head;
    Person *tail;
    int nodeCount;
}List;

int main(int argc, char* argv[])
{
    List partyList; // creating object
    partyList.head = partyList.tail = NULL;
    partyList.nodeCount = 0;

    Person p1;
    strcpy(p1.name, "Tom"); // include this lib string.h
    p1.age = 20; 
    p1.next = NULL; 

    partyList.head = &p1;
    partyList.tail = &p1;
    partyList.nodeCount++;

    Person p2;
    strcpy(p2.name, "John"); 
    p2.age = 18; 
    p2.next = NULL; 

    p1.next = &p2;
    partyList.tail = &p2;
    partyList.nodeCount++;

    Person p3;
    strcpy(p3.name, "Ann"); 
    p3.age = 25; 
    p3.next = NULL; 

    p2.next = &p3;
    partyList.tail = &p3;
    partyList.nodeCount++;

    printf("Number of people in my list : %d\n", partyList.nodeCount);
    printf("The first person is : %s\n", partyList.head->name);
    printf("The second person is : %s\n", partyList.head->next->name);
    printf("The last person is : %s\n", partyList.tail->name);

    return 0;
}
