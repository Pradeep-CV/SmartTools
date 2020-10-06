#include<stdio.h>
#include "iostream"
using namespace std;
void calculator();
void unitConvertor();
double addFunction(double v1, double v2)
{
    return v1+v2;
}
double subtractFunction(double v1, double v2)
{
    return v1-v2;
}
double multiplyFunction(double v1, double v2)
{
    return v1*v2;
}
double divisionFunction(double v1, double v2)
{
    if(v2!=0)
        return v1/v2;
    else
        cout<<"Can't divide by 0!";
}
int main()
{
    int ch;
    cout<<"1. Calculator 2. Unit Convertor"<<endl;
    cin>>ch;
    switch (ch)
    {
    case 1: calculator();
        break;
    case 2: unitConvertor();
        break;
    default: cout<<"Invalid Option"<<endl;
        break;
    }
}
void calculator()
{
    int opt;
    double num1, num2, res;
    cout<<"1. Add 2. Sub 3. Mul 4. Div"<<endl;
    cin>>opt;
    switch (opt)
    {
    case 1: cout<<"Enter Two numbers: ";
            cin>>num1>>num2;
            res = addFunction(num1, num2);
            cout<<"Sum is: "<<res;
        break;
    case 2: cout<<"Enter Two numbers: ";
            cin>>num1>>num2;
            res = subtractFunction(num1, num2);
            cout<<" is: "<<res;
        break;
    case 3: cout<<"Enter Two numbers: ";
            cin>>num1>>num2;
            res = multiplyFunction(num1, num2);
            cout<<"Sum is: "<<res;
        break;
    case 4: cout<<"Enter Two numbers: ";
            cin>>num1>>num2;
            res = divisionFunction(num1, num2);
            cout<<"Sum is: "<<res;
        break;
    default: cout<<"Invalid option";
        break;
    }
}
void unitConvertor()
{
    cout<<"TBD";
}