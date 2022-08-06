//Ques1. Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int sumN(int );
int main()
{
   int n;
   printf("enter the value of n :");
   scanf("%d",&n);
   printf("Sum of N natural number is %d",sumN(n));
   return 0;

}

int sumN(int n)
{
    if(n==1)
        return 1;
    return n+sumN(n-1);

}

//Ques2. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int sumoddN(int );
int main()
{
   int n;
   printf("enter the value of n :");
   scanf("%d",&n);
   printf("sum of first N odd natural numbers is %d",sumoddN(n));
   return 0;

}

int sumoddN(int n)
{
    if(n==1)
        return 1;
    return 2*n-1+sumoddN(n-1);

}

//Ques3. Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int sumevenN(int );
int main()
{
   int n;
   printf("enter the value of n :");
   scanf("%d",&n);
   printf("sum of first N odd natural numbers is %d",sumevenN(n));
   return 0;

}

int sumevenN(int n)
{
    if(n==1)
        return 2;
    return 2*n+sumevenN(n-1);

}


//Ques4. Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int sumsquareN(int );
int main()
{
   int n;
   printf("enter the value of n :");
   scanf("%d",&n);
   printf("sum of squares of first n natural numbers is %d",sumsquareN(n));
   return 0;

}

int sumsquareN(int n)
{
    if(n==1)
        return 1;
    return n*n+sumsquareN(n-1);

}

//Ques5. Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int sumofdigit(int );
int main()
{
   int n;
   printf("enter the number:");
   scanf("%d",&n);
   printf("sum of digits of a given number is %d",sumofdigit(n));
   return 0;

}

int sumofdigit(int n)
{
    if(n>0)
      return n%10+sumofdigit(n/10);

}

//Ques6. Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int fac(int );
int main()
{
   int n;
   printf("enter the number:");
   scanf("%d",&n);
   printf("sum of digits of a given number is %d",fac(n));
   return 0;

}

int fac(int n)
{
    if(n==0)
        return 1;
    return n*fac(n-1);

}

//Ques7. Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int fac(int );
int main()
{
   int a,b;
   printf("please take a as greater value than b always\n");
   printf("enter the two  number:");
   scanf("%d%d",&a,&b);
   printf("HCF of two number is %d",hcf(a,b));

   return 0;

}

int hcf(int a,int b)
{
    if(b==0)
        return a;
    return hcf(b,a%b);

}


//Ques8. Write a recursive function to print first N terms of Fibonacci series
void fabncofN(int );
#include<stdio.h>
int main()
{
   int n;
   printf("enter the value n  :");
   scanf("%d",&n);
   printf("first N terms of Fibonacci series is ");
   fabncofN(n);
   return 0;
}

void fabncofN(int n)
{
  static n1=-1,n2=1,n3;
   if(n>0)
   {
       n3=n1+n2;
       printf("%d ",n3);
       n1=n2;
       n2=n3;
       fabncofN(n-1);
   }

}

//Qued9. Write a program in C to count the digits of a given number using recursion.

#include<stdio.h>
int totaldigit(int );
int main()
{
   int n;
   printf("enter the value of n :");
   scanf("%d",&n);
   printf("the digits in a given number is %d",totaldigit(n));
   return 0;

}

int totaldigit(int n)
{
    static count=0;
    if(n>0)
    {
        count++;
        totaldigit(n/10);
    }
        return count;
}


//Ques10. Write a program in C to calculate the power of any number using recursion.

#include<stdio.h>
int power(int ,int );
int main()
{
   int a,m;
   printf("enter the value of base and power respectively :");
   scanf("%d%d",&a,&m);
   printf("power of given number is %d",power(a,m));
   return 0;

}

int power(int a,int m)
{
    if(m==0)
        return 1;
    return (a*power(a,m-1));


}
