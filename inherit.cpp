#include<iostream>
using namespace std;
class a{
    public:
    int x;
    void get()
    {
        cout<<"enter the value of x: "<<endl;
        cin>>x;
    }
};
class b{
    public:
    int y;
    void gety()
    {
        cout<<"enter the value of y: "<<endl;
        cin>>y;
    }
};
class c: public a , public b
{
    public:
    int sum()
    {
        int m;
        m =x+y;
        cout<<"the sum is "<<m;
    }
};
int main()
{
    c obj;
    obj.get(), obj.gety();
    obj.sum();
}