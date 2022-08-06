//Ques1: Write a recursive function to print first N natural numbers
#include<stdio.h>
void printN(int );
int main()
{
   int n;
   printf("enter the natural number till you want to print :");
   scanf("%d",&n);
   printN(n);

}

void printN(int n)
{
    if(n>0)
    {
        printN(n-1);
        printf("%d ",n);
    }
}

//Ques2. Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void revprintN(int );
int main()
{
   int n;
   printf("enter the natural number  :");
   scanf("%d",&n);
   revprintN(n);

}

void revprintN(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        revprintN(n-1);

    }
}

//Ques3. Write a recursive function to print first N odd natural numbers
#include<stdio.h>
void oddN(int );
int main()
{
   int n;
   printf("enter the value n  :");
   scanf("%d",&n);
   oddN(n);

}

void oddN(int n)
{
    if(n>0)
    {
        oddN(n-1);
        printf("%d ",2*n-1);

    }
}


Quese4. Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
void revoddN(int );
int main()
{
   int n;
   printf("enter the value n  :");
   scanf("%d",&n);
   revoddN(n);

}

void revoddN(int n)
{
    if(n>0)
    {
        printf("%d ",2*n-1);
        revoddN(n-1);

    }
}

Ques5. Write a recursive function to print first N even natural numbers
#include<stdio.h>
void evenN(int );
int main()
{
   int n;
   printf("enter the value n  :");
   scanf("%d",&n);
   evenN(n);
   return 0;
}

void evenN(int n)
{
    if(n>0)
    {
        evenN(n-1);
        printf("%d ",2*n);

    }
}

//Ques6. Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void revevenN(int );
int main()
{
   int n;
   printf("enter the value n  :");
   scanf("%d",&n);
   revevenN(n);
   return 0;
}

void revevenN(int n)
{
    if(n>0)
    {
        printf("%d ",2*n);
        revevenN(n-1);

    }
}

//Ques7. Write a recursive function to print squares of first N natural numbers
void squareofN(int );
#include<stdio.h>
int main()
{
   int n;
   printf("enter the value n  :");
   scanf("%d",&n);
   squareofN(n);
   return 0;
}

void squareofN(int n)
{
    if(n>0)
    {
        squareofN(n-1);
        printf("%d ",n*n);

    }
}

//QUES8. Write a recursive function to print binary of a given decimal number

void binary(int );
#include<stdio.h>
int main()
{
   int n;
   printf("enter the value n  :");
   scanf("%d",&n);
   printf("binary is ");
   binary(n);
   return 0;
}

void binary(int n)
{
    if(n==0)
        return;
    binary(n/2);
    printf("%d",n%2);


}
//9. Write a recursive function to print octal of a given decimal number

void octal(int );
#include<stdio.h>
int main()
{
   int n;
   printf("enter the value n  :");
   scanf("%d",&n);
   printf("octal is ");
   octal(n);
   return 0;
}

void octal(int n)
{
    if(n==0)
        return;
    octal(n/8);
    printf("%d",n%8);


}

//Ques10. Write a recursive function to print reverse of a given number
void reverseofnum(int );
#include<stdio.h>
int main()
{
   int n;
   printf("enter the value n  :");
   scanf("%d",&n);
   printf("reverse of number is ");
   reverseofnum(n);
   return 0;
}

void reverseofnum(int n)
{
    if(n==0)
        return;
    printf("%d",n%10);
    reverseofnum(n/10);

}
