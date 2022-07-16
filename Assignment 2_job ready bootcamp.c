//Ques1. Write a program to print unit digit of a given number
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number you want unit digit of that number");
    scanf("%d",&x);
    printf("Unit digit of %d is %d",x,x%10);
    return 0;
}


//Ques2. Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number ");
    scanf("%d",&x);
    printf("number without its last digit is %d",x/10);
    return 0;
}

//Ques3. Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the two numbers ");
    scanf("%d%d",&a,&b);
    printf("a=%d,b=%d\n",a,b);
    c=a;
    a=b;
    b=c;

    printf("after swapping two numbers will be\n");
    printf("a=%d,b=%d",a,b);
    return 0;

}

//Ques4. Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the two numbers ");
    scanf("%d%d",&a,&b);
    printf("a=%d,b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("after swapping two numbers will be\n");
    printf("a=%d,b=%d",a,b);
    return 0;

}

//Ques5. Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int x,fstdigit, mdldigit,lstdigit,sum,p;
    printf("enter the number you want to sum of its digit");
    scanf("%d",&x);

    // first digit
    fstdigit=x/100;
    //for caluclating middle digit
    p=x%100;
    mdldigit=p/10;
    // last digit
    lstdigit=p%10;

    sum=fstdigit+mdldigit+lstdigit;
    printf("Sum of three digit number %d ",sum);
    return 0;
}


//Ques 6. Write a program which takes a character as an input and displays its ASCII code.
#include<stdio.h>
int main()
{
    char x;
    printf("enter the character ");
    scanf("%c",&x);
    printf("the ascii value of given character %c is %d",x,x);
    return 0;
}

Ques 7. Write a program to find the position of first 1 in LSB.

 #include<stdio.h>
int main()
{
    int x=6,count=0;
    int result=0;

    while(x!=0)
    {

        result=x&1;
        count++;
       if(result==1)
       {
        printf("%d",count);
        break;
        }
        x=x>>1;

    }


    return 0;
}

//QUES 8. Write a program to check whether the given number is even or odd using a bitwise operator
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number ");
    scanf("%d",&x);
    (x&1)? printf("the number is odd"):printf("the number is even");
    return 0;

}

//Ques9. Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main()
{
    int p;
    char q;
    float r;
    double s;

    printf("size of int is %d\n",sizeof(p));
    printf("size of char is %d\n",sizeof(q));
    printf("size of float is %d\n ",sizeof(r));
    printf("size of double %d\n",sizeof(s));
    return 0;


}

//ques10. Write a program to make the last digit of a number stored in a variable as zero.(Example - if x=2345 then make it x=2340)
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number ");
    scanf("%d",&x);
    x=x/10;
    printf("number after changing its last digit zeo is %d",x*10);
    return 0;
}

/*ques 11.
 Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/
int main()
{
    int x,y,resulting_num;
    printf("enter the number ");
    scanf("%d",&x);
    printf("\nenter the digit ");
    scanf("%d",&y);
    resulting_num=x*10+y;
    printf("number after changing its last digit zeo is %d ",resulting_num);
    return 0;
}

//ques12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.

int main()
{
    int x;
    float y;
    printf("enter the amount in INR ");
    scanf("%d",&x);

    y=x/76.23;
    printf("amount in usd is %f",y);

    return 0;
}

//ques13. Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
#include<stdio.h>
int main()
{
    int x,y,newno;
    printf("enter the number ");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    newno=y*100+x;
    printf("new number after one postion rotate toward right is %d",newno);
    return 0;
}
