#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <fstream>
#include "inventory.h"

void displayMenu();
int getUserChoice();
void saveInventoryToFile(const Inventory& inventory);
void loadInventoryFromFile(Inventory& inventory);

#endif // UTILS_H
