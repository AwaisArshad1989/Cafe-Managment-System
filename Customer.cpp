#include "customer.h"
#include "User.h"
#include <iostream>
#include<fstream>
#include <sstream>
#include<string>

using namespace std;

// Constructor
//Student(string rollno) : User(rollno)
Customer::Customer(const string& id, const string& name, const string& pass, const string& type) : User(id, name,pass,type)
{}
//Customer::Customer(const string& id, const string& name, const string& pass, const string& type)
void Customer::customerMenu()
{
    int choice=0;
    system("cls");
    while (1)
    {
        cout << "Enter Customer Type" << endl;
        cin >> customertype;
        cout << "Press 1 to view Menu" << endl;
        cout << "Press 2 to PlaceOrder" << endl;
        cout << "Press 3 to ViewOrderHistory " << endl;
        cout << "Press 4 to Logout" << endl;
        cin >> choice;

        if (choice == 1)
        {
            ViewMenu();
        }
        else if (choice == 2)
        {
            PlaceOrder();
        }
        else if (choice == 3)
        {
            ViewOrderHistory();
        }
        else if (choice == 4)
        {
            Logout();
        }
    }
}
void Customer::ViewMenu() {
    // Implementation for viewing menu based on user type
    cout << "Viewing menu as a ";

    if (customertype == "Student") {
        cout << "Student:\n";
        // Display student menu
        DisplayStudentMenu();
    }
    else if (customertype == "Faculty") {
        cout << "Faculty:\n";
        // Display faculty menu
        DisplayFacultyMenu();
    }
    else if (customertype == "Non-Faculty") {
        cout << "Non-Faculty:\n";
        // Display non-faculty menu
        DisplayNonFacultyMenu();
    }

    // Additional logic for displaying menu items
}

void Customer::DisplayStudentMenu() {
    // Add logic to display student menu items
    cout << "1. Student Item 1\n";
    cout << "2. Student Item 2\n";
    // Add more items as needed
}

void Customer::DisplayFacultyMenu() {
    // Add logic to display faculty menu items
    cout << "1. Faculty Item 1\n";
    cout << "2. Faculty Item 2\n";
    // Add more items as needed
}

void Customer::DisplayNonFacultyMenu() {
    // Add logic to display non-faculty menu items
    cout << "1. Non-Faculty Item 1\n";
    cout << "2. Non-Faculty Item 2\n";
    // Add more items as needed
}

void Customer::PlaceOrder() {
    // Implementation for placing an order based on user type
    if (userType == "Student") {
        // Allow ordering from student menu
        cout << "Placing order as a Student...\n";
        // Add specific logic for student order
    }
    else if (userType == "Faculty") {
        // Allow ordering from any menu
        cout << "Placing order as a Faculty...\n";
        // Add specific logic for faculty order
    }
    else if (userType == "Non-Faculty") {
        // Allow ordering from non-faculty menu
        cout << "Placing order as a Non-Faculty...\n";
        // Add specific logic for non-faculty order
    }

    // Additional logic for placing orders common to all user types
    cout << "Order placed successfully!\n";
}

void Customer::ViewOrderHistory() {
    cout << "Viewing order history...\n";

    // Fetch and display order history based on user type
    // For simplicity, let's assume orders are stored in a file named "order_history.txt"
    string fileName = "order_history.txt";
    ifstream orderFile(fileName);

    if (orderFile.is_open()) {
        string line;
        while (getline(orderFile, line)) {
            // Check if the order belongs to the current customer
            // For demonstration purposes, assuming the order data is stored as "CustomerID, Item, Quantity, TotalPrice"
            istringstream iss(line);
            string customerId, item, quantity, totalPrice;

            getline(iss, customerId, ',');
            getline(iss, item, ',');
            getline(iss, quantity, ',');
            getline(iss, totalPrice, ',');

            if (customerId == GetUserID()) {
                // Display order details
                cout << "Item: " << item << ", Quantity: " << quantity << ", Total Price: " << totalPrice << "\n";
            }
        }

        orderFile.close();
    }
    else {
        cerr << "Unable to open order history file.\n";
    }

    // Additional logic for order history display
}

void Customer::Logout() {
    cout << "Logging out as Customer...\n";
    exit(0);
    // Additional logout-related operations if needed
}
