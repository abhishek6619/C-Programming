/*====================== Conditional Statement ======================*/

/*
    Types of Conditional Statements:
        1. if-else
        2. switch

    if-else syntax:
        if(condition) {
            do something if TRUE
        }
        else {
            do something if FALSE
        }

    Ternary Operator:
        Condition ? do something if TRUE : do something if FALSE;

    Switch:
        switch(number) {
            case C1: // Do Something
                   break;
            case C2: // Do Something
                   break;
            default: // Do Something
        }

        Properties:
            a. Cases can be in any order
            b. Nested switch (switch inside switch) are allowed
*/

/*
#include <stdio.h>

int main(){
    int age;
    int day; // 1-mon, 2-tue, 3-wed, 4-thu, 5-fri, 6-sat, 7-sun
    int number;
    printf("Enter number: ");
    printf("Enter day(1-7): ");
    scanf("%d", &day);
    scanf("%d", &age);
    if(age >= 18) {
        printf("Adult \n");
    }
    else if(age > 13 && age < 18) {
        printf("Teenager \n");
    }
    else {
        printf("Child\n");
    }
    
    age >=18 ? printf("Adult \n") : printf("Not Adult \n");

    switch(day) {
        case 1 : printf("Monday \n");
                 break;
        case 2 : printf("Tuesday \n");
                 break;
        case 3 : printf("Wednesday \n");
                 break;
        case 4 : printf("Thursday \n");
                 break;
        case 5 : printf("Friday \n");
                 break;
        case 6 : printf("Saturday \n");
                 break;
        case 7 : printf("Sunday \n");
                 break;
        default : printf("Invalid Day \n");
    }

    if(number >= 0) {
        printf("Positive \n");
        if(number % 2 == 0) {
            printf("Even \n");
        } else {
            printf("Odd \n");
        }
    } else {
        printf("Negative \n");
    }
    return 0;
}
*/

/*================ Practice ================*/

/* 
    Ques1: Write a program to check if a student passed or failed. 
             marks > 30 is PASS
             marks <= 30 is FAIL
*/

/*
#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks(0-100): ");
    scanf("%d", &marks);

    if(marks <= 30) {
        printf("Fail \n");
    } else if(marks > 30 && marks <=100) {
        printf("Pass \n");
    } else {
        printf("Invalid Marks \n");
    }

    marks <= 30 ? printf("Fail \n") : printf("Pass \n");
    return 0;
}
*/

/*
    Ques2: Write a program to give grades to a student
             marks < 30 is C
             30 <= marks < 70 is B
             70 <= marks < 90 is A
             90 <= marks <=100 is A+
*/

/*
#include <stdio.h>
int main(){
    int marks;
    printf("Enter marks(0-100): ");
    scanf("%d", &marks);

    if(marks < 30) {
        printf("C \n");
    }
    else if(marks >= 30 && marks < 70) {
        printf("B \n");
    }
    else if(marks <= 70 && marks < 90) {
        printf("A \n");
    }
    else {
        printf("A+ \n");
    }
    return 0;
}
*/

/*

*/