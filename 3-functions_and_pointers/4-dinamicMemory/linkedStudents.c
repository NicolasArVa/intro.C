#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student * end, struct student * newStudptr);
void printStudents(struct student *start);
void freeStudents(struct student *start);
/* add any other prototypes as needed */

int main(void) {
    struct student *start, *newStudptr, *end;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);

    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printStudents(start);
    freeStudents(start);

    return 0;
}

/* Place your function definitions here. Be sure to include the definitions for 
   createStudent(), append(), printStudents() as well as any other functions you 
   created for the previous tasks. */

struct student *createStudent(char studentName[], int studentAge) {
    struct student *p;

    p = (struct student *)malloc(sizeof(struct student));
    strcpy(p->name, studentName);
    p->age = studentAge;
    p->next = NULL;

    return p;
}

struct student *append(struct student * end, struct student * newStudptr) {
    end->next = newStudptr;
    end =newStudptr;
    return end;
}

void printStudents(struct student *start) {
    struct student *p = start;

    while (p!=NULL) {
        printf("%s is %d years old.\n", p->name, p->age);
        p = p->next;
    }
}

void freeStudents(struct student *start) {
    struct student *p = start;

    while (p!=NULL) {
        start = p;
        free(start);
        p = p->next;
    }
}