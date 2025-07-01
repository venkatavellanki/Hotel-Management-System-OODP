#include <iostream>
#include "Customer.h"
#include "Menu.h"
#include "Order.h"

int main() {
    std::cout << "Welcome to the Hotel Management System!\n";

    Customer customer1("Venkat", 101);
    customer1.displayInfo();

    Menu menu;
    menu.displayMenu();

    Order order(customer1);
    order.addItem("Pizza", 2);
    order.generateBill();

    return 0;
}
