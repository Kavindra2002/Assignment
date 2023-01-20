/*Ques1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number*/

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
            cout<<endl<<"real="<<a<<", img="<<b;
        }

};

int main()
{
    Complex c1,c2;
    c1.setData(3,4);
    c2.setData(5,6);
    c1.showData();
    c2.showData();

}

/*Ques2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.*/

#include<iostream>
using namespace std;
class Time
{
    private:
        int hour;
        int minu;
        int sec;

    public:
        void setData(int x,int y,int z)
        {
            hour=x;
            minu=y;
            sec=z;
        }
        void Displayvalue()
        {
            cout<<endl<<"Time="<<hour<<"hr "<<minu<<"min "<<sec<<"sec";
        }

};

int main()
{
    Time t1;
    t1.setData(3,45,20);
    t1.Displayvalue();

   return 0;
}


/*3. Define a class Factorial and define an instance member function to find the Factorial
of a number using class.
*/

#include<iostream>
using namespace std;
class Factorial
{
    private:
        int n;
        int fact;

    public:
        void setN(int x)
        {
           n=x;
        }
        int getN()
        {
            return n;
        }
        int getFactorial()
        {
            return fact;

        }
        void calculateFactorial()
        {
            int f=1,i;

            if(n<=0)
            {
                fact=1;
                return;
            }
            for(i=1;i<=n;i++)
            {
                f=f*i;
            }
            fact=f;
        }

};

int main()
{
    Factorial f1,f2;
    f1.setN(5);
    f2.setN(6);
    f1.calculateFactorial();
    f2.calculateFactorial();

    cout<<"factorial of "<<f1.getN()<<" is "<<f1.getFactorial()<<endl;
    cout<<"factorial of "<<f2.getN()<<" is "<<f2.getFactorial()<<endl;

   return 0;
}

/*4. Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.
*/

#include<iostream>
using namespace std;
class LargestNumber
{
    private:
        int a,b,c;
        int largest;

    public:
        void setN(int x,int y,int z)
        {
           a=x;
           b=y;
           c=z;
        }
        int get_a()
        {
            return a;
        }
        int get_b()
        {
            return b;
        }
        int get_c()
        {
            return c;
        }
        int getLargest()
        {
            return largest;

        }
        void calculateLargest()
        {

            if(a>b)
            {
                if(a>c)
                    largest=a;
                else
                    largest=c;
            }
            else
            {
                if(b>c)
                    largest=b;
                else
                    largest=c;
            }

        }

};

int main()
{
    LargestNumber l;
    l.setN(7,9,3);
    l.calculateLargest();

    cout<<"Largest of three numbers "<<l.get_a()<<" "<<l.get_b()<<" "<<l.get_c()<<" "<<" is "<<l.getLargest()<<endl;

   return 0;
}


/*5. Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class.
*/

#include<iostream>
using namespace std;

class ReverseNumber
{
    int actualnumber;
    int reversenumber;

public:
    void setActualnumber(int n)
    {
        actualnumber=n;
    }
    int getActualNumber()
    {
        return actualnumber;
    }
    int getReverseNumber()
    {
        return reversenumber;
    }

    void calculateReverseNumber()
    {
        int x,n,rev=0;
        n=actualnumber;
      while(n>0)
      {
          x=n%10;
          rev=rev*10+x;
          n=n/10;

      }
      reversenumber=rev;
    }

};

int main()
{
    ReverseNumber rv;
    rv.setActualnumber(536);
    rv.calculateReverseNumber();
     cout<<"ActualNumber="<<rv.getActualNumber()<<endl;
    cout<<"ReverseNumber="<<rv.getReverseNumber()<<endl;



    return 0;
}

/*6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.
*/
#include<iostream>
using namespace std;
class Square
{
    int x;
    int x2;
    static int countsq;

public:
    void setx(int n)
    {
        x=n;
    }
    int getx()
    {
        return x;
    }
    int getSquare()
    {
        return x2;
    }
    int getcount()
    {
        return countsq;
    }

    void calculateSquare()
    {
       x2=x*x;
       countsq++;
    }

};

int Square::countsq=0;

int main()
{
    Square sq;

    sq.setx(5);
    sq.calculateSquare();
    cout<<"ActualNumber="<<sq.getx()<<endl;
    cout<<"Square of the number is ="<<sq.getSquare()<<endl;


    sq.setx(7);
    sq.calculateSquare();
    cout<<"ActualNumber="<<sq.getx()<<endl;
    cout<<"Square of the number is ="<<sq.getSquare()<<endl;

    sq.setx(9);
    sq.calculateSquare();
    cout<<"ActualNumber="<<sq.getx()<<endl;
    cout<<"Square of the number is ="<<sq.getSquare()<<endl;

    cout<<endl<<"number of times square function called is :"<<sq.getcount()<<endl;
    return 0;
}

/*7. Define a class Greatest and define instance member function to find Largest among
     3 numbers using classes.
*/

#include<iostream>
using namespace std;
class greatestNumber
{
    private:
        int a,b,c;
        int largest;

    public:
        void setN(int x,int y,int z)
        {
           a=x;
           b=y;
           c=z;
        }
        int get_a()
        {
            return a;
        }
        int get_b()
        {
            return b;
        }
        int get_c()
        {
            return c;
        }
        int getLargest()
        {
            return largest;

        }
        void calculateLargest()
        {

            if(a>b)
            {
                if(a>c)
                    largest=a;
                else
                    largest=c;
            }
            else
            {
                if(b>c)
                    largest=b;
                else
                    largest=c;
            }

        }

};

int main()
{
    greatestNumber l;
    l.setN(7,9,3);
    l.calculateLargest();

    cout<<"Greatest of three numbers "<<l.get_a()<<" "<<l.get_b()<<" "<<l.get_c()<<" "<<" is "<<l.getLargest()<<endl;

   return 0;
}

/*8. Define a class Rectangle and define an instance member function to find the area of
   the rectangle.
*/
#include<iostream>
using namespace std;
class Rectangle
{
    int l,b;
    int area;
public:
    void set_l(int p)
    {
        l=p;
    }
    void set_b(int q)
    {
        b=q;
    }
    int get_l()
    {
        return l;
    }
    int get_b()
    {
        return b;
    }
    int get_area()
    {
        return area;
    }
    void calulatearea()
    {
        area=l*b;
    }
};

int main()
{
    Rectangle re;
    re.set_l(5);
    re.set_b(6);
    re.calulatearea();
    cout<<endl<<"area of recatangle having length="<<re.get_l()<<" and breath= "<<re.get_b()<<" is : "<<re.get_area()<<endl;
    return 0;
}


//9. Define a class Circle and define an instance member function to find the area of the circle.
#include<iostream>
using namespace std;
class Circle
{
    int r;
    float area;
public:
    void set_r(int p)
    {
        r=p;
    }

    int get_r()
    {
        return r;
    }
    float get_area()
    {
        return area;
    }

    void calulatearea()
    {
        area=3.14*r*r;
    }
};

int main()
{
    Circle ci;
    ci.set_r(5);
    ci.calulatearea();
    cout<<endl<<"area of circle having radius="<<ci.get_r()<<" is : "<<ci.get_area()<<endl;
    return 0;
}

/*10.Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc.
*/

#include<iostream>
using namespace std;
class Area
{
    float side,radius,length,breath;
public:
    void set_side(float p)
    {
        side=p;
    }
    void set_lengthandbreath(float l,float b)
    {
        length=l;
        breath=b;
    }
    void set_radius(float r)
    {
        radius=r;
    }

    float areaofsquare()
    {
        return side*side;
    }

    float areaofcircle()
    {
        return 3.14*radius*radius;
    }

    float areaofrectangle()
    {
        return 3.14*length*breath;
    }
};

int main()
{
    Area ar;
    ar.set_side(5);
    ar.set_radius(5);
    ar.set_lengthandbreath(6,7);
    cout<<endl<<"area of circle "<<ar.areaofcircle()<<endl;
    cout<<endl<<"area of rectangle "<<ar.areaofrectangle()<<endl;
    cout<<endl<<"area of square "<<ar.areaofsquare()<<endl;
    return 0;
}
