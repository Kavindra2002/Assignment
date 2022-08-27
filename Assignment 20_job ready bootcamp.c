//Ques1. Write a function to swap values of two in variables of calling function. (TSRS)
#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("enter the value:\n");
    scanf("%d%d",&a,&b);
    printf("value of a and b before swap is: a=%d,b=%d\n",a,b);

    swap(&a,&b);
    printf("value of a and b after swap is: a=%d,b=%d",a,b);

    return 0;
}

void swap(int*x,int*y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

//Ques2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
void swap(char**,char**);
int main()
{
    char *a[20],*b[20];
    printf("enter two string:\n");
    gets(a);
    gets(b);
    printf("value of a and b before swap is: a=%s,b=%s\n",a,b);

    swap(&a,&b);
    printf("value of a and b after swap is: a=%s,b=%s",a,b);

    return 0;
}

void swap(char**x,char**y)
{
    char *t;
    t=*x;
    *x=*y;
    *y=t;
}

//Ques3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
void sort(int *,int );

int main()
{
    int i;
    int a[]={2,4,62,15,88,3,1,9,56,23};
    printf("array before sort is:\n");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);

    sort(a,10);
    printf("\narray after sorting is:\n");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);

    return 0;
}

void sort(int *ptr,int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(ptr[i]>ptr[j])
            {
                temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }

        }
    }
}

//Ques4. Write a program in C to demonstrate how to handle the pointers in the program.
#include<stdio.h>
int main()
{
    int x=10,*p,**q,***r;
    p=&x;
    q=&p;
    r=&q;

    printf("%d %d %d %d\n",x,*p,**q,***r);
    printf("%d %d %d %d\n",&x,p,*q,**r);
    printf("%d %d %d %d\n",&p,q,*r);
    printf("%d %d %d %d\n",&q,r);
    printf("%d %d %d %d\n",&r);



    return 0;
}

//Ques5. Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>
void maxofnumb(int*,int*);
int main()
{
    int a,b;
    printf("enter the two values:\n");
    scanf("%d%d",&a,&b);

    maxofnumb(&a,&b);

    return 0;
}

void maxofnumb(int*x,int*y)
{
    if(*x>*y)
      printf("%d is maximum",*x);
    else
         printf("%d is maximum",*y);

}

//Ques6. Write a program to calculate the length of the string using a pointer
#include<stdio.h>
int length(char*);
int main()
{
    int l;
    char a[100];
    printf("enter the string:\n");
    gets(a);
    printf("string is: a=%s\n",a);

    l=length(a);
    printf("\nlength of string is: %d",l);

    return 0;
}

int length(char*ptr)
{
    int i;
    for(i=0;*(ptr+i);i++);

    return i;
}

Ques7. Write a program to count the number of vowels and consonants in a string using a pointer.
#include<stdio.h>
void no_ofvowelconsont(char*,int*,int*);
int main()
{
    int nofvowel=0,nofconsonant=0;
    char a[100];
    printf("enter the string:\n");
    gets(a);

    no_ofvowelconsont(a,&nofvowel,&nofconsonant);
    printf("total no of vowel in string is :%d\n",nofvowel);
    printf("total no of consonant in string is :%d\n",nofconsonant);

    return 0;
}

void no_ofvowelconsont(char*ptr,int*n_vowel,int*n_consonant)
{
    int i;
    for(i=0;*(ptr+i);i++)
    {
        if(ptr[i]=='a'||ptr[i]=='e'||ptr[i]=='i'||ptr[i]=='o'||ptr[i]=='u'||ptr[i]=='A'||ptr[i]=='E'||ptr[i]=='I'||ptr[i]=='O'||ptr[i]=='U')
          (*n_vowel)++;
        else
          (*n_consonant)++;

    }
}

//Ques8. Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
int sumofall(int*,int);
int main()
{
    int totalsum,i;
    int a[]={23,15,14,18,56,34,2,8,9,16};
    printf("array is:\n");
    for(i=0;i<10;i++)
      printf("%d ",a[i]);

    totalsum=sumofall(a,10);
    printf("\nlength of string is: %d",totalsum);

    return 0;
}

int sumofall(int*ptr,int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
       sum=sum+*(ptr+i);

    }

    return sum;
}

//Ques9. Write a program to print the elements of an array in reverse order.
#include<stdio.h>
void printreverse(int*,int);
int main()
{
    int totalsum,i;
    int a[]={23,15,14,18,56,34,2,8,9,16};
    printf("array is:\n");
    for(i=0;i<10;i++)
      printf("%d ",a[i]);

    printf("\narray in reverse order is:\n");
    printreverse(a,10);



    return 0;
}

void printreverse(int*ptr,int size)
{
    int i,sum=0;
    for(i=size-1;i>=0;i--)
    {
       printf("%d ",*(ptr+i));

    }

}

//Ques10. Write a program to print a string in reverse using a pointer

#include<stdio.h>
void printrev(char*);
int main()
{
    char a[20];
    printf("enter string:\n");
    gets(a);

    printf("value of string in reverse is:\n");
    printrev(a);

    return 0;
}

void printrev(char*x)
{
    int i;
    for(i=strlen(x);i>=0;i--)
        printf("%c",*(x+i));
}

