/*====================== Variables & Data Types ======================*/

/*
#include <stdio.h> // Preprocessor Directives
int main()
{
    printf("Hello World!\n");
    int number = 25;
    char star = '*';
    int age = 22;
    age = 24;
    float pi = 3.14;
    int a = 30;
    int A = 40;
    int _age = 22;
    int final_price = 100;
}

int sum()
{
    int age = 22;
    float pi = 3.14;
    char percentage = '%';
    return 0;
}
*/

/*================ Constants ================*/

/*
    Values that don't change(fixed)
    Types of constants are:
        1. Integer constants => 1,2,3,0,-1,-2
        2. Real constants => 1.0,2.0,3.0,0.0,-1.0,-2.0
        3. Character constants => 'a','b','A','#','&'
*/

/*================ Keywords ================*/

/*
    Reserved words that have special meaning to the compiler --> 32 Keywords in C

    Program Structure

    #include<stdio.h>
    int main() {
        printf("Hello World");
        return 0;
    }
*/

/*================ Comments ================*/

/*
    Lines that are not part of program are called comments
    Types of comments:
        1. Single line comment (//)
        2. Multi line comment

*/

// This code displays how data types work in C

/*
    This is a multi-line comment
    .ffgegc
*/

/*======== Output ========*/

/*
    Cases:
        1. integers => printf("age is %d", age);
        2. real number => printf("value of pi is %f", pi);
        3. character => printf("star looks like this %c", star);

*/

/*
# include <stdio.h>
int main() {
    printf("Hello C \n");
    printf("Hello C \n");
    printf("Hello C \n");
    printf("Hello C \n");
    int age = 22;
    printf("Age is %d \n", age);
    float pi = 3.14;
    printf("Value of pi is %f \n", pi);
    char star = '*';
    printf("Star looks like this %c \n", star);
    return 0;
}
*/

/*======== Input ========*/

/*
    scanf("%d", &age);

    Compilation: A computer program tbat translates C code into machine code.
    hello.c => C Compiler => a.exe(windows) or a.out(linux & macos)
*/

/*
#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Age is %d \n", age);
    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);

    printf("Enter b : ");
    scanf("%d", &b);

    int sum = a + b;
    printf("Sum is %d \n", sum);
    return 0;
}
*/

/*====================== Practices Questions ======================*/

// Ques 1. Write a program to calculate area of a square. (side is given)
/*
#include <stdio.h>
int main(){
    float side;
    printf("Enter the side of the square: ");
    scanf("%f", &side);
    printf("Area of the square is: %f", side*side);
    return 0;
}
*/

// Ques 2. Write a program to calculate area of a circle. (side is given)
/*
#include <stdio.h>
int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Area of the circle is: %f", 3.14*radius*radius);
}
*/