/*====================== Arrays ======================*/

/*
C Language Tutorial(Basic to Advanced)
        Topics to be covered : Installation
                               +
                               Setup
                               Chapter 1 -
                               Variables,
    Data types + Input / Output Chapter 2 - Instructions &Operators Chapter 3 - Conditional Statements Chapter 4 - Loop Control Statements Chapter 5 - Functions &Recursion Chapter 6 - Pointers Chapter 7 - Arrays Chapter 8 - Strings Chapter 9 - Structures Chapter 10 - File I / O Chapter 11 - Dynamic Memory Allocation Arrays(Chapter 7) 1. Syntax
*/

/*
#include <stdio.h>
int main()
{
    int marks[3];
    printf("physics : ");
    scanf("%d", &marks[0]);
    printf("chem : ");
    scanf("%d", &marks[1]);
    printf("math : ");
    scanf("%d", &marks[2]);
    printf("physics = %d, ", marks[0]); // physics
    printf("chem = %d, ", marks[1]);    // chem
    printf("math = %d \n", marks[2]);   // math
    return 0;
}
*/

/*================ Pointer Arithmetic ================*/

/*
#include <stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;
    int _age = 25;
    int *_ptr = &_age;
    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u\n", ptr);
    ptr = ptr - _ptr;
    printf("%u\n", ptr);
    ptr = &_age;
    printf("%d\n", ptr == _ptr);
    return 0;
}
*/

/*================ Accessing an Array ================*/

/*
#include <stdio.h>
void printNumbers(int *arr, int n);
void _printNumbers(int arr[], int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    printNumbers(arr, 6);
    printNumbers(arr, 6);
    return 0;
}
void printNumbers(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d : %d\n", i, arr[i]);
    }
}
void _printNumbers(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d : %d\n", i, arr[i]);
    }
}
*/