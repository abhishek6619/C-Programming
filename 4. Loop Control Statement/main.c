/*====================== Loop Control Statement ======================*/

/*
    Loop Control Statements:- To repeat some parts of the program

    Types:
        1. for loop
        2. while loop
        3. do-while loop

        1. for loop :-
            Syntax:
                int i = 1;        i<=5;    i=i+1
                    |              |        |
            for(initialisation;condition;updation){
                statement
            }

            Increment Operator:-
                        1. ++i (pre increment)
                        2. i++ (post increment)

            Derement Operator:-
                        1. --i (pre decrement)
                        2. i-- (post decrement)

        2. While loop :-
            Syntax:
                       i<=5
                        |
                while(condition){
                    do something
                }

        3. Do-while loop :-
            Syntax:
                do{
                    do something
                } while(condition);

    Break Statement:-
                |
            exit the loop

    Continue Statement:-
                |
            skip to next iteration
*/

/*
#include <stdio.h>
int main()
{
    <------ for loop ------>

    printf("Hello Wolrd \n");
    printf("Hello Wolrd \n");
    printf("Hello Wolrd \n");
    printf("Hello Wolrd \n");
    printf("Hello Wolrd \n \n");

    iterator ; counter

    int i;
    for(i=1;i<=10;i++){
        printf("Hello Wolrd\n");
        printf("%d \n",i);
    }
    return 0;

    int i = 1;
    printf("%d \n", i--); // use, then increase
    printf("%d \n", i);

    printf("%d \n", --i);  // increase, then use
    printf("%d \n", i);

    for (float i = 1.0; i <= 5.0; i++)
    {
        printf("%f\n", i);
    }

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c\n", ch);
    }

    for (int i = 1;; i++)
    {
        printf("Hello World\n");
    }

    <------ while loop ------>

    int i=1;
    while(i<=5)
    {
        printf("Hello World\n");
        i++;
    }

    <------ Do-while loop ------>

    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    <------ Break Statement ------>

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            break;
        }
        printf("%d\n", i);
    }
    printf("end");

    <------ Continue Statement ------>

    for (int i=1; i<=5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        printf("%d \n", i);
    }

    return 0;
}
*/

/*================ Practice ================*/

// Ques1: Print the Numbers from 0 to 10 using for loop?

/*
#include <stdio.h>
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        printf("%d\n", i);
    }
}
*/

// Ques2: Print the numbers from 0 to n, if n is given by user.

/*
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    int i = 0;
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
*/

// Ques3: Print the sum of first n Natural numbers. Also, print them in reverse.

/*
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1, j = n; i <= n && j >= 1; i++,j--)
    {
        sum = sum + i;
        printf("%d\n", j);
    }
    printf("Sum is %d", sum);
    return 0;
}
*/

// Ques4: Print the table of a number input by the user.

/*
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i=1;i<=10;i++)
    {
        printf("%d \n", n*i);
    }
    return 0;
}
*/

// Ques5: Keep taking numbers as input from user until user enters an odd number.

/*
#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter number: ");
        scanf("%d", &n);
        printf("%d\n", n);

        if (n % 2 != 0)
        {
            break;
        }
    } while (1);
    printf("Thank You");

    return 0;
}
*/

// Ques6: Keep taking numbers as input from user until user enters a number which is multiple of 7.

/*
#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter number: ");
        scanf("%d", &n);
        printf("%d\n", n);

        if (n % 7 == 0) // multiple of 73
        {
            break;
        }
    } while (1);
    printf("Thank You \n");
}
*/

// Ques7: Print all numbers from 1 to 10 except for 6.

/*
#include <stdio.h>
int main()
{
    for (int i=1; i<=10; i++)
    {
        if (i == 6)
        {
            continue;
        }
        printf("%d \n", i);
    }
}
*/

// Ques8: Print all the odd numbers from 5 to 50.

/*
#include <stdio.h>
int main()
{
   for (int i=5; i<=50; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d \n", i);
    }
}
*/

// Ques9: Write to progarm to find the factorial of the any number?

/*
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d",fact);
}
*/

// Ques10: Print reverse of the table for a number n.

/*
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("%d\n",n);
    for (int i=10 ; i>=1 ; i--)
    {
        printf("Reverse of number %d\n", n*i);
    }
}
*/

// Ques11: Calculate the sum of all numbers between 5 and 50. (including 5 & 50)

/*
#include <stdio.h>
int main()
{
    int n = 0;
    for (int i = 5; i <= 50; i++)
    {
        n += i;
    }
    printf("%d", n);
}
*/