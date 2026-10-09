#include <iostream>
#include <Car.h>
#include <Customer.h>
#include <RentalSystem.h>
using namespace std;
int main()
{
    RentalSystem r;
    int x;
    do
    {
        cout<<"Press 0 To Exit"<<endl;
        cout<<"Press 1 To Add Car"<<endl;
        cout<<"Press 2 To Delete Car"<<endl;
        cout<<"Press 3 To Search About Car"<<endl;
        cout<<"Press 4 To Edit Car"<<endl;
        cout<<"Press 5 To Print All Cars"<<endl;
        cout<<"Press 6 To Add Customer"<<endl;
        cout<<"Press 7 To Delete Customer"<<endl;
        cout<<"Press 8 To Search About Customer"<<endl;
        cout<<"Press 9 To Edit Customer"<<endl;
        cout<<"Press 10 To Print All Customer"<<endl;
        cin>>x;
        system("cls");
        switch(x)
        {
        case 0:
            cout<<"The Program End"<<endl;
            break;
        case 1:
            r.addCar();
            break;
        case 2:
            r.deleteCar();
            break;
        case 3:
            r.searchCar();
            break;
        case 4:
            r.editCar();
            break;
        case 5:
            r.printCars();
            break;
        case 6:
            r.addCustomer();
            break;
        case 7:
            r.deleteCustomer();
            break;
        case 8:
            r.searchCustomer();
            break;
        case 9:
            r.editCustomer();
            break;
        case 10:
            r.printCustomers();
            break;
        default:
            cout<<"Press Number From (1 To 10)"<<endl;
            break;
        }
    }
    while(x!=0);
}
