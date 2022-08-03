//Ques1. Write a program which takes the month number as an input and display number of days in that month.

#include<stdio.h>
int main()
{
    int x;
    printf("enter the number between 1 to 12 for month number\n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("31 days");
        break;
    case 2:
        printf("28 days or 29 days for leap year ");
        break;
    case 3:
        printf("31 days");
        break;
    case 4:
        printf("30 days");
        break;
    case 5:
        printf("31 days");
        break;
    case 6:
        printf("30 days");
        break;
    case 7:
        printf("31 days");
        break;
    case 8:
        printf("31 days");
        break;
    case 9:
        printf("30 days");
        break;
    case 10:
        printf("31 days");
        break;
    case 11:
        printf("30 days");
        break;
    case 12:
        printf("31 days");
        break;
    }
return 0;
}

/* Ques2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b;
    while(1)
    {
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. exit");

        printf("\nEnter the choice ");
        scanf("%d",&x);

        switch(x)
        {
            case 1:
                printf("Enter two number");
                scanf("%d%d",&a,&b);
                printf("Sum =%d",a+b);
                break;
            case 2:
                printf("Enter two number");
                scanf("%d%d",&a,&b);
                printf("Subtraction =%d",a-b);
            case 3:
                printf("Enter two number");
                scanf("%d%d",&a,&b);
                printf("Multiplcation =%d",a*b);
            case 4:
                printf("Enter two number");
                scanf("%d%d",&a,&b);
                printf("Quationt is =%d",a/b);
            case 5:
                exit(0);
            default:
                printf("Invalid Choice");
        }

    }
    return 0;
}

//Ques3. Write a program which takes the day number of a week and displays a unique greeting message for the day.

#include<stdio.h>
int main()
{
    int day;
    printf("enter the number between 1 to 7 for week number\n");
    scanf("%d",&day);
    switch(day)
    {
    case 1:
        printf("hello");
        break;
    case 2:
        printf("hii");
        break;
    case 3:
        printf("i love my india ");
        break;
    case 4:
        printf("mahesh babu");
        break;
    case 5:
        printf("stylish star allu arjun");
        break;
    case 6:
        printf("john abraham");
        break;
    case 7:
        printf("john cena");
        break;
    default:
        printf("Invalid Choice")

    }
return 0;
}

/*4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,x;

    while(1)
    {
            printf("\n1. to cheak isoscless");
            printf("\n2. to cheak right angled triangle");
            printf("\n3. to cheak the equiletral triangle");
            printf("\n4. exit");

            printf("\nEnter choice ");
            scanf("%d",&x);

            printf("Enter lenth of triangles ie:a,b,c\n");
            scanf("%d%d%d",&a,&b,&c);


            switch(x)
            {
            case 1:
                if(a==b||b==c||c==a)
                  printf("it is iscoscless triangle");
                else
                    printf("not an iscoless triangle");
                break;
            case 2:
                if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
                      printf("it is right angled triangle");
                else
                    printf("not an tright angled triangle");

                break;
            case 3:
                if(a==b&&b==c)
                    printf("it is equilateral triangle");
                else
                    printf("it is not an equilteral triangle");

                break;
            case 4:
                   exit(0);
            default:
                printf("invalid choive");


           }
     }


    return 0;
}

/*Ques 5. Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid");
*/

#include<stdio.h>
int main()
{
    int x;
    printf("enter the value:");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("good");
        break;
    case 2:
        printf("better");
        break;
    case 3:
        printf("best");
        break;
    default:
        printf("Invalid");
    }
    return 0;
}

Ques6. Program to check whether a year is a leap year or not. Using switch case
#include<stdio.h>
int main()
{
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    switch(year%100==0)
    {
        case 1:switch(year%400==0)
                {
                    case 1:printf("leap year");
                    break;
                    case 0:printf("non leap year");
                    break;

                }
                break;
        case 0:switch(year%4==0)
                {
                    case 1:printf("leap year");
                    break;
                    case 0:printf("non leap year");
                    break;

                }

    }
    return 0;
}

/*
Ques7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
*/

#include<stdio.h>
int main()
{
    float x,amount=0,totalamount=0;
    printf("enter the units of eletricity bill:");
    scanf("%f",&x);
    switch(x<=50)
    {
        case 1:amount=0.5*x;
               break;

        case 0:switch(x<=150)
                {
                    case 1:amount=25+(x-50)*0.75;
                           break;
                    case 0:switch(x<=250)
                            {
                                case 1:amount=100+(x-150)*1.20;
                                break;
                                case 0:amount=220+(x-250)*1.50;
                                break;
                            }
                          break;
                }
                break;

    }
    totalamount=amount+0.20*amount;
    printf("total amount of bill to pay =%f",totalamount);
    return 0;
}

//Ques8. Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.
#include<stdio.h>
int main()
{
    int x;
    printf("enter the value:");
    scanf("%d",&x);
    switch(x>=0)
    {
    case 1:
        printf("postive number converted to negative number = %d",-x);
        break;
    case 0:
        printf("negative number converted to postive number = %d",-x);
        break;
    }
    return 0;
}

//Ques9. Program to Convert even number into its upper nearest odd number using Switch Statement.
#include<stdio.h>
int main()
{
    int x;
    printf("enter the value:");
    scanf("%d",&x);
    switch(x%2==0)
    {
        case 1:printf("upper nearest odd number=%d",x+1);
            break;
        case 0:printf("%d",x);
            break;
    }

    return 0;
}

//Ques 10 C program to find all roots of a quadratic equation using switch case

//quadratic equation = ax^2+bx+c

#include<stdio.h>
#include <math.h>
int main()
{

    float a,b,c,disc;
    float root1,root2,imaginry;

    printf("enter value of a,b,c: ");
    scanf("%f%f%f",&a,&b,&c);

    disc=b*b-4*a*c;

    switch(disc>0)
    {
    case 1:
        root1=(-b+sqrt(disc))/(2*a);
        root2=(-b-sqrt(disc))/(2*a);
        printf("two distinct and real roots exist: %.2f and %.2f",root1,root2);
        break;
    case 0:
        switch(disc<0)
        {
        case 1:
            root1=root2=-b/(2*a);
            imaginry=sqrt(-disc)/(2*a);
            printf("two distinct complex root exist: %.2f+i%.2f and%.2f-i%.2f",root1,imaginry,root2,imaginry);
            break;

        case 0:

            root1=root2=-b/(2*a);
             printf("two equal and real roots exist: %.2f and %.2f",root1,root2);
             break;

        }


    }

    return 0;

}
