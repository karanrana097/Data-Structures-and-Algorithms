#include<stdio.h>

void display(int rno)
{
    printf("%d ", rno);
}

typedef struct
{
    int rollno;
    char name[20];
    int age;
}student;

int main()
{
    student stud={1,"Karan",15};
    display(stud.rollno);
}
