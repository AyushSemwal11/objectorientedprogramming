/*#include<iostream>
using namespace std;
class complex{
    int a, b;
    public:
    void setdata(int x, int y)
    {
        a=x; b=y;
    }
    void showdata()
    {
        cout<<"a:" <<a <<" b:" <<b;
    }
    complex add(complex c)
    {
        complex temp;
        temp.a= a+ c.a;
        temp.b= b+ c.b;
        return temp;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3=c1.add(c2);
    c3.showdata();
}*/
#include<iostream>
using namespace std;

class apple{
float a; 
int b;
    public:  
    void setdata(int x, int y)
    {
        a=x; b=y;
    }
    void showdata()
    {
        cout<<"value of a: "<<a<<"      value of b: "<<b<<endl;
    }

apple add(apple c)
{
    apple temp ;
    temp.a = a+ c.a;
    temp.b = b+ c.b;
    return temp;
}
};
int main()
{
    apple a1, a2, a3;
    a1.setdata(6.5,877);
     a2.setdata(6.5,877);
     a3=a1.add(a2);
     a3.showdata(); 
}
