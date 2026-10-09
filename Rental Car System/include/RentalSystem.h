#ifndef RENTALSYSTEM_H
#define RENTALSYSTEM_H
#include <iostream>
#include <Car.h>
#include <Customer.h>
using namespace std;
class RentalSystem
{
private:
    Car cars[100];
    Customer customers[100];
    int carCounter=0;
    int customerCounter=0;
public:
    void addCar()
    {
        cars[carCounter].informations();
        carCounter++;
    }
    void deleteCar()
    {
        cout<<"Please Enter The Car ID :"<<endl;
        int id;
        cin>>id;
        int i;
        for(i=0; i<carCounter; i++)
        {
            if(id==cars[i].getID())
            {
                cars[i]=cars[carCounter-1];
                carCounter--;
                cout<<"The Car Is Deleted Successfully"<<endl;
                break;
            }
        }
        if(i==carCounter)
        {
            cout<<"The Car Not Found"<<endl;
        }
    }
    void searchCar()
    {
        cout<<"Please Enter The Car ID :"<<endl;
        int id;
        cin>>id;
        int i;
        for(i=0; i<carCounter; i++)
        {
            if(id==cars[i].getID())
            {
                cars[i].print();
                break;
            }
        }
        if(i==carCounter)
        {
            cout<<"The Car Not Found"<<endl;
        }
    }
    void editCar()
    {
        cout<<"Please Enter The Car ID :"<<endl;
        int id;
        cin>>id;
        int i;
        for(i=0; i<carCounter; i++)
        {
            if(id==cars[i].getID())
            {
                cars[i].informations();
                cout<<"The Car Is Edited Successfully"<<endl;
                break;
            }
        }
        if(i==carCounter)
        {
            cout<<"The Car Is Not Found"<<endl;
        }
    }
    void printCars()
    {
        for(int i=0; i<carCounter; i++)
        {
            cars[i].print();
            cout<<endl;
        }
    }
    void addCustomer()
    {
        customers[customerCounter].informations();
        customerCounter++;
    }
    void deleteCustomer()
    {
        cout<<"Please Enter The Customer ID :"<<endl;
        int id;
        cin>>id;
        int i;
        for(i=0; i<customerCounter; i++)
        {
            if(id==customers[i].getID())
            {
                customers[i]=customers[customerCounter-1];
                customerCounter--;
                cout<<"The Customer Is Deleted Successfully"<<endl;
                break;
            }
        }
        if(i==customerCounter)
        {
            cout<<"The Customer Not Found"<<endl;
        }
    }
    void searchCustomer()
    {
        cout<<"Please Enter The Customer ID :"<<endl;
        int id;
        cin>>id;
        int i;
        for(i=0; i<customerCounter; i++)
        {
            if(id==customers[i].getID())
            {
                customers[i].print();
                break;
            }
        }
        if(i==customerCounter)
        {
            cout<<"The Customer Not Found"<<endl;
        }
    }
    void editCustomer()
    {
        cout<<"Please Enter The Customer ID :"<<endl;
        int id;
        cin>>id;
        int i;
        for(i=0; i<customerCounter; i++)
        {
            if(id==customers[i].getID())
            {
                customers[i].informations();
                cout<<"The Customer Is Edited Successfully"<<endl;
                break;
            }
        }
        if(i==customerCounter)
        {
            cout<<"The Customer Not Found"<<endl;
        }
    }
    void printCustomers()
    {
        for(int i=0; i<customerCounter; i++)
        {
            customers[i].print();
            cout<<endl;
        }
    }
};

#endif // RENTALSYSTEM_H
