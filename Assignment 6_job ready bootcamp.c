//Ques1. Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf("enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        sum=sum+i;
    printf("total sum=%d",sum);

    return 0;

}

//Ques2. Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf("enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        sum=sum+2*i;
    printf("Sum of first n even natuaral number is %d",sum);

    return 0;

}

//Ques3. Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf("enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        sum=sum+(2*i-1);
    printf("Sum of first n odd natuaral number is %d",sum);

    return 0;

}

//Ques4. Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf("enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        sum=sum+i*i;
    printf("sum of squares of first N natural numbers is %d",sum);

    return 0;
}

//Ques5. Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf("enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        sum=sum+i*i*i;
    printf("sum of cubes of first N natural numbers is %d",sum);

    return 0;
}

//Ques6. Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int i,n,fac=1;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        fac=fac*i;
    printf("factorial of n is %d",fac);
    return 0;
}

//Ques7. Write a program to count digits in a given number

#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        n/=10;
        count++;
    }
    printf("total digit in given number is %d",count);
    return 0;
}

//Ques 8. Write a program to check whether a given number is a Prime number or not

#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(i==n)
        printf("given number is prime");
    else
        printf("not a prime number");

    return 0;
}

//Ques9. Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
    int a,b,lcm;
    printf("enter the two numbers: ");
    scanf("%d%d",&a,&b);
    for(lcm=a>b?a:b;lcm<=a*b;lcm++)
    {
        if(lcm%a==0&&lcm%b==0)
            break;
    }
    printf("LCM of a and b is %d",lcm);

    return 0;
}

//Ques10. Write a program to reverse a given number
#include<stdio.h>
int main()
{
    int i,n,m,revrsnum=0;
    printf("enter the number: ");
    scanf("%d",&n);
   while(n)
   {
       m=n%10;
       n=n/10;
       revrsnum=revrsnum*10+m;
   }
   printf("reversed number is %d",revrsnum);

    return 0;
}

