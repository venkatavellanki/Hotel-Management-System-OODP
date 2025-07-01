#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
private:
    std::string name;
    int tableNumber;

public:
    Customer(std::string n, int t);
    void displayInfo();
};

#endif
