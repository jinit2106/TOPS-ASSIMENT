#include<iostream>
using namespace std;
class lecture
{
    public:
    string name;
    string subject;
    string course;
    int num_lecture;
    void adddata()
    {
        cout<<"enter lecturer name:";
        getline(cin,name);
        cout<<"enter subject name:";
        getline(cin,subject);
        cout<<"enter course:";
        getline(cin,course);
        cout<<"enter number of lecture:";
        cin>>num_lecture;
    }
    void display()
    {
        cout<<"lecturer:"<<name<<endl;
        cout<<"subject:"<<subject<<endl;
        cout<<"course:"<<course<<endl;
        cout<<num_lecture<<" lecture"<<endl;
    }



};
int main()
{
    lecture a1;
    a1.adddata();
    a1.display();

    return 0;
}