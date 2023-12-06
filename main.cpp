#include "inventory.h"
#include "utils.h"

int main() {
    Inventory inventory;

    while (true) {
        displayMenu();
        int choice = getUserChoice();

        switch (choice) {
            case 1:
                inventory.displayInventory();
                break;
            case 2:
                inventory.addProduct();
                break;
            case 3:
                inventory.removeProduct();
                break;
            case 4:
                inventory.updateProduct();
                break;
            case 5:
                saveInventoryToFile(inventory);
                break;
            case 6:
                loadInventoryFromFile(inventory);
                break;
            case 7:
                return 0; // Exit the program
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
