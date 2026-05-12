#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
private:
    int vehicleId;
    string vehicleName;

public:

    Vehicle()
    {
        vehicleId = 0;
        vehicleName = "Unknown";
    }

    Vehicle(int id)
    {
        vehicleId = id;
        vehicleName = "Unknown";
    }

    Vehicle(string name)
    {
        vehicleId = 0;
        vehicleName = name;
    }

    Vehicle(int id, string name)
    {
        vehicleId = id;
        vehicleName = name;
    }

    void display()
    {
        cout << "Vehicle ID   : " << vehicleId << endl;
        cout << "Vehicle Name : " << vehicleName << endl;
        cout << "-----------------------------" << endl;
    }
};

int main()
{
    Vehicle v1;
    Vehicle v2(101);
    Vehicle v3("Toyota");
    Vehicle v4(202, "Honda");

    cout << "Vehicle 1" << endl;
    v1.display();

    cout << "Vehicle 2" << endl;
    v2.display();

    cout << "Vehicle 3" << endl;
    v3.display();

    cout << "Vehicle 4" << endl;
    v4.display();

    return 0;
}