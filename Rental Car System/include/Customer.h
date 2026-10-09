#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
using namespace std;
class Customer
{
private:
    int id;
    string name;
    string phoneNumber;
    string address;
public:
    Customer()
    {

    }
    Customer(int id,string name,string phoneNumber,string address)
    {
        this->id=id;
        this->name=name;
        this->phoneNumber=phoneNumber;
        this->address=address;
    }
    void setID(int id)
    {
        this->id=id;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setPhoneNumber(string address)
    {
        this->phoneNumber=phoneNumber;
    }
    void setAddress(string address)
    {
        this->address=address;
    }
    int getID()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    string getPhoneNumber()
    {
        return phoneNumber;
    }
    string getAddress()
    {
        return address;
    }
    void informations()
    {
        cout<<"Please Enter Your ID :"<<endl;
        cin>>id;
        cout<<"Please Enter Your Name :"<<endl;
        cin>>name;
        cout<<"Please Enter Your Phone Number :"<<endl;
        cin>>phoneNumber;
        cout<<"Please Enter Your Address :"<<endl;
        cin>>address;
    }
    void print()
    {
        cout<<"The ID Is :"<<id<<endl;
        cout<<"The Name Is :"<<name<<endl;
        cout<<"The Phone Number Is :"<<phoneNumber<<endl;
        cout<<"The Address Is :"<<address<<endl;
    }
};

#endif // CUSTOMER_H
