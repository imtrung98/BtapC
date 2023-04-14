#include <iostream>
using namespace std;

class Car {
    private:
        string color;
        string engineType;
        double kmDriven;

    public:
        Car(string color, string engineType, double kmDriven) {
            this->color = color;
            this->engineType = engineType;
            this->kmDriven = kmDriven;
        }

        double maintenanceCost() {
            double cost = 0;
            if (this->engineType == "gasoline") {
                cost = 100 + (this->kmDriven / 1000) * 50;
            } else if (this->engineType == "diesel") {
                cost = 150 + (this->kmDriven / 1000) * 70;
            }
            return cost;
        }

        void printInfo() {
            cout << "Color: " << this->color << endl;
            cout << "Engine Type: " << this->engineType << endl;
            cout << "Km Driven: " << this->kmDriven << endl;
        }

        void checkKmDriven() {
            if (this->kmDriven > 100000) {
                cout << "This car needs a major maintenance check." << endl;
            } else {
                cout << "This car is still in good condition." << endl;
            }
        }
};

int main() {
    Car myCar("blue", "diesel", 65000);
    myCar.printInfo();
    cout << "Maintenance cost: " << myCar.maintenanceCost() << endl;
    myCar.checkKmDriven();
    return 0;
}
