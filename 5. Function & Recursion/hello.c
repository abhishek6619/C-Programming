/*====================== Function & Recursion ======================*/

/*
    Function:- Block of code that performs a particular task.
        Take Argument -> Do Work -> Return Result

        It can be used multiple times
        increase code reusability

        Syntax1:
            Function Prototype/Declaration

            void printHello();
              |
            it did,n return

        Syntax2:
            Function Definition

            void printHello() {
                printf("Hello");
            }

        Syntax3:
            Function Cell

            int main() {
                printHello();
                return 0;
            }

        Properties:
                1. Execution always starts from the main
                2. A function gets called directly or indirectly from the main
                3. There can be multiple functions in a program

        Function Types:
                1. Library function - Special functions inbuilt in c  scanf(), printf()
                2. User-defined - declared & defined by the programmer

        Passing Argument:
            functions can take value & give some value.
                           /                       \
                        parameter                return value

                    void printHello();
                    void printTable(int n);
                    int sum(int a,int b);
                Note:
                    1. Function can only return one value at a time
                    2. Changes to parameters in the function don't change the values in the calling function.

    Recursion:- When a function calls itself, it's called recursion
*/

/*
#include <stdio.h>

void printHello(); // declaration/prototype
int sum(int a, int b);
void printTable(int n);
void calculateprice(float value);

int main()
{
    printHello(); // function call
    printHello();
    printHello();

    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    int s = sum(a, b);
    printf("sum = %d : ", s);

    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printTable(n); // argument or // actual parameter

    float value = 100.0;
    calculateprice(value);
    printf("value = %f\n", value);

    <------ or ------>

    float value;
    printf("Enter value: ");
    scanf("%f", &value);
    calculateprice(value);
    return 0;
}

    <------ function definition ------>

void calculateprice(float value)
{
    value = value + (0.18 * value);
    printf("Final Price = : %f\n", value);
}
void printHello()
{
    printf("Hello !\n");
    printf("My name is Abhishek\n");
}
int sum(int x, int y)
{
    return x + y;
}
void printTable(int n) // parameter or // formal parameter
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i * n);
    }
}
*/

/*================ Practice ================*/

// Ques1: Write 2 functions -one to print "Hello" & second to print "good bye".

/*
#include <stdio.h>
void printHello();
void printGoodbye();

int main()
{
    printHello();
    printGoodbye();
    printHello();
    return 0;
}

void printHello()
{
    printf("Hello World\n");
}
void printGoodbye()
{
    printf("Good Bye :)\n");
}
*/

// Ques2: Write a function that prints Namaste if user is Indian & Bonjour if the user is French.

/*
#include <stdio.h>
void namaste();
void bonjour();

int main()
{
    char ch;
    printf("Enter f for french & i for Indian : ");
    scanf("%c", &ch);

    if (ch == 'i')
    {
        namaste();
    }
    else
    {
        bonjour();
    }
    return 0;
}

void namaste()
{
    printf("Namaste\n");
}
void bonjour()
{
    printf("Bonjour\n");
}
*/

// Ques3: Use Library functions to calculate the square of a number given by user.

/*
#include <stdio.h>
#include <math.h>
int main()
{
    int n = 4;
    printf("%f", pow(n, 2));
}
*/

// Ques4: Write functions to calculate area of a square, a circle & a rectangle.

/*
#include <stdio.h>
#include <math.h>

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main()
{
    float a;
    float b;

    printf("Enter a: ");
    scanf("%f", &a);

    printf("Enter b: ");
    scanf("%f", &b);
    float rad;
    printf("Enter radius: ");
    scanf("%f", &rad);

    printf("Area of Square : %f\n", squareArea(a));
    printf("Area of Circle : %f\n", circleArea(rad));
    printf("Area of Rectangle : %f\n", rectangleArea(a, b));
    return 0;
}

float squareArea(float side)
{
    return side * side;
}
float circleArea(float rad)
{
    return 3.14 * rad * rad;
}
float rectangleArea(float a, float b)
{
    return a * b;
}
*/

// Ques5: print "Hello World" 5 times.

/*
#include <stdio.h>
void printHW(int count);

int main()
{
    printHW(5);
    return 0;
}
void printHW(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("Hello World\n");
    printHW(count-1);
}
*/

// Ques6: Sum of first n natural numbers.

/*
#include <stdio.h>
int sum(int n);

int main()
{
    printf("Sum is : %d", sum(5));
    return 0;
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sumNm1 = sum(n - 1); // sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
}
*/

// Ques7: Factorial of n

/*
#include <stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    printf("Factorial = : %d", factorial(n));
    return 0;
}
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int factnm1 = factorial(n - 1);
    int factn = factnm1 * n;
    return factn;
}
*/

// Ques8: Write a function to convert celsius to fahrenheit.

/*
#include <stdio.h>
float convertTemp(float celsius);

int main()
{
    float far = convertTemp(37);
    printf("far : %f", far);
    return 0;
}
float convertTemp(float celsius)
{
    int far = celsius * (9.0/5.0) + 32;
    return far;
}
*/

// Ques9: Write a function to calculate Percentage of a student from Marks in Science, Math & Sanskrit.

/*
#include <stdio.h>
int calcPercentage(int science, int math, int sanskrit);

int main()
{
    int sc = 98;
    int math = 95;
    int sanskrit = 99;

    printf("percentage is : %d", calcPercentage(sc, math, sanskrit));
    return 0;
}
int calcPercentage(int science, int math, int sanskrit)
{
    return ((science + math + sanskrit) / 3);
}
*/

// Ques10: Write a function to print n term of the fibonacci sequence.

/*
#include <stdio.h>
int fib(int n);

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Fibonacci Sequence = %d",fib(n));
    return 0;
}

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fibNm1 + fibNm2;
    printf("fib of %d is : %d\n", n, fibN);
    return fibN;
}
*/
