#include <iostream>
#include "Order.h"

Order::Order(Customer c) : customer(c), quantity(0), item("") {}

void Order::addItem(std::string i, int q) {
    item = i;
    quantity = q;
}

void Order::generateBill() {
    int price = 0;
    if (item == "Pizza") price = 200;
    else if (item == "Pasta") price = 150;

    std::cout << "Bill for " << item << ": Rs. " << price * quantity << "\n";
}


#ifndef ORDER_H
#define ORDER_H

#include <string>
#include "Customer.h"

class Order {
private:
    Customer customer;
    int quantity;
    std::string item;

public:
    Order(Customer c);
    void addItem(std::string i, int q);
    void generateBill();
};

#endif
