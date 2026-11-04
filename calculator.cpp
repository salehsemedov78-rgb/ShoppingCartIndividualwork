#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Product {
    string name;
    double price;
    int quantity;
};

int main() {
    Product products[100];
    int n;
    double total = 0;

    cout << "Number of products (1-100): ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Invalid number of products" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nProduct " << i + 1 << endl;

        cout << "Name: ";
        cin >> products[i].name;

        cout << "Price: ";
        cin >> products[i].price;

        cout << "Quantity: ";
        cin >> products[i].quantity;

        if (products[i].price < 0 || products[i].quantity < 0) {
            cout << "Invalid price or quantity" << endl;
            return 0;
        }
    }

    // Determine the most expensive product based on unit price
    int mostExpensiveIdx = 0;
    for (int i = 1; i < n; i++) {
        if (products[i].price > products[mostExpensiveIdx].price) {
            mostExpensiveIdx = i;
        }
    }

    cout << "\n===== RECEIPT =====\n";

    for (int i = 0; i < n; i++) {
        double subtotal = products[i].price * products[i].quantity;
        cout << products[i].name << " : " << subtotal << " AZN\n";
        total += subtotal;
    }

    cout << "-------------------\n";
    cout << "Subtotal: " << total << " AZN\n";

    // Apply discount logic
    double discountPercentage = 0.0;
    if (total > 1000) {
        discountPercentage = 0.10;
    } else if (total > 500) {
        discountPercentage = 0.05;
    }

    double discountAmount = total * discountPercentage;
    double finalTotal = total - discountAmount;

    if (discountPercentage > 0) {
        cout << "Discount (" << (discountPercentage * 100) << "%): -" << discountAmount << " AZN\n";
    }
    cout << "FINAL TOTAL: " << finalTotal << " AZN\n";
    cout << "-------------------\n";

    // Display the most expensive product
    cout << "Most Expensive Product: " << products[mostExpensiveIdx].name 
         << " (" << products[mostExpensiveIdx].price << " AZN each)\n";

    // Product search functionality
    string searchName;
    cout << "\nEnter product name to search: ";
    cin >> searchName;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (products[i].name == searchName) {
            cout << "Found: " << products[i].name 
                 << " | Price: " << products[i].price << " AZN"
                 << " | Quantity: " << products[i].quantity 
                 << " | Subtotal: " << (products[i].price * products[i].quantity) << " AZN\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Product \"" << searchName << "\" not found.\n";
    }

    return 0;
}
