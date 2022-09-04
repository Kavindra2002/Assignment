//ques1. Define a structure Employee with member variables id, name, salary
struct Employee
{
    int id;
    char name[20];
    int salary;
};

//ques2. Write a function to take input employee data from the user. [ Refer structure from question 1 ]
#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    int salary;
};

int main()
{
    struct Employee e;
    printf("Enter the employee id: ");
    scanf("%d",&e.id);

    fflush(stdin);
    printf("Enter the employee name:");
    gets(e.name);

    printf("Enter the employee salery: ");
    scanf("%d",&e.salary);


    printf("name=%s,id=%d,salary=%d",e.name,e.id,e.salary);
    return 0;
}

//ques3. Write a function to display employee data. [ Refer structure from question 1 ]
#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    int salary;
};

void Display(struct Employee e[],int n)
{
    int i;
    for(int i=0;i<n;i++)
    {
        printf("enter the employee name ");
        fflush(stdin);
        gets(e[i].name);

        printf("Enter the employee id: ");
        scanf("%d",&e[i].id);

       printf("Enter the employee salery: ");
       scanf("%d",&e[i].salary);

    }

    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("name=%s,id=%d,salary=%d",e[i].name,e[i].id,e[i].salary);
        printf("\n");

    }
}

int main()
{
    int n;
    printf("enter the number of total employee:");
    scanf("%d",&n);
    struct Employee e[n];

    Display(e,n);

  return 0;
}

//ques4. Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1]
#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    int salary;
};

int highestsalery(struct Employee e[],int n)
{
    int i,max;
    max=e[0].salary;
    for(int i=0;i<n-1;i++)
    {
        if(max<e[i+1].salary)
        {
            max=e[i+1].salary;
        }
    }
    return max;
}


int main()
{
    int n,maxsalery;
    printf("enter the number of total employee:");
    scanf("%d",&n);
    struct Employee e[n];

    for(int i=0;i<n;i++)
    {
        printf("enter the employee name ");
        fflush(stdin);
        gets(e[i].name);

        printf("Enter the employee id: ");
        scanf("%d",&e[i].id);

       printf("Enter the employee salery: ");
       scanf("%d",&e[i].salary);

    }

    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("name=%s,id=%d,salary=%d",e[i].name,e[i].id,e[i].salary);
        printf("\n");

    }

    maxsalery=highestsalery(e,n);
    printf(" highest salary employee from a given array of 10 employees = %d",maxsalery);


  return 0;
}

//ques5. Write a function to sort employees according to their salaries [ refer structure from question 1]
#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    int salary;
};

void sortbysalary(struct Employee e[],int n)
{
    int i,j;
    struct Employee temp;

    for(i=0;i<n-1;i++)
     {
         for(j=i+1;j<n;j++)
         {
             if(e[i].salary>e[j].salary)
             {
                 temp=e[i];
                 e[i]=e[j];
                 e[j]=temp;
             }
         }

     }
      printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("name=%s,id=%d,salary=%d",e[i].name,e[i].id,e[i].salary);
        printf("\n");

    }

}


int main()
{
    int n,maxsalery;
    printf("enter the number of total employee:");
    scanf("%d",&n);
    struct Employee e[n];

    for(int i=0;i<n;i++)
    {
        printf("enter the employee name ");
        fflush(stdin);
        gets(e[i].name);

        printf("Enter the employee id: ");
        scanf("%d",&e[i].id);

       printf("Enter the employee salery: ");
       scanf("%d",&e[i].salary);

    }

    printf("\n");
    printf("\nBEFORE SORTING:\n");
    for(int i=0;i<n;i++)
    {
        printf("name=%s,id=%d,salary=%d",e[i].name,e[i].id,e[i].salary);
        printf("\n");

    }

    printf("\nAFTER SORTING WITH SALARY:\n");

    sortbysalary(e,n);



  return 0;
}

//ques6. Write a function to sort employees according to their names [refer structure from question 1]
#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    int salary;
};

void sortbyname(struct Employee e[],int n)
{
    int i,j;
    struct Employee temp;

    for(i=0;i<n-1;i++)
     {
         for(j=i+1;j<n;j++)
         {
             if(strcmp(e[i].name,e[j].name)>0)
             {
                 temp=e[i];
                 e[i]=e[j];
                 e[j]=temp;
             }
         }

     }
      printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("name=%s,id=%d,salary=%d",e[i].name,e[i].id,e[i].salary);
        printf("\n");

    }

}


int main()
{
    int n,maxsalery;
    printf("enter the number of total employee:");
    scanf("%d",&n);
    struct Employee e[n];

    for(int i=0;i<n;i++)
    {
        printf("enter the employee name ");
        fflush(stdin);
        gets(e[i].name);

        printf("Enter the employee id: ");
        scanf("%d",&e[i].id);

       printf("Enter the employee salery: ");
       scanf("%d",&e[i].salary);

    }

    printf("\n");
    printf("\nBEFORE SORTING:\n");
    for(int i=0;i<n;i++)
    {
        printf("name=%s,id=%d,salary=%d",e[i].name,e[i].id,e[i].salary);
        printf("\n");

    }

    printf("\nAFTER SORTING WITH NAME:\n");

    sortbyname(e,n);



  return 0;
}

//7. Write a program to calculate the difference between two time periods.
#include<stdio.h>
struct time
{
    int sec;
    int min;
    int hrs;
};
void diff_between_time(struct time start,struct time stop,struct time *diff);
int main()
{
    struct time start_time,stop_time,diff;

    printf("Enter the start time.\n");
    printf("Enter hours,minute and second ");
    scanf("%d %d %d",&start_time.hrs,&start_time.min,&start_time.sec);

    printf("Enter the stop time.\n");
    printf("Enter hours,minute and second ");
    scanf("%d %d %d",&stop_time.hrs,&stop_time.min,&stop_time.sec);

     diff_between_time(start_time,stop_time,&diff);

     printf("\nTime Difference: %d:%d:%d - ", start_time.hrs,start_time.min,start_time.sec);

     printf("%d:%d:%d ", stop_time.hrs,stop_time.min, stop_time.sec);


   printf("= %d:%d:%d\n", diff.hrs,diff.min,diff.sec);




    return 0;
}

void diff_between_time(struct time start,struct time stop,struct time *diff)
{
    while(stop.sec>start.sec)
    {
        --start.min;
        start.sec+=60;
    }
    diff->sec=start.sec-stop.sec;

    while(stop.min>start.min)
    {
        --start.hrs;
        start.min+=60;
    }
    diff->min=start.min-stop.min;
    diff->hrs=start.hrs-stop.hrs;

}

//ques8. Write a program to store information of 10 students and display them using structure.

#include<stdio.h>
struct Students
{
    int roll_no;
    char name[20];
    int section_no;
};

void Display(struct Students s[],int n)
{
    int i;
    for(int i=0;i<n;i++)
    {
        printf("Enter the student roll_no: ");
        scanf("%d",&s[i].roll_no);

        printf("enter the student name ");
        fflush(stdin);
        gets(s[i].name);


       printf("Enter the student section_no: ");
       scanf("%d",&s[i].section_no);

    }

    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("roll_no=%d,name=%s,section_no=%d",s[i].roll_no,s[i].name,s[i].section_no);
        printf("\n");

    }
}

int main()
{

    struct Students s[10];

    Display(s,10);

  return 0;
}

//9. Write a program to store information of n students and display them using structure

#include<stdio.h>
struct Students
{
    int roll_no;
    char name[20];
    int section_no;
};

void Display(struct Students s[],int n)
{
    int i;
    for(int i=0;i<n;i++)
    {
        printf("Enter the student roll_no: ");
        scanf("%d",&s[i].roll_no);

        printf("enter the student name ");
        fflush(stdin);
        gets(s[i].name);


       printf("Enter the student section_no: ");
       scanf("%d",&s[i].section_no);

    }

    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("roll_no=%d,name=%s,section_no=%d",s[i].roll_no,s[i].name,s[i].section_no);
        printf("\n");

    }
}

int main()
{
     int n;
     printf("enter the number of total students:");
     scanf("%d",&n);
     struct Students s[10];

     Display(s,10);

  return 0;
}


/*10.
Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student.
*/

#include<stdio.h>
struct Marks
{
    int roll_no;
    char name[30];
    float chem_marks,math_marks,phy_marks;

};
int main()
{
    struct Marks marks[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("student %d\n",i+1);
        printf("Enter roll no:\n");
        scanf("%d",&marks[i].roll_no);
        fflush(stdin);
        printf("Enter name:\n");
        scanf("%d",marks[i].name);
        printf("Enter the chemistry marks:\n");
        fflush(stdin);
        scanf("%f",&marks[i].chem_marks);
        printf("Enter the math marks:\n");
        scanf("%f",&marks[i].math_marks);
        printf("Enter the physics marks:\n");
        scanf("%f",&marks[i].phy_marks);

        printf("\n");

    }

    for(i=0;i<5;i++)
    {
        printf("student %d",i+1);
        float percentage=(marks[i].chem_marks+marks[i].math_marks+marks[i].phy_marks)/300.0*100;
        printf("percentage:%f\n",percentage);
    }

    return 0;
}
