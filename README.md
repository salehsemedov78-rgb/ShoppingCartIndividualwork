Shopping Cart & Discount Calculator

A complete functional implementation of a Shopping Cart Application designed to process multiple item entries, handle dynamic volume discount tiers, track key inventory metrics, and support instant product search filtering.

📌 Project Overview

This project provides a complete shopping cart management solution designed according to custom pricing rules and structured product records. It includes:

Web Interface (index.html): A client-side web application providing real-time calculation, visual feedback on dynamic discounts, and live inventory filtering.

CLI Application (main.cpp): A standard console application built in C++ leveraging native structures (struct) and array traversal for terminal usage.

⚡ Key Features & Business Logic

1. Struct-Based Data Architecture

Each product in the application is managed as a structured data object containing three essential attributes:

Name: The string identifier of the product.

Price: The cost per individual unit in AZN.

Quantity: The whole number count of items purchased.

2. Tiered Volume Discount Engine

The system automatically evaluates the sum of all item subtotals (Unit Price × Quantity) and applies dynamic discounts based on total order thresholds:

Over 1000 AZN Total: Receives a 10% discount applied to the grand subtotal.

Over 500 AZN Total (up to 1000 AZN): Receives a 5% discount applied to the grand subtotal.

500 AZN or Below: Standard pricing applies (0% discount).

3. Peak Unit Price Analysis

The application continuously iterates over all registered products to identify and highlight the item with the highest single unit price, allowing users to track premium purchases.

4. Real-Time Product Search

Allows users to filter through entered cart items dynamically by name without losing total order state or receipt metadata.

📂 File Architecture

index.html: The complete frontend web interface combining markup, presentation styling, and interaction logic.

main.cpp: The C++ source file implementing console input/output, struct array management, conditional discount logic, and receipt generation.

README.md: Technical documentation and system requirements guide.

🛠️ Usage Instructions

Running the Web Interface

Open index.html in any modern web browser (Google Chrome, Mozilla Firefox, Microsoft Edge, or Safari). No dependencies, package managers, or server setups are required.

Compiling and Running the C++ Application

Compile the C++ program using standard build tools such as GCC:
g++ main.cpp -o ShoppingCart

Execute the compiled application binary:
./ShoppingCart

Follow the terminal prompts to specify the number of items and input product details.
