#include<iostream>
using namespace std;
class bank_detail
{
    public:
    string name;
    int acc_no;
    string type;
    int balance;
    void getvalue()
    {
        cout<<"enter name:";
        getline(cin,name);
        cout<<"enter account number:";
        cin>>acc_no;
        cout<<"enter account type:";
        cin>>type;
        cout<<"enter balance:";
        cin>>balance;

    }
    void deposit()
    {
        int amount;
        count<<"enter amount to withdraw";
        amount=balance+amount;
    }
}