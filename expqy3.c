#include <stdio.h>
int main()
{
    char name[100];
    int age;
    printf("Enter your name: ");
    scanf("%c", &name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("%c\n", name);
    printf("%d\n", age);
}