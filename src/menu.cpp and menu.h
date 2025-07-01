#include <iostream>
#include "Menu.h"

void Menu::displayMenu() {
    std::cout << "Menu:\n1. Pizza - Rs. 200\n2. Pasta - Rs. 150\n";
}

#ifndef MENU_H
#define MENU_H

class Menu {
public:
    void displayMenu();
};

#endif
