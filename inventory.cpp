#include "inventory.h"
#include <iostream>

void Inventory::displayInventory() const {
    if (products.empty()) {
        std::cout << "Inventory is empty.\n";
    } else {
        std::cout << "Inventory:\n";
        for (const auto& product : products) {
            std::cout << "ID: " << product.getId() << " | Name: " << product.getName() << " | Price: $" << product.getPrice() << " | Quantity: " << product.getQuantity() << "\n";
        }
    }
}

void Inventory::addProduct() {
    // Implementation to add a product to the inventory
    // ...
}

void Inventory::removeProduct() {
    // Implementation to remove a product from the inventory
    // ...
}

void Inventory::updateProduct() {
    // Implementation to update a product in the inventory
    // ...
}
