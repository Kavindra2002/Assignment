//Ques1. Write a program to print MySirG 5 times on the screen
#include<stdio.h>
int main()
{
    int i=1;
    while(i<=5)
    {
        printf("MySirG\n");
        i++;
    }
}

//Ques2. Write a program to print the first 10 natural numbers.
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
        printf("%d\n",i);
}

//Ques3. Write a program to print the first 10 natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i;
    for(i=10;i>=1;i--)
        printf("%d\n",i);
}

//Ques 4 .Write a program to print the first 10 odd natural numbers
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
        printf("%d\n",2*i-1);
}

//Ques 5.Write a program to print the first 10 odd natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int i;
    for(i=10;i>=1;i--)
        printf("%d\n",2*i-1);
}

//Ques6. Write a program to print the first 10 even natural numbers

#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
        printf("%d\n",2*i);
}

//Ques7. Write a program to print the first 10 even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i;
    for(i=10;i>=1;i--)
        printf("%d\n",2*i);
}

//Ques8. Write a program to print squares of the first 10 natural numbers
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
        printf("%d\n",i*i);
}

//Ques9. Write a program to print cubes of the first 10 natural numbers
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
        printf("%d\n",i*i*i);
}

//Ques10. Write a program to print a table of 5.
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
        printf("%d\n",5*i);
}
