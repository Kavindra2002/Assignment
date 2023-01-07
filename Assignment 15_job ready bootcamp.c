//Ques1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int largest(int a[],int n);
int main()
{
    int a[10];
    int i;

    printf("enter the 10 values the array\n");
    for(i=0;i<10;i++)
    {
         scanf("%d",&a[i]);
    }

    printf("greatest number in the array is %d",largest(a,10));

    return 0;
}

int largest(int a[],int n)
{
    int greatest,i;
    greatest=a[0];
    for(i=1;i<n;i++)
     {
         if(greatest<a[i])
            greatest=a[i];
     }
     return greatest;
}

//Ques2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int largest(int a[],int n);
int main()
{
    int a[10];
    int i;

    printf("enter the 10 values the array\n");
    for(i=0;i<10;i++)
    {
         scanf("%d",&a[i]);
    }

    printf("smallest number in the array is %d",smallstvalue(a,10));

    return 0;
}

int smallstvalue(int a[],int n)
{
    int smallest,i;
    smallest=a[0];
    for(i=1;i<n;i++)
     {
         if(smallest>a[i])
            smallest=a[i];
     }
     return smallest;
}

//Ques3. Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
void sort(int a[],int n);
int main()
{
    int a[10];
    int i,j,temp;
    printf("enter the 10 elements: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    sort(a,10);

    return 0;
}
void sort(int a[],int n)
{
    int i,j,temp;
   for(i=0;i<n-1;i++)
     {
         for(j=i+1;j<n;j++)
         {
             if(a[i]>a[j])
             {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
             }
         }

     }

     printf("sorted array is: ");

     for(i=0;i<n;i++)
      {
        printf("%d ",a[i]);
      }

}

/*4. Write a function to rotate an array by n position in d direction. The d is an indicative
   value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
   d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
*/

#include <stdio.h>
void left_rotate(int [],int n,int d);
void right_rotate(int [],int n,int d);
int main()
{
    int a[5]={23,6,45,66,2};
    int i,d,choice;

    printf("array is:");

    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nenter the number of rotataion:");
    scanf("%d",&d);

    printf("\n1.for left rotation");
    printf("\n2.for right rotation");
    printf("\nenter the choice: ");
    scanf("%d",&choice);
   switch(choice)
   {
       case 1:
              left_rotate(a,5,d);
              break;
       case 2:
             right_rotate(a,5,d);
             break;
        default:
              printf("\ninvalid choice");
   }




    return 0;
}

void left_rotate(int a[],int n,int d)
{
    int temp,i;
    while(d)
    {
         temp=a[0];
        for(i=0;i<n-1;i++)
        {
            a[i]=a[i+1];

        }
        a[n-1]=temp;
        d--;

    }
    printf("\narray after left the rotation:");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}

void right_rotate(int a[],int n,int d)
{
     int temp,i;
    while(d)
    {
         temp=a[n-1];
        for(i=n-1;i>0;i--)
        {
            a[i]=a[i-1];

        }
        a[0]=temp;
        d--;

    }
    printf("\narray after right the rotation:");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}

//5. Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element./
#include<stdio.h>
int firstoccurance(int a[],int n);
int main()
{
    int a[10]={13,34,5,67,3,5,77,3,56,88};
    int i;
    printf("array is:");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nfirst occurrence of adjacent duplicate values in the array %d",firstoccurance(a,10));
    return 0;
}
int firstoccurance(int a[],int n)
{
    int i,j,temp=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                temp=a[i];
                return temp;
            }

        }
    }
    
}

//6. Write a function in C to read n number of values in an array and display it in reverse order
#include<stdio.h>
void reverse(int arr[],int n);
int main()
{
    int arr[10];
    int i;
    printf("enter the 10 elements in arr1: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
     reverse(arr,10);

    return 0;
}

void reverse(int arr[],int n)
{
    int i;
    printf("reverse order of array is:  ");
    for(i=n-1;i>=0;i--)
        printf("%d ",arr[i]);
}

//7. Write a function in C to count a total number of duplicate elements in an array.

#include<stdio.h>
int duplicatevalues(int a[],int n);
int main()
{
    int a[10]={13,34,5,67,3,5,77,3,56,88};
    int i;
    printf("array is:");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\ntotal number of duplicate elements in an array %d",duplicatevalues(a,10));
    return 0;
}
int duplicatevalues(int a[],int n)
{
    int i,j,temp=0,count=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                count++;
        }
        
    }
    return count;
}

//8. Write a function in C to print all unique elements in an array.
#include<stdio.h>
void printunique(int a[],int n);
int main()
{
    int a[10]={13,34,5,67,3,5,77,3,56,88};
    int i;
    printf("array is:");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nunique elements in the array: ");
   printunique(a,10);
    return 0;
}
void printunique(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                break;

            }
        }

        if(i==j)
         printf("%d ",a[i]);

    }

}

//9. Write a function in C to merge two arrays of the same size sorted in descending order
#include<stdio.h>
void mergearray(int a[],int n1,int b[],int n2);
int main()
{
    int a[5]={13,34,5,67,3};
    int b[5]={8,77,61,56,88};
    int i,j;
    printf("\nelements in 1st array is:\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nelements in 2nd array is:\n");

    for(j=0;j<5;j++)
    {
        printf("%d ",b[j]);
    }

   mergearray(a,5,b,5);
    return 0;
}
void mergearray(int a[],int n1,int b[],int n2)
{

    int n3,i,j,temp;
    n3=n1+n2;
    int c[n3];
    for(i=0;i<n1;i++)
    {
       c[i]=a[i];
    }
    for(j=0;j<n2;j++)
    {
        c[i]=b[j];
        i++;
    }

    for(i=0;i<n3-1;i++)
     {
         for(j=i+1;j<n3;j++)
         {
             if(a[i]<a[j])
             {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
             }
         }

     }
     printf("\narray sorted in descending order is: ");

     for(i=0;i<n3;i++)
      {
        printf("%d ",c[i]);
      }
}


//Ques10. Write a function in C to count the frequency of each element of an array.
#include<stdio.h>
void countfrequency(int a[],int n);
int main()
{
    int a[10]={13,34,5,67,3,5,77,3,56,88};
    int i;
    printf("array is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nthe frequency of each element of an array:\n");
   countfrequency(a,10);
    return 0;
}
void countfrequency(int a[],int n)
{
    int i,j,count=1;
    for(i=0;i<n;i++)
    {
         for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    count++;

                }
           }

        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                break;

            }
        }

        if(i==j)
         printf("%d--> %d times \n",a[i],count);
         count=1;

    }

}

