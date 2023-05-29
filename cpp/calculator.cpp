#include<iostream>
using namespace std;
class demo
{
    public:
    int a=10,b=8,sum;
    demo()
    {
        sum=a+b;
        cout<<sum<<endl;
    }
    demo(int x)
    {
        sum=x-b;
        cout<<sum<<endl;
    }
    demo(int s,int p)
    {
        sum=s*p;
        cout<<sum<<endl;
    }
    demo(int w,int r,int q)
    {
        sum=w/q;
        cout<<sum<<endl;
    }

};
int main()
{
    demo d1,d2(50),d3(8,8),d4(6,78,3);
    return 0;
}