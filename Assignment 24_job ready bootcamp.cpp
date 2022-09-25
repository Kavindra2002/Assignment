//Ques1. Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
int cheakprime(int n)
{
    int i,flag=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            flag=1;
    }
    return flag;
}

int main()
{
    int n;
    cout<<"enter the number to cheak whether it is prime or not"<<endl;
    cin>>n;
    if(cheakprime(n)==0)
        cout<<"prime number";
    else
        cout<<"not prime number";

    return 0;
}

//Ques 2. Define a function to find the highest value digit in a given number.

#include<iostream>
using namespace std;
int heighestdigit(int n)
{
    int max=-1,x;
    while(n)
    {
        x=n%10;
        if(max<x)
        {
            max=x;
        }
        n=n/10;
    }
    return max;
}

int main()
{
    int n;
    cout<<"enter the number to  "<<endl;
    cin>>n;
    cout<<"heighest digit in the number is "<<heighestdigit(n);
    return 0;
}


//Ques3. Define a function to calculate x raised to the power y.

#include<iostream>
using namespace std;
int power(int x,int y)
{
    int a=1;
    while(y--)
    {
        a=a*x;
    }
    return a;
}

int main()
{
    int x,y;
    cout<<"enter 2 number "<<endl;
    cin>>x>>y;
    cout<<"x"<<" power "<<"y"<<" is "<<power(x,y);
    return 0;
}

//Ques4. Define a function to print Pascal Triangle up to N lines.
#include<iostream>
using namespace std;
int factorial(int x)
{
    int i,fact=1;
   if(x==0)
      return 1;
    for(i=1;i<=x;i++)
        fact=fact*i;
    return fact;
}

int comb(int n,int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main()
{
    int n,i,j;
    cout<<"enter the number "<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int k=0;
            if(j==0)
            {
                for(k=0;k<=(n/2-i+1);k++)
                printf(" ");
            }


            printf("%d ",comb(i,j));

        }
        printf("\n");
    }

    return 0;
}

//Ques5. Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
using namespace std;
int fibnocii(int x)
{
    int i,f1=1,f2=1,temp;
   if(x<=2)
      return 1;
    for(i=3;i<=x;i++)
    {
        temp=f1+f2;
        f1=f2;
        f2=temp;
    }

    return f2;
}

int main()
{
    int n,flag=0;
    cout<<"enter the number"<<endl;
    cin>>n;

    for(int i=1;;i++)
    {
        int value=fibnocii(i);
        printf("%d ",value);

        if(n==value)
        {
            flag=1;
            break;
        }

        if(value>n)
            break;

    }
    printf("\n");
    if(flag==1)
        cout<<"number is in fabnocci series";
    else
        cout<<"number is not in fabnacci series";

    return 0;
}

//Ques6. Define a function to swap data of two int variables using call by reference

#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;

}

int main()
{
    int a=10,b=20;
    cout<<"the numbers before swap"<<endl<<"a="<<a<<" b="<<b<<endl;

    swap(a,b);
    cout<<"the numbers after swap"<<endl<<"a="<<a<<" b="<<b;
    return 0;
}

//Ques7. Write a function using the default argument that is able to add 2 or 3 numbers.

#include<iostream>
using namespace std;

int add(int a,int b,int c=0)
{
    return a+b+c;
}

int main()
{
    int a,b,c;
    cout<<"enter two number"<<endl;
    cin>>a>>b;

    cout<<"Addition of two number is "<<add(a,b)<<endl;

    cout<<"enter three number"<<endl;
    cin>>a>>b>>c;
    cout<<"Addition of three number is "<<add(a,b,c);

return 0;

}

//Ques8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
#include<iostream>
using namespace std;

float area(int r)
{
    return 3.14*r*r;
}

int area(int x,int y)
{
    return x*y;
}

float area(float b,float h)
{
    return (0.5*b*h);
}

int main()
{
    int x,y,r;
    float b,h;

    cout<<"enter length  and breadth of rectangle"<<endl;
    cin>>x>>y;

    cout<<"enter the radius of circle "<<endl;
    cin>>r;

    cout<<"enter base  and height of triangle"<<endl;
    cin>>b>>h;

    cout<<"area of rectangle"<<area(x,y)<<endl;
    cout<<"area of circle"<<area(r)<<endl;
    cout<<"area of triangle"<<area(b,h)<<endl;

    return 0;
}

//Ques9. Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
#include<iostream>
using namespace std;

int max(int a,int b)
{
    if(a>b)
        return a;
    else if(a==b)
       return a;
    else
        return b;
}

float max(float a,float b)
{
    if(a>b)
        return a;
    else if(a==b)
       return a;
    else
        return b;
}

int main()
{
    int p,q;
    float r,s;
    cout<<"Enter the two integer numbers "<<endl;
    cin>>p>>q;
    cout<<"Maximum value in the two given integer number is "<<max(p,q)<<endl;

    cout<<"\n";
    cout<<"Enter the two real numbers "<<endl;
    cin>>r>>s;

    cout<<"Maximum value in the two given real number is "<<max(r,s)<<endl;
    return 0;
}

//Ques10. Write functions using function overloading to add two numbers having different data types.

#include<iostream>
using namespace std;

int add(int a,int b)
{
   return a+b;
}

float add(float a,float b)
{
    return a+b;
}

float add(int a,float b)
{
    return a+b;
}


int main()
{
    int p,q,m;
    float r,s,n;
    cout<<"Enter the two integer numbers to add"<<endl;
    cin>>p>>q;
    cout<<"Addition is  "<<add(p,q)<<endl;

    cout<<"\n";
    cout<<"Enter the two real number to add"<<endl;
    cin>>r>>s;

    cout<<"Addition is "<<add(r,s)<<endl;

    cout<<"\n";
    cout<<"Enter one integer and one real number to add"<<endl;
    cin>>m>>n;

    cout<<"Addition is "<<add(m,n)<<endl;


    return 0;
}





