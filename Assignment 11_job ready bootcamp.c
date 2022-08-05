//Ques1. Write a function to calculate LCM of two numbers. (TSRS)\
#include<stdio.h>
int lcm_calulte(int ,int );
int main()
{
    printf("LCM of given number is %d",lcm_calulte(4,18));
    return 0;
}


int lcm_calulte(int a,int b)
{
    int lcm;
  for(lcm=a>b?a:b;lcm<=a*b;lcm++)
    {
        if(lcm%a==0&&lcm%b==0)
            break;
    }
    return lcm;
}

//Ques2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
hcf_calulte(int ,int );
int main()
{
    printf("HCF of given number is %d",hcfcalulte(4,18));
    return 0;
}
int hcfcalulte(int a,int b)
{
    int hcf;
    int min=a<b?a:b;
    for(int i=1;i<=min;i++)
    {
        if(a%i==0&&b%i==0)
            hcf=i;

    }
    return hcf;
}

//Ques3. Write a function to check whether a given number is Prime or not. (TSRS)
int primeornot(int );
#include<stdio.h>
int main()
{
    int p;
    p=primeornot(16);

    if(p==1)
        printf(" given number is Prime number");
    if(p==0)
        printf("not a Prime number");
    return 0;
}

int primeornot(int n)
    {
        int i;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            break;
        }
        if(i==n)
           return 1;
       else
           return 0;

    }

//Ques4. Write a function to find the next prime number of a given number. (TSRS)
int nextprime(int );
#include<stdio.h>
int main()
{
   printf("next prime number is %d",nextprime(18));
   return 0;
}


int nextprime(int a)
    {
        int count=0,i;
           for(i=a;1;i++)
            {
                for(int j=2;j<=i/2;j++)
                {
                    if(i%j==0)
                    count++;
                }
                 if(count==0)
                 {
                     return i;
                 }

                 count=0;

            }

    }



//Ques5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the number of prime numbers required :  ");
    scanf("%d", &n);
    Nprimenum(n);
    return 0;
}

int Nprimenum(int n)
{
    int i=3,j,count;
    if(n>=1)
    {
        printf("2 ");
    }
    for(count=2;count<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(j==i)
        {
            printf("%d ",i);
            count++;
        }
    }
}


//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
void allPrimenum(int ,int );
#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter the numbers :  ");
    scanf("%d%d",&a,&b);
    allPrimenum(a,b);
    return 0;
}

void allPrimenum(int a,int b)
{
    int count=0;
    for(int i=a;i<=b;i++)
    {
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==0)
            printf("%d ",i);
        count=0;
    }
}

//Ques7. Write a function to print first N terms of Fibonacci series (TSRN)
void fabbnoic(int );
#include<stdio.h>
int main()
{
    int n;

    printf("enter the number of term ");
    scanf("%d",&n);
    fabbnoic(n);

    return 0;
}

void fabbnoic(int n)
{

    int i,a=-1,b=1,c;
    for(i=1;i<=n;i++)
    {
        c=a+b;
          printf("%d ",c);
        a=b;
        b=c;

    }

}

//Ques8. Write a function to print PASCAL Triangle. (TSRN)

int combn(int ,int );
int fact(int );
int pascal(int );
#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    pascal(n);

    return 0;
}

int pascal(int n)
{
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            printf("%d ",combn(i,j));
        printf("\n");
    }

}

int combn(int i,int j)
{
    return fact(i)/(fact(j)*fact(i-j));
}

int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
       f=f*i;

    }
    return f;
}

//Ques9. Write a program in C to find the square of any number using the function.
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    printf("square of number =%d",square(n));
    return 0;
}
square(int n)
{
    return n*n;
}

//Ques10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
int fact(int );
#include<stdio.h>
int main()
{
    int sum=0,i;
    for(i=1;i<=5;i++)
    {
        sum=sum+fact(i)/i;
    }
    printf("Sum =%d",sum);
}
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
       f=f*i;

    }
    return f;
}


