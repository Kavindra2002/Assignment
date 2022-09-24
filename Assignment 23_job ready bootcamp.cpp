//Ques 1. Write a C++ program to print Hello MySirG on the screen.
#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello MySirG";
    return 0;
}

//Ques 2. Write a C++ program to print Hello on the first line and MySirG on the second line using endl.

#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello"<<endl<<"MySirG";
    return 0;
}

//Ques 3. Write a C++ program to calculate the sum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the two numbers"<<endl;
    cin>>a>>b;
    cout<<"sum of two number is "<<a+b<<endl;
    return 0;
}

//Ques 4. Write a C++ program to calculate the area of a circle
#include<iostream>
using namespace std;
int main()
{
    int radius;
    cout<<"enter the radius of circle"<<endl;
    cin>>radius;
    cout<<"Area of circle is "<<3.14*radius*radius<<endl;
    return 0;
}

//Ques 5. Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main()
{
    int length,breadth,height;
    cout<<"enter the length breadth and height of cuboid"<<endl;
    cin>>length>>breadth>>height;
    cout<<"Volume of cuboid is "<<length*breadth*height<<endl;
    return 0;
}

//Ques 6. Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the three numbers"<<endl;
    cin>>a>>b>>c;
    cout<<"Average of three numbers  is "<<(a+b+c)/3.0<<endl;
    return 0;
}

//Ques 7. Write a C++ program to calculate the square of a number
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the numbers"<<endl;
    cin>>a;
    cout<<"Square of the numbers  is "<<a*a<<endl;
    return 0;
}

//Ques 8. Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20;
    cout<<"the numbers before swap"<<endl<<"a="<<a<<" b="<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"the numbers after swap"<<endl<<"a="<<a<<" b="<<b;
    return 0;
}

//Ques 9. Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the two numbers "<<endl;
    cin>>a>>b;
    if(a>b)
        cout<<a<<" is greater";
    else if(a==b)
        cout<<"both are equal";
    else
        cout<<b<<" is greater";
    return 0;
}

//Ques 10. Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;
int main()
{
    int a[10],i,sum=0;
    cout<<"Enter the 10 numbers "<<endl;
    for(i=0;i<10;i++)
       cin>>a[i];
    cout<<"sum of all element in array is:";
     for(i=0;i<10;i++)
     {
         sum=sum+a[i];
     }
     cout<<sum;

    return 0;
}
