//Ques1. Write a function to calculate the area of a circle. (TSRS)

float areocir(int );
#include<stdio.h>
int main()
{
    printf("%f",areocir(5));
    return 0;
}
float areocir(int r)
{
    return 3.14*r*r;
}


//Ques2. Write a function to calculate simple interest. (TSRS)
float si(float ,float ,int );
#include<stdio.h>
int main()
{
    printf("%f",si(324.5,1.5,2));
    return 0;
}
float si(float p,float r,int t)
{
    return p*r*t/100;
}

//Ques3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
int evenodd(int );
#include<stdio.h>
int main()
{
    int p;
    p=evenodd(536);
    if(p==1)
        printf("even number ");
    if(p==0)
        printf("odd number");
  return 0;
}
int evenodd(int x)
{
    if(x%2==0)
        return 1;
    else
        return 0;
}

//Ques4. Write a function to print first N natural numbers (TSRN)
void printnumber(int );
#include<stdio.h>
int main()
{
    printnumber(10);
    return 0;
}
void printnumber(int n)
{
    for(int i=1;i<=n;i++)
        printf("%d ",i);
}

//Ques5. Write a function to print first N odd natural numbers. (TSRN)
void oddnumber(int );
#include<stdio.h>
int main()
{
    oddnumber(10);
    return 0;
}
void oddnumber(int n)
{
    for(int i=1;i<=n;i++)
        printf("%d ",2*i-1);
}

//Ques6. Write a function to calculate the factorial of a number. (TSRS)
int fact(int );
#include<stdio.h>
int main()
{
    printf("%d",fact(5));
    return 0;
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

//Ques 7 Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
int combn(int ,int );
int fact(int );
#include<stdio.h>
int main()
{
    printf("%d",combn(5,2));
    return 0;
}
int combn(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
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

//Ques8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

int permu(int ,int );
int fact(int );
#include<stdio.h>
int main()
{
    printf("%d",permu(5,2));
    return 0;
}
int permu(int n,int r)
{
    return fact(n)/fact(n-r);
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

//Ques9.Write a function to check whether a given number contains a given digit or not.(TSRS)
int contain(int ,int );
#include<stdio.h>
int main()
{
    int p;
    p=contain(5437,4);
    if(p==1)
        printf("digit found in the given number ");
    else
        printf("digit not found in the given number ");
  return 0;
}
int contain(int n,int x)
{
    int p;
    while(n)
    {
       p=n%10;
       if(x==p)
            return 1;
       n=n/10;

    }

}
//Ques10. Write a function to print all prime factors of a given number.
//        For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)

void primefact(int );
#include<stdio.h>
int main()
{
    primefact(18);
   return 0;
}

void primefact(int n)
{
    for(int i=2;n!=1;i++)
    {
        while(n%i==0)
        {
            n=n/i;
            printf("%d ,",i);
        }
    }


}
