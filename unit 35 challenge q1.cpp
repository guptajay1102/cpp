#include <iostream>
#include <vector>

class Device {
protected:
    int deviceType;
    int powerRating;  // in watts
    int usageHoursPerDay;

public:
    Device(int type, int power, int hours) : deviceType(type), powerRating(power), usageHoursPerDay(hours) {}

    virtual int calculateEnergyConsumption() const = 0;

    void displayInfo() const {
        std::cout << "Device Type: ";
        if (deviceType == 1) {
            std::cout << "Refrigerator";
        } else if (deviceType == 2) {
            std::cout << "Air Conditioner";
        }
        std::cout << std::endl;
    }
};

class Refrigerator : public Device {
public:
    Refrigerator(int power, int hours) : Device(1, power, hours) {}

    int calculateEnergyConsumption() const override {
        return powerRating * usageHoursPerDay;
    }
};

class AirConditioner : public Device {
public:
    AirConditioner(int power, int hours) : Device(2, power, hours) {}

    int calculateEnergyConsumption() const override {
        return powerRating * usageHoursPerDay;
    }
};

int main() {
    int numDevices;
    std::cin >> numDevices;

    std::vector<Device*> devices;

    for (int i = 0; i < numDevices; ++i) {
        int type, power, hours;
        std::cin >> type >> power >> hours;

        if (type == 1) {
            devices.push_back(new Refrigerator(power, hours));
        } else if (type == 2) {
            devices.push_back(new AirConditioner(power, hours));
        }
    }

    int totalEnergyConsumption = 0;

    for (const auto& device : devices) {
        device->displayInfo();
        int energyConsumption = device->calculateEnergyConsumption();
        totalEnergyConsumption += energyConsumption;
    }

    std::cout << "Total Energy Consumption: " << totalEnergyConsumption << " watt-hours" << std::endl;

    // Clean up allocated memory
    for (const auto& device : devices) {
        delete device;
    }

    return 0;
}
