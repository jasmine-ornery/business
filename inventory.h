#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "product.h"

class Inventory {
public:
    void displayInventory() const;
    void addProduct();
    void removeProduct();
    void updateProduct();

private:
    std::vector<Product> products;
};

#endif // INVENTORY_H
