//Ques1. Write a program to print MySirG N times on the screen
#include<stdio.h>
int main()
{
    int i,n;

    printf("enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        printf("MySirG\n");

  return 0;
}

//Ques2. Write a program to print the first N natural numbers.
#include<stdio.h>
int main()
{
    int i,n;

    printf("enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        printf("%d\n",i);

    return 0;
}

//Ques3. Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
     int i,n;

    printf("enter the value of n: ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
        printf("%d\n",i);

    return 0;
}

//Ques 4 .Write a program to print the first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,n;

    printf("enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        printf("%d\n",2*i-1);

    return 0;
}

//Ques 5.Write a program to print the first N odd natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int i,n;

    printf("enter the value of n: ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
        printf("%d\n",2*i-1);

    return 0;
}

//Ques6. Write a program to print the first N even natural numbers

#include<stdio.h>
int main()
{
    int i,n;

    printf("enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        printf("%d\n",2*i);

    return 0;
}

//Ques7. Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i,n;

    printf("enter the value of n: ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
        printf("%d\n",2*i);

    return 0;
}

//Ques8. Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{
    int i,n;

    printf("enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        printf("%d\n",i*i);

    return 0;
}

//Ques9. Write a program to print cubes of the first N natural numbers
#include<stdio.h>
int main()
{
    int i,n;

    printf("enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        printf("%d\n",i*i*i);

    return 0;
}

//Ques10. Write a program to print a table of N.
#include<stdio.h>
int main()
{
    int i,n;

    printf("enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
        printf("%d\n",n*i);

    return 0;
}
