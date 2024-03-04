/*====================== Pointers ======================*/

/*
    Pointers:
    A variable that store the memory address of another variable.

            Syntax:
                int age = 22;
                int*ptr = &age;
                int_age = *ptr;

        Delclaring Pointers:
            int *ptr;
            char*ptr;
            float*ptr;

        Format Specifier:
            printf("%p",&age);  // %p --> pointer address
            printf("%p",&ptr);
            printf("%p",&ptr);

        Pointer to Pointer:
                    |
          A variable that stores the memory address of another pointer

          Syntax:
                int**pptr;
                char**pptr;
                float**pptr;

    Pointers in Function Call:
            /                \
       Call by value      Call by Reference

       we pass value of       We pass address of variable as argument
       variable as
        argument
*/

/**/
#include <stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("%d\n", _age);
    // address
    printf("%p\n", &age);
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
    // data
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));

    int number = 4;
    // call by value
    square(number);
    printf("n is : %d\n", number);
    // call by reference
    _square(&number);
    printf("n is : %d\n", number);
    return 0;
}
void swap(int a, int b)
{
    int t = a;
    a = b;
    b = a;
}
void _swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = *a;
}

/*================ Practice ================*/