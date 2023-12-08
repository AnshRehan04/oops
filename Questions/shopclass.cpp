#include <iostream>
#include <vector>

class CartItem {
private:
    std::string itemName;
    double itemPrice;
    int quantity;

public:
    CartItem(const std::string& name, double price, int qty)
        : itemName(name), itemPrice(price), quantity(qty) {}

    // Overload the addition operator to calculate the total cost
    CartItem operator+(const CartItem& other) const {
        CartItem result = *this;  // Create a copy of the current object
        result.quantity += other.quantity;
        return result;
    }

    // Function to get the total cost of the item
    double getTotalCost() const {
        return itemPrice * quantity;
    }

    // Function to display item details
    void displayItem() const {
        std::cout << "Item: " << itemName << ", Price: " << itemPrice << ", Quantity: " << quantity << std::endl;
    }
};

int main() {
    // Create some CartItem objects
    CartItem item1("ProductA", 10.0, 2);
    CartItem item2("ProductB", 15.0, 3);

    // Use the overloaded + operator to combine items
    CartItem combinedItem = item1 + item2;

    // Display individual items
    std::cout << "Item 1 Details:" << std::endl;
    item1.displayItem();

    std::cout << "\nItem 2 Details:" << std::endl;
    item2.displayItem();

    // Display combined item details
    std::cout << "\nCombined Item Details:" << std::endl;
    combinedItem.displayItem();

    // Calculate and display the total cost of items
    double totalCost = item1.getTotalCost() + item2.getTotalCost();
    std::cout << "\nTotal Cost (without operator overloading): $" << totalCost << std::endl;

    // Calculate and display the total cost using operator overloading
    totalCost = combinedItem.getTotalCost();
    std::cout << "Total Cost (with operator overloading): $" << totalCost << std::endl;

    return 0;
}
