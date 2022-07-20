//Ques 1. Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    if(x>0)
    printf("number is postive");
    else
    printf("number is non postive");
    return 0;
}

//Ques 2. Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    if(x%5)
    printf("number is not divisible by 5");
    else
    printf("number is divisible by 5");
    return 0;
}

//Ques 3.Write a program to check whether a given number is an even number or an odd number
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    if(x%2)
    printf("number is odd");
    else
    printf("number is even");
    return 0;
}

//Ques4. Write a program to check whether a given number is an even number or an odd number without using % operator.
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    if(x&1)
    printf("number is odd");
    else
    printf("number is even");
    return 0;
}

//Ques 5. Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    if(x%10==x||x%100==x)
    printf("number is not a three digit number ");
    else if(x%1000==x)
    printf("number is three digit number");
    else
    printf("number is not a three digit number it is bove 3 digit ");

    return 0;
}


//Ques6.Write a program to print greater between two numbers. Print one number of both are the same
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    if(x>y)
    printf(" %d is greater number ",x);
    else if(x==y)
    printf("both number is equal");
    else
    printf(" %d is greater number ",y);

    return 0;
}

//ques 7:Write a program to check whether roots of a given quadratic equation are real &distinct, real & equal or imaginary roots
/*
     ax^2+bx+c ,quadratic equction

     D=b^2-4ac, discrimenent
*/
#include<stdio.h>
int main()
{
    int D,a,b,c;
    printf("enter the a, b, c: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("cofficient of x^2 =%d\n",a);
    printf("cofficient of x =%d\n",b);
    printf("constant is =%d\n",c);

    D=b*b-4*a*c;
    if(D>0)
        printf("roots are real and distinct\n");
    else
       {
           if(D==0)
            printf("roots are equal\n");
           else
            printf("roots are imaginary\n");

       }
    return 0;
}


//ques8: Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
int main()
{
    int year;
    printf("enter the year: ");
    scanf("%d",&year);
    if((year%100==0&&year%400==0)||(year%100!=0&&year%4==0))
        printf("leap year");
    else
        printf("not a leap year");
    return 0;
}


//Ques9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
        if(a>c)
        printf("%d is the greatest ",a);
        else
        printf("%d is the greatest ",c);
    else
        if(b>c)
        printf("%d is the greatest ",b);
        else
        printf("%d is the greatest ",c);

    return 0;
}


//Ques10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
#include<stdio.h>
int main()
{
    int cp,sp;
    printf("enter the cost price of product ");
    scanf("%d",&cp);
    printf("enter the sell price of product ");
    scanf("%d",&sp);
    if(cp>sp)
    {
       printf("loss percentage=%d",(cp-sp)*100/cp);
    }
    else
    {
       printf("profit percentage=%d",(sp-cp)*100/cp);
    }

    return 0;
}


/*
Ques11. Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.
*/
#include<stdio.h>
int main()
{
    int a,b,c,d,e,obtnpmark;
    printf("enter the marks of 5 subjects ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    if(a>=33&&b>=33&&c>=33&&d>=33&&e>=33)
    {
       printf("candidate passed");
    }
    else
    {
       printf("candidate failed");
    }

    return 0;
}


//Ques12. Write a program to check whether a given alphabet is in uppercase or lowercase.
//#include<stdio.h>
int main()
{
    int ch;
    printf("enter the character ");
    scanf("%c",&ch);

    if(ch>='A'&&ch<='Z')
       printf("character in upper case");

    else if(ch>='a'&&ch<='z')
       printf("character in lower case");
    else
        printf("charcter is not a alphabate");

    return 0;
}


//Ques13 -Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d",&n);

    if(n%3==0&&n%2==0)
       printf("divisible by 3 and divisible by 2");

    else
        printf("not divisible by 3 and 2 or any one of 3 and 2");

    return 0;
}

//Ques14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d",&n);

    if(n%7==0||n%3==0)
       printf("divisible by 7 or divisible by 3");

    else
        printf(" not divisible by 7 or 3");

    return 0;
}

//Ques15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d",&n);

    if(n>0)
       printf("Number is postive");

    else if(n==0)
        printf("Number is zero");
    else
        printf("number is negative");

    return 0;
}

//Ques 16.Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.

#include<stdio.h>
int main()
{
    int ch;
    printf("enter the character ");
    scanf("%c",&ch);

    if(ch>='A'&&ch<='Z')
       printf("character in upper case");

    else if(ch>='a'&&ch<='z')
       printf("character in lower case");

    else if(ch >= 48 && ch <= 57)
        printf("charcter is a digit");
    else
        printf("character is special character");


    return 0;
}

//Ques 17.Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.

#include<stdio.h>
int main(){
 int a,b,c;
 printf("enter the sides of tringle:-");
 scanf("%d%d%d",&a,&b,&c);
 if(a+b>c&&b+c>a&&a+c>b)
    printf("triangle is valid");
 else
    printf("triangle is not valid");
}

//Ques 18.Write a program which takes the month number as an input and display number of days in Month
#include<stdio.h>
int main()
{
    int n ;
    printf("enter the month number from 1 upto 12 for janauray to december :-");
    scanf("%d",&n);
    if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
        printf("31 days in this month");
    else if(n==2)
        printf("29 days for leap year otherwise 28 days");
    else if(n==4||n==6||n==9||n==11)
        printf("30 days");
    else
        printf("invalid input");
return 0;

}
