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
    return 0;
}