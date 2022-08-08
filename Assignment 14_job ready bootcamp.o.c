//Ques1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10];
    int i,sum=0;
    printf("enter the 10 values in the array\n");
    for(i=0;i<10;i++)
    {
       scanf("%d",&a[i]);
       sum=sum+a[i];
    }
    printf("sum of numbers in the array is %d",sum);

    return 0;
}

//Ques2. Write a program to calculate the average of numbers stored in an array of size 10.Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10];
    int i,sum=0;
    float average=0;
    printf("enter the 10 values the array\n");
    for(i=0;i<10;i++)
    {
         scanf("%d",&a[i]);
         sum=sum+a[i];
    }
    average=sum/10.0;
    printf("average of the numbers in the array is %f",average);
    return 0;
}

/*ques3. Write a program to calculate the sum of all even numbers and sum of all odd
         numbers, which are stored in an array of size 10. Take array values from the user.
*/
#include<stdio.h>
int main()
{
    int a[10];
    int i,sumeven=0,sumodd=0;

    printf("enter the 10 values the array\n");
    for(i=0;i<10;i++)
    {
         scanf("%d",&a[i]);
         if(a[i]%2==0)
           sumeven=sumeven+a[i];
         else
           sumodd=sumodd+a[i];
    }

    printf("sum of all even numbers in array is  %d\n",sumeven);
    printf("sum of all odd numbers in array is  %d\n",sumodd);

    return 0;
}

//Ques4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
    int a[10];
    int i,greatest;

    printf("enter the 10 values the array\n");
    for(i=0;i<10;i++)
    {
         scanf("%d",&a[i]);
    }

     greatest=a[0];
     for(i=1;i<10;i++)
     {
         if(greatest<a[i])
            greatest=a[i];
     }
    printf("greatest number in the array is %d",greatest);

    return 0;
}

//Ques5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.


#include<stdio.h>
int main()
{
    int a[10];
    int i,smallest;

    printf("enter the 10 values the array\n");
    for(i=0;i<10;i++)
    {
         scanf("%d",&a[i]);
    }

     smallest=a[0];
     for(i=1;i<10;i++)
     {
         if(smallest>a[i])
            smallest=a[i];
     }
    printf("smallest number in the array is %d",smallest);

    return 0;
}

//Ques6. Write a program to sort elements of an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
    int a[10];
    int i,j,temp;
    printf("enter the 10 elements: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

     for(i=0;i<9;i++)
     {
         for(j=i+1;j<10;j++)
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

     for(i=0;i<10;i++)
      {
        printf("%d ",a[i]);
      }
    return 0;
}

//Ques 7. Write a program to find second largest in an array.Take array values from the user.

#include<stdio.h>
int main()
{
    int a[10];
    int i,firstlargst,secondlargst;

    printf("enter the 10 values the array\n");
    for(i=0;i<10;i++)
    {
         scanf("%d",&a[i]);
    }

     firstlargst=a[0];
     for(i=1;i<10;i++)
     {
         if(firstlargst<a[i])
         {
             secondlargst=firstlargst;
             firstlargst=a[i];

         }
         else
         {
             if(secondlargst<a[i])
                secondlargst=a[i];
         }

     }
    printf("secondlargst number in the array is %d",secondlargst);

    return 0;
}

//Ques8. Write a program to find the second smallest number in an array.Take array values
#include<stdio.h>
int main()
{
    int a[10];
    int i,smallest,secondsmallest;

    printf("enter the 10 values the array\n");
    for(i=0;i<10;i++)
    {
         scanf("%d",&a[i]);
    }

     smallest=a[0];
     for(i=1;i<10;i++)
     {
         if(smallest>a[i])
         {
             secondsmallest=smallest;
             smallest=a[i];

         }
         else
         {
             if(secondsmallest>a[i])
                secondsmallest=a[i];
         }

     }
    printf("secondsmallest number in the array is %d",secondsmallest);

    return 0;
}


//9. Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.
#include<stdio.h>
int main()
{
    int arr[10];
    int i;
    printf("enter the 10 elements in arr1: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("reverse order of array is:  ");
    for(i=9;i>=0;i--)
        printf("%d ",arr[i]);
    return 0;
}



//10. Write a program in C to copy the elements of one array into another array.Take array values from the user.
#include<stdio.h>
int main()
{
    int arr1[10],arr2[10];
    int i;
    printf("enter the 10 elements in arr1: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr1[i]);
    }


    printf("after coping elements in arr2 are:  ");
    for(i=0;i<10;i++)
    {
        arr2[i]=arr1[i];

        printf("%d ",arr2[i]);

    }

    return 0;

}





