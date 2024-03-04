/*====================== Instruction & Operators ======================*/

/*================ Instructions ================*/

/*
    These are statements in a Program.
    Types:
        1. Type Declaration Instructions
        2. Arithmetic Instructions
        3. Control Intructions

    1. Type Declaration Instructions ---> Declare var before using it.

    2. Arithmetic Instructions ---> +, -, *, /, %
                a + b here a and b are Operands & "+" is Operator.
                Note:- 1. Single variable on the LHS
                       2. pow(x,y) for x to the power of y
            Modular Operator % ---> Gives remainder.

            Type Conversiobs ---> int op int ----> int (2 * 2 = 4)
                                  int op float ----> float (2.0 * 2 = 4.0)
                                  float op int ----> float (2.0 * 2.0 = 4.0)

            Operator Precedence ---> (), *, /, %, +, -
                                    *,/,% ----> +,- ----> = (priority order)
                                    x = 4 + 9 * 10
                                    x = 4 + 90
                                    x = 94
                    Associativity ---> left to right (for same precedence)
                                    x = 4 * 3 / 6 * 2
                                    x = 12 / 6 * 2
                                    x = 2 * 2
                                    x = 4

    3. Control Instructions ---> Used to determine flow of program.
            a. Sequence Control
            b. Decision Control
            c. Loop Control
            d. Case Control
*/

/*
#include <stdio.h>
#include <math.h>
int main() {
    int a = 22;
    int b = a;
    int c = b * 6;

    int oldAge = 22;
    int years = 2;
    int newAge = oldAge + years;

    int a = 1, b = 2;
    int sum = a + b;
    int mulitply = a * b;
    int x, y = a * b;

    int b,c;
    b=c=1;
    int a=b+c;
    int power = pow(b,c);
    printf("%d", power);

    printf("%d \n", 2*2);
    printf("%f \n", 2.0*2);
    printf("%f \n", 2.0*2.0);
    printf("%f \n", 4/2.0);
    printf("%d \n", 3/2);
    printf("%f \n", 3.0/2);

    int a = 4 * 3 / 6 * 2;
    printf("%d \n", a);

    return 0;
}
*/

/*================ Operators ================*/

/*
    Types of Operators:
        a. Arithmetic Operators
        b. Relational Operators
        c. Logical Operators
        d. Bitwise Operators
        e. Assignment Operators
        f. Ternary Operators
    Note: Instead of True their is 1 and False their is 0.

            b. Relational Operators ----> ==, !=, >, <, >=, <=

            c. Logical Operators ----> &&(AND), ||(OR), !(NOT)

            d. Bitwise Operators ----> &, |, ^, ~

            e. Assignment Operators ----> =, +=, -=, *=, /=, %=
*/

/*
#include <stdio.h>
#include <math.h>
int main() {
    int a = 1;
    int b = 4;
    a %=b;
    printf("%d \n", a);
    printf("%d \n", 4 >= 4);
    printf("%d \n", (4 >= 4) && (2 >= 3));
    printf("%d \n", (4 >= 4) || (2 >= 3));
    return 0;
}
*/

/*====================== Practice Questions ======================*/

// Ques1. Solve: int a = 1.9999999;
/*
#include <stdio.h>
#include <math.h>

int main() {
    int a = 1.9999999;
    printf("%d \n", a);
    return 0;
}
*/

// Ques2. Solve the following:
/* a. 5 * 2 - 2 * 3
   b. 5 * 2 / 2 * 3
   c. 5 * (2 / 2) * 3
   d. 5 + 2 / 2 * 3
*/
/*
#include <stdio.h>
#include <math.h>

int main() {
    int a = 5 * 2 - 2 * 3;
    int b = 5 * 2 / 2 * 3;
    int c = 5 * (2 / 2) * 3;
    int d = 5 + 2 / 2 * 3;
    printf("%d \n", a);
    printf("%d \n", b);
    printf("%d \n", c);
    printf("%d \n", d);
}
*/

// Ques3. Write a program to check if a number is divisible by 2 or not.
/*
#include <stdio.h>
#include <math.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("%d \n", a % 2 == 0);
    return 0;
}
*/

// Ques4. Write a program to check if a number is odd or even.
/*
#include <stdio.h>
#include <math.h>
int main() {
    int a;
    printf("Enter the Number : ");
    scanf("%d", &a);
    printf("%d \n", a % 2 == 0);
    return 0;
}
*/

// Ques5. Are the following valid or not?
    /*  a. int a = 8^8;
        b. int x; int y = x;
        c. int x, y = x;
        d. char stars = '**'; 
    */
/*
#include <stdio.h>
#include <math.h>
int main() {

    int x; int y = x;
    return 0;   
}
*/