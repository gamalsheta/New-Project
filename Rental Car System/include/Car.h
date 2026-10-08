#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;
class Car
{
private:
    int id;
    string brand;
    string model;
    int year;
    float pricePerDay;
    bool isAvailable;
public:
    Car()
    {

    }
    Car(int id,string brand,string model,int year,float pricePerDay,bool isAvailable)
    {
        this->id=id;
        this->brand=brand;
        this->model=model;
        this->year=year;
        this->pricePerDay=pricePerDay;
        this->isAvailable=isAvailable;
    }
    void setID(int id)
    {
        this->id=id;
    }
    void setBrand(string brand)
    {
        this->brand=brand;
    }
    void setModel(string model)
    {
        this->model=model;
    }
    void setYear(int year)
    {
        this->year=year;
    }
    void setPricePerDay(float pricePerDay)
    {
        this->pricePerDay=pricePerDay;
    }
    void setIsAvailable(bool isAvailable)
    {
        this->isAvailable=isAvailable;
    }
    int getID()
    {
        return id;
    }
    string getBrand()
    {
        return brand;
    }
    string getModel()
    {
        return model;
    }
    int getYear()
    {
        return year;
    }
    float getPricePerDay()
    {
        return pricePerDay;
    }
    bool getIsAvailable()
    {
        return isAvailable;
    }
    void informations()
    {
        cout<<"Please Enter The Car ID :"<<endl;
        cin>>id;
        cout<<"Please Enter The Car Brand :"<<endl;
        cin>>brand;
        cout<<"Please Enter The Car Model :"<<endl;
        cin>>model;
        cout<<"Please Enter The Car Year :"<<endl;
        cin>>year;
        cout<<"Please Enter The Car Price Per Day :"<<endl;
        cin>>pricePerDay;
        cout<<"Is Car Available ? :"<<endl;
        cin>>isAvailable;
    }
    void print()
    {
        cout<<"The Car ID Is :"<<id<<endl;
        cout<<"The Car Brand Is :"<<brand<<endl;
        cout<<"The Car Model Is :"<<model<<endl;
        cout<<"The Car Year Is :"<<year<<endl;
        cout<<"The Car Price Per Day Is :"<<pricePerDay<<endl;
        cout<<"The Car Available Is :"<<isAvailable<<endl;
    }
};

#endif // CAR_H
