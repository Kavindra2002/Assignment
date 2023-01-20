/*1. Define a class Complex to represent a complex number with instance variables a and b to store real
   and imaginary parts. Also define following member functions
     a. void setData(int,int)
     b. void showData()
     c. Complex add(Complex)
*/
#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void setData(int x,int  y)
        {
            a=x;
            b=y;
        }
        void showData()
        {
            cout<<endl<<a<<"+"<<b<<"i"<<endl;
        }
        Complex add(Complex C)
        {
            Complex temp;
            temp.a=a+C.a;
            temp.b=b+C.b;
            return temp;
        }

};

int main()
{
    Complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(5,6);
    c3=c1.add(c2);
    c3.showData();


}

/*2. Define a class Time to represent a time with instance variables h,m and s to store
     hour, minute and second. Also define following member functions
     a. void setTime(int,int,int)
     b. void showTime()
     c. void normalize()
     d. Time add(Time)
*/

#include<iostream>
using namespace std;
class Time
{
private:
    int hr,mint,sec;
public:
    void setTime(int x,int y,int z)
    {

        hr=x;
        mint=y;
        sec=z;
    }
    void showTime()
    {
        cout<<hr<<":"<<mint<<":"<<sec<<endl;

    }
    void normalize()
    {
        mint=mint+sec/60;
        sec=sec%60;
        hr=hr+mint/60;
        mint=mint%60;

    }
    Time add(Time t)
    {
        Time temp;

        temp.hr=hr+t.hr;
        temp.mint=mint+t.mint;
        temp.sec=sec+t.sec;

        temp.normalize();
        return temp;

    }
};

int main()
{
    Time t1,t2,t3;
    t1.setTime(10,20,75);
    t2.setTime(11,65,85);

    //operator overloading
    t3=t1.add(t2);

    t1.showTime();
    t2.showTime();
    cout<<"Addition of time is:";
    t3.showTime();

    return 0;
}

//3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.

#include<iostream>
using namespace std;
class Cube
{
public:
   float side;
   float calculate_volume()
    {
        return side*side*side;
    }
    Cube(float side1)
    {
        cout<<"Inside Parametrised constructer"<<endl;
        side=side1;
    }
    Cube()
    {
       cout<<"default constructur"<<endl;
    }

};

int main()
{
    Cube c1(2.43);
    Cube c2;
    cout<<"the side of the cube is:"<<c1.side<<endl;
    cout<<"volume of the first cube:"<<c1.calculate_volume()<<endl;

    cout<<"enter the length of second cube ";
    cin>>c2.side;
    cout<<"volume of the second cube:"<<c2.calculate_volume()<<endl;

    return 0;

}

//4. Define a class Counter and Write a program to Show Counter using Constructor.
#include<iostream>
using namespace std;
class Counter
{

    static int count;

public:
    Counter()     //constructer
    {
        count++;
    }

    int get_count()
    {
        return count;

    }

};

int Counter::count=0;

int main()
{
    Counter c1,c2,c3;
    cout<<c1.get_count();
    return 0;
}


//4. Define a class Counter and Write a program to Show Counter using Constructor.

#include<iostream>
using namespace std;
class Counter
{

    int count;

public:
    Counter()     //constructer
    {
        count=0;
    }

    incr_count()
    {
        count++;
    }

    int get_count()
    {
        return count;

    }

};

int main()
{
    Counter c1;
    cout<<"Before calling counter funtion ,count=";
    cout<<c1.get_count()<<endl;

    c1.incr_count();
    cout<<"Before calling counter funtion ,count=";
    cout<<c1.get_count();
    return 0;
}


//5. Define a class Date and write a program to Display Dateand initialise date object

#include<iostream>
using namespace std;
class Date
{
private:
    int dd,mm,yy;
public:
    Date(int x,int y,int z)
    {

        dd=x;
        mm=y;
        yy=z;
    }
    void showDate()
    {
        cout<<dd<<"/"<<mm<<"/"<<yy<<endl;


    }


};

int main()
{
    Date d1(15,10,2021);

    cout<<"entered date is:";
    d1.showDate();

    return 0;
}

/* 6. Define a class student and write a program to enter student details using constructor
      and define member function to display all the details.
*/

#include<iostream>
#include<string.h>
using namespace std;
class Student
{
private:
    char name[20],grade;
    int marks;
public:
    Student(const char *x,int y,char z)
    {

        strcpy(name,x);
        marks=y;
        grade=z;
    }
    void showDate()
    {
        cout<<"\n Student name="<<name<<endl;
        cout<<" Marks="<<marks<<endl;
        cout<<" Grade="<<grade<<endl;

    }


};

int main()
{
    Student s1("kavindra",730,'A'),s2("krishna",603,'B');

    cout<<"record of student1 is:";
    s1.showDate();

    cout<<"record of student2 is:";
    s2.showDate();


    return 0;
}


/*7. Define a class Box and write a program to enter length, breadth and height and
     initialise objects using constructor also define member functions to calculate volume
     of the box.
*/

#include<iostream>
using namespace std;
class Box
{
private:
    int len,bret,hei;
public:
    Box(int x,int y,int z)
    {

        len=x;
        bret=y;
        hei=z;
    }
    void showBox()
    {
        cout<<"length="<<len<<"breath="<<bret<<"height="<<hei<<endl;


    }

    int calulatevolume()
    {
        return len*bret*hei;
    }


};

int main()
{
    Box d1(5,10,20);

    cout<<"entered values are:";
    d1.showBox();

    cout<<"volume of the box ="<<d1.calulatevolume();

    return 0;
}


/*8. Define a class Bank and define member functions to read principal , rate of interest
     and year. Another member functions to calculate simple interest and display it.
     Initialise all details using constructor.
*/

#include<iostream>
using namespace std;
class Bank
{
private:
    int p,r,t;
    float roi;
public:
    Bank(int x,int y,int z)
    {
        p=x;
        r=y;
        t =z;
    }
    void readprincipal()
    {
        cout<<"principal="<<p<<endl;
    }

    void readrate()
    {
        cout<<"rate="<<r<<endl;
    }

    void readtime()
    {
        cout<<"time="<<t<<endl;
    }

    void displayroi()
    {
        cout<<"simple interest of the money  ="<<roi<<endl;
    }

    void calrateofinterest()
    {
        roi=p*r*t/100.0;
    }


};

int main()
{
    Bank d1(1200,10,3);

    cout<<"entered principal value :";
    d1.readprincipal();

    cout<<"entered rate :";
    d1.readrate();

    cout<<"entered year :";
    d1.readtime();

    d1.calrateofinterest();
    d1.displayroi();

    return 0;
}

/* 9. Define a class Bill and define its member function get() to take detail of customer ,
   calculateBill() function to calculate electricity bill using below tariff :
   Upto 100 unit RS. 1.20 per unit
   From 100 to 200 unit RS. 2 per unit
   Above 200 units RS. 3 per unit.
*/

#include<iostream>
using namespace std;
class e_bill
{
private:
    int cust_no;
    char cust_name[20];
    int units;
    float bill;

public:
    void setter()
    {
        cout<<"enter the details of the customer::"<<endl;
        cout<<"enter the customer number:";
        cin>>cust_no;
        cout<<"enter the customer name =";
        cin>>cust_name;
        cout<<"enter the number of units used ";
        cin>>units;
    }

    void get()
    {
        cout<<"entered details of the customer::"<<endl;
        cout<<"enter the customer number:"<<cust_no<<endl;
        cout<<"the customer name ="<<cust_name<<endl;
        cout<<"the number of units used="<<units<<endl;
        cout<<"Bill of the customer is: "<<bill;

    }


    void calculate_bill()
    {
        if(units<=100)
            bill=units*1.20;
        else if(units<=200)
            bill=100*1.20+(units-100)*2.00;
        else
            bill=100*1.20+100*2.00+(units-200)*3.00;
    }


};

int main()
{
    e_bill b1;
    b1.setter();
    b1.calculate_bill();
    b1.get();

    cout<<"\n";
    return 0;
}

/*10. Define a class StaticCount and create a static variable. Increment this variable in a
      function and call this 3 times and display the result.
*/

#include<iostream>
using namespace std;
class StaticCount
{

    static int count;

public:
    StaticCount()     //constructer
    {
        count=0;
    }

    incr_count()
    {
        count++;
    }

    int get_count()
    {
        return count;

    }

};
int StaticCount::count=0;

int main()
{
    StaticCount c1;
    cout<<"Before calling counter funtion ,count=";
    cout<<c1.get_count()<<endl;

    c1.incr_count();
    c1.incr_count();
    c1.incr_count();
    cout<<"After calling counter funtion ,count=";
    cout<<c1.get_count();
    return 0;
}
