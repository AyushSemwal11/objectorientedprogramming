#include<iostream>
#include<conio.h>
using namespace std;
class test
{
    public:
    test()
    {
        int n =10; 
        
        cout<<"the number is:"<<n<<endl;
    }
    ~test()
    {
        cout<<"the object is destroyed"<<endl;
    }

};
int main()
{
    test obj, obj2;
    getch();
}