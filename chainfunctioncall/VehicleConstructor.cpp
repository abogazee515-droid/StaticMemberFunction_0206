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
};

int main()
{
    return 0;
}