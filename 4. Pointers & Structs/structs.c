#include <stdio.h>

typedef struct student {
    int ID;
    char name[32];
    char address[32];
} student;

student std[10];

void add(int index)
{
    student s;
    printf("Please enter id: ");
    scanf("%d", &(s.ID));
    printf("Please enter name: ");
    fflush(stdin);
    gets(s.name);
    printf("Please enter address: ");
    fflush(stdin);
    gets(s.address);

    std[index] = s;
}

void print(int index)
{
    printf("Student #%d\n", index);
    printf("ID : %d\n", std[index].ID);
    printf("Name: %s\n", std[index].name);
    printf("Address: %s\n\n", std[index].address);
}

int main()
{
    add(0);
    add(6);
    print(6);
    print(0);

    return 0;
}
