#include <iostream>
#include "Customer.h"

Customer::Customer(std::string n, int t) : name(n), tableNumber(t) {}

void Customer::displayInfo() {
    std::cout << "Customer Name: " << name << "\n";
    std::cout << "Table Number: " << tableNumber << "\n";
}
