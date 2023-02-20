//Ques1. Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{
    int n,i,a=-1,b=1,c;
    printf("enter the nth term ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;

    }
    printf("nth term is %d",c);

    return 0;
}

//Ques2.Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
    int n,i,a=-1,b=1,c;
    printf("enter the nth term ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        c=a+b;
          printf("%d ",c);
        a=b;
        b=c;

    }


    return 0;
}


//Ques3. Write a program to check whether a given number is there in the Fibonacci series or not.
int main()
{
    int n,i,a=0,b=1,c;
    printf("enter the number to cheak fabinnoci or not ");
    scanf("%d",&n);

    if(n==1)
        printf("number found in fabnocii series");
    else
    {

      for(i=1;1;i++)
       {
        c=a+b;
        a=b;
        b=c;
        if(c==n)
        {
            printf("number found in fabnocii series");
            break;
        }
        if(c>n)
        {
            printf("number not found in fabnocii series");
            break;
        }


       }

    }



    return 0;
}

//Ques4. Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int a,b,min,hcf;
    printf("enter the two numbers: ");
    scanf("%d%d",&a,&b);
    min=a<b?a:b;
    for(int i=1;i<=min;i++)
    {
        if(a%i==0&&b%i==0)
            hcf=i;

    }
    printf("HCF is %d",hcf);

    return 0;
}

//Ques5.Write a program to check whether two given numbers are co-prime or not
#include<stdio.h>
int main()
{
    int a,b,min,hcf;
    printf("enter the two numbers: ");
    scanf("%d%d",&a,&b);
    min=a<b?a:b;
    for(int i=1;i<=min;i++)
    {
        if(a%i==0&&b%i==0)
            hcf=i;

    }
    if(hcf==1)
       printf("two given numbers are co prime");
    else
        printf("given numbers are not co prime");
    return 0;
}

//Ques 6.Write a program to print all Prime numbers under 100

#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("prime number under 100: ");

    for(i=1;i<100;i++)
    {
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            count++;
        }
         if(count==0&&i!=1)
            printf("%d ",i);
         count=0;

    }


    return 0;
}

//Ques7. Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main()
{
    int a,b,i,count=0;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    for(i=a;i<b;i++)
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


    return 0;
}

//Ques8. Write a program to find next Prime number of a given number

#include<stdio.h>
int main()
{
    int a,i,count=0;
    printf("Enter the numbers: ");
    scanf("%d",&a);

    for(i=a;1;i++)
    {
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            count++;
        }
         if(count==0&&i!=a)
         {
             printf("Next prime number is %d ",i);
             break;
         }

         count=0;

    }


    return 0;
}

//Ques 9.Write a program to check whether a given number is an Armstrong number or not
#include<stdio.h>
int main()
{
    int n,x,r,s=0;
  printf("Enter the number ");
  scanf("%d",&n);
  x=n;
  while(x)
  {
      r=x%10;
      s=s+r*r*r;
      x=x/10;
  }

  if(s==n)
    printf("given number is armtrong number");
  else
    printf("not an armstrong number");

    return 0;

}

//Ques 10.Write a program to print all Armstrong numbers under 1000

#include<stdio.h>
int main()
{
    int n,x,r,s;
  printf("Armstrong numbers are\n ");

  for(n=1;n<=1000;n++)
  {
      x=n;
      s=0;
      while(x)
     {
      r=x%10;
      s=s+r*r*r;
      x=x/10;
     }

  if(s==n)
    printf("%d\n",n);


  }

  return 0;

}
