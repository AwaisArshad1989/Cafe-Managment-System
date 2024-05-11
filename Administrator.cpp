//#include "administrator.h"
//#include <iostream>
//#include <fstream>
//#include <iomanip>
//#include "filemanager.h"
//#include "menuitem.h"
//#include "Order.h"
//#include "Rating.h"
//
//// Constructor
//Administrator::Administrator(const string& id, const string& name, const string& password)
//    : User(id, name, password, "Administrator"), menuItem(), fileManager() {}
//
//// Methods for Administrator functionality
//
//const int MAX_MENU_ITEMS = 100;  // Adjust the maximum number of menu items as needed
//
//void Administrator::ViewMenu() const {
//    cout << "Viewing menu...\n";
//
//    // Assuming FileManager has a method to retrieve menu items from a file
//    FileManager fileManager;
//    MenuItem menuItems[MAX_MENU_ITEMS];
//    int numMenuItems = fileManager.LoadMenuFromFile("menu.txt", menuItems, MAX_MENU_ITEMS);
//
//    if (numMenuItems == 0) {
//        cout << "The menu is currently empty.\n";
//    }
//    else {
//        cout << setw(15) << "Item ID" << setw(25) << "Item Name" << setw(15) << "Price" << setw(20) << "Quantity in Stock\n";
//        cout << string(75, '-') << "\n";
//
//        for (int i = 0; i < numMenuItems; ++i) {
//            cout << setw(15) << menuItems[i].GetItemID()
//                << setw(25) << menuItems[i].GetItemName()
//                << setw(15) << menuItems[i].GetPrice()
//                << setw(20) << menuItems[i].GetQuantityInStock() << "\n";
//        }
//    }
//}
//
//void Administrator::AddMenuItem() {
//    cout << "Adding a new menu item...\n";
//
//    // Assuming FileManager has a method to save menu items to a file
//    MenuItem newMenuItem;
//
//    cout << "Enter details for the new menu item:\n";
//    cin >> newMenuItem;  // You need to implement operator overloading for MenuItem input
//
//    // Assuming FileManager has a method to save a new menu item to a file
//    fileManager.SaveMenuItemToFile(newMenuItem.GetItemID(), newMenuItem.GetItemName(), newMenuItem.GetPrice(), newMenuItem.GetQuantityInStock());
//
//    cout << "New menu item added successfully!\n";
//}
//
//void Administrator::RemoveMenuItem() {
//    cout << "Removing a menu item...\n";
//
//    // Assuming FileManager has a method to load menu items from a file
//    MenuItem menuItems[MAX_MENU_ITEMS];
//    int numMenuItems = fileManager.LoadMenuFromFile("menu.txt", menuItems, MAX_MENU_ITEMS);
//
//    // Display the current menu for selection
//    cout << "Current Menu:\n";
//    for (int i = 0; i < numMenuItems; ++i) {
//        cout << i + 1 << ". " << menuItems[i].GetItemName() << " (" << menuItems[i].GetItemID() << ")\n";
//    }
//
//    // Get user input for the item to be removed
//    int selection;
//    cout << "Enter the number of the item to be removed: ";
//    cin >> selection;
//
//    // Validate the selection
//    if (selection >= 1 && selection <= numMenuItems) {
//        // Remove the selected item
//        for (int i = selection - 1; i < numMenuItems - 1; ++i) {
//            menuItems[i] = menuItems[i + 1];
//        }
//        numMenuItems--;
//
//        // Assuming FileManager has a method to save updated menu items to a file
//        fileManager.SaveMenuToFile(menuItems, numMenuItems);
//
//        cout << "Menu item removed successfully!\n";
//    }
//    else {
//        cout << "Invalid selection. No menu item removed.\n";
//    }
//}
//
//
//void Administrator::ManageInventory() {
//    cout << "Managing inventory...\n";
//
//    // Assuming FileManager has a method to load menu items from a file
//    MenuItem menuItems[MAX_MENU_ITEMS];
//    int numMenuItems = fileManager.LoadMenuFromFile("menu.txt", menuItems, MAX_MENU_ITEMS);
//
//    // Display the current inventory
//    cout << "Current Inventory:\n";
//    for (int i = 0; i < numMenuItems; ++i) {
//        cout << menuItems[i].GetItemName() << " (" << menuItems[i].GetItemID() << "): " << menuItems[i].GetQuantityInStock() << " in stock\n";
//    }
//
//    // Get user input for the item to be updated
//    int selection;
//    cout << "Enter the number of the item to update inventory: ";
//    cin >> selection;
//
//    // Validate the selection
//    if (selection >= 1 && selection <= numMenuItems) {
//        // Get user input for the new stock quantity
//        int newStock;
//        cout << "Enter the new stock quantity: ";
//        cin >> newStock;
//
//        // Update the stock quantity for the selected item
//        menuItems[selection - 1].SetQuantityInStock(newStock);
//
//        // Assuming FileManager has a method to save updated menu items to a file
//        fileManager.SaveMenuToFile(menuItems, numMenuItems);
//
//        cout << "Inventory updated successfully!\n";
//    }
//    else {
//        cout << "Invalid selection. No inventory updated.\n";
//    }
//}
//
//void Administrator::ManageDiscountPromotion() {
//    cout << "Managing discounts and promotions...\n";
//
//    // Assuming FileManager has a method to load menu items from a file
//    MenuItem menuItems[MAX_MENU_ITEMS];
//    int numMenuItems = fileManager.LoadMenuFromFile("menu.txt", menuItems, MAX_MENU_ITEMS);
//
//    // Display the current menu for selection
//    cout << "Current Menu:\n";
//    for (int i = 0; i < numMenuItems; ++i) {
//        cout << i + 1 << ". " << menuItems[i].GetItemName() << " (" << menuItems[i].GetItemID() << ")\n";
//    }
//
//    // Get user input for the item to apply discount/promotion
//    int selection;
//    cout << "Enter the number of the item to apply discount/promotion: ";
//    cin >> selection;
//
//    // Validate the selection
//    if (selection >= 1 && selection <= numMenuItems) {
//        // Get user input for the discount/promotion percentage
//        double discountPercentage;
//        cout << "Enter the discount/promotion percentage (0-100%): ";
//        cin >> discountPercentage;
//
//        // Update the discount/promotion for the selected item
//        menuItems[selection - 1].SetDiscountPercentage(discountPercentage);
//
//        // Assuming FileManager has a method to save updated menu items to a file
//        fileManager.SaveMenuToFile(menuItems, numMenuItems);
//
//        cout << "Discount/Promotion applied successfully!\n";
//    }
//    else {
//        cout << "Invalid selection. No discount/promotion applied.\n";
//    }
//}
//
//void Administrator::ViewOrderHistory() const {
//    cout << "Viewing order history...\n";
//
//    // Assuming FileManager has a method to load order history from a file
//    Order orders[MAX_ORDERS];
//    int numOrders = fileManager.LoadOrderFromFile("orders.txt", orders, MAX_ORDERS);
//
//    // Display the order history
//    if (numOrders > 0) {
//        cout << "Order History:\n";
//        for (int i = 0; i < numOrders; ++i) {
//            cout << "Order ID: " << orders[i].GetOrderID() << "\n";
//            // Add more details if needed
//        }
//    }
//    else {
//        cout << "No order history available.\n";
//    }
//}
//
//void Administrator::AddNotification() {
//    cout << "Adding a notification...\n";
//
//    // Get user input for notification details
//    string notificationMessage;
//    cout << "Enter the notification message: ";
//    cin.ignore();  // Clear the input buffer
//    getline(cin, notificationMessage);
//
//    // Assuming FileManager has a method to save notifications to a file
//    if (fileManager.SaveNotificationToFile("notifications.txt", notificationMessage)) {
//        cout << "Notification added successfully!\n";
//    }
//    else {
//        cout << "Failed to add the notification.\n";
//    }
//}
//
//void Administrator::RemoveNotification() {
//    cout << "Removing a notification...\n";
//
//    // Assuming FileManager has a method to load notifications from a file
//    string notificationFileName = "notifications.txt";
//    string notification;
//    fileManager.LoadNotificationFromFile(notificationFileName, notification);
//
//    // Check if there is a notification to remove
//    if (!notification.empty()) {
//        cout << "Current Notification:\n" << notification << "\n";
//
//        // Confirm with the user before removing the notification
//        char confirmation;
//        cout << "Do you want to remove this notification? (y/n): ";
//        cin >> confirmation;
//
//        if (confirmation == 'y' || confirmation == 'Y') {
//            // Assuming FileManager has a method to remove the notification file
//            if (fileManager.RemoveFile(notificationFileName)) {
//                cout << "Notification removed successfully!\n";
//            }
//            else {
//                cout << "Failed to remove the notification.\n";
//            }
//        }
//        else {
//            cout << "Notification not removed.\n";
//        }
//    }
//    else {
//        cout << "No notifications available to remove.\n";
//    }
//}
//
//void Administrator::RateMenuItem() {
//    cout << "Rating a menu item...\n";
//
//    // Get user input for rating details
//    string menuItemID;
//    cout << "Enter the ID of the menu item to rate: ";
//    cin >> menuItemID;
//
//    // Assuming FileManager has a method to load menu items from a file
//    MenuItem ratedMenuItem;
//    if (fileManager.LoadMenuItemFromFile("menu.txt", menuItemID, ratedMenuItem)) {
//        // Display the menu item details
//        cout << "Menu Item Details:\n";
//        cout << ratedMenuItem << "\n";
//
//        // Get user input for rating and feedback
//        int rating;
//        cout << "Enter your rating (1-5): ";
//        cin >> rating;
//        cin.ignore();  // Clear the input buffer
//        string feedback;
//        cout << "Enter your feedback: ";
//        getline(cin, feedback);
//
//        // Set the rating and feedback in the menu item
//        ratedMenuItem.SetRating(rating);
//        ratedMenuItem.SetFeedback(feedback);
//
//        // Assuming FileManager has a method to save updated menu items to a file
//        if (fileManager.SaveMenuItemToFile("menu.txt", ratedMenuItem)) {
//            cout << "Rating and feedback recorded successfully!\n";
//        }
//        else {
//            cout << "Failed to record the rating and feedback.\n";
//        }
//    }
//    else {
//        cout << "Menu item with ID " << menuItemID << " not found.\n";
//    }
//}
//
//void Administrator::DisplayFromFile(const string& fileName) const {
//    cout << "Displaying data from file: " << fileName << "...\n";
//
//    // Open the file for reading
//    ifstream file(fileName);
//    if (file.is_open()) {
//        // Read and display data from the file
//        string line;
//        while (getline(file, line)) {
//            cout << line << '\n';
//        }
//
//        // Close the file
//        file.close();
//    }
//    else {
//        cerr << "Unable to open file: " << fileName << "\n";
//    }
//}
//
//void Administrator::ViewUsersFromFile(const string& fileName) const {
//    cout << "Viewing users from file: " << fileName << "...\n";
//
//    // Open the file for reading
//    ifstream file(fileName);
//    if (file.is_open()) {
//        // Read and display user data from the file
//        string line;
//        while (getline(file, line)) {
//            cout << line << '\n';
//        }
//
//        // Close the file
//        file.close();
//    }
//    else {
//        cerr << "Unable to open file: " << fileName << "\n";
//    }
//}
//
//void Administrator::ViewMenuItemsFromFile(const string& fileName) const {
//    cout << "Viewing menu items from file: " << fileName << "...\n";
//
//    // Open the file for reading
//    ifstream file(fileName);
//    if (file.is_open()) {
//        // Read and display menu item details from the file
//        string line;
//        while (getline(file, line)) {
//            // Assuming each line contains menu item details
//            cout << line << '\n';
//        }
//
//        // Close the file
//        file.close();
//    }
//    else {
//        cerr << "Unable to open file: " << fileName << "\n";
//    }
//}
//
//void Administrator::ViewOrdersFromFile(const string& fileName) const {
//    cout << "Viewing orders from file: " << fileName << "...\n";
//
//    // Open the file for reading
//    ifstream file(fileName);
//    if (file.is_open()) {
//        // Read and display order information from the file
//        string line;
//        while (getline(file, line)) {
//            // Assuming each line contains order information
//            cout << line << '\n';
//        }
//
//        // Close the file
//        file.close();
//    }
//    else {
//        cerr << "Unable to open file: " << fileName << "\n";
//    }
//}
//
//void Administrator::ViewRatingsFromFile(const string& fileName) const {
//    cout << "Viewing ratings from file: " << fileName << "...\n";
//
//    // Open the file for reading
//    ifstream file(fileName);
//    if (file.is_open()) {
//        // Read and display ratings from the file
//        string line;
//        while (getline(file, line)) {
//            // Assuming each line contains ratings and feedback
//            cout << line << '\n';
//        }
//
//        // Close the file
//        file.close();
//    }
//    else {
//        cerr << "Unable to open file: " << fileName << "\n";
//    }
//}
//
//void Administrator::ViewPaymentsFromFile(const string& fileName) const {
//    cout << "Viewing payments from file: " << fileName << "...\n";
//
//    // Open the file for reading
//    ifstream file(fileName);
//    if (file.is_open()) {
//        // Read and display payment details from the file
//        string line;
//        while (getline(file, line)) {
//            // Assuming each line contains payment details
//            cout << line << '\n';
//        }
//
//        // Close the file
//        file.close();
//    }
//    else {
//        cerr << "Unable to open file: " << fileName << "\n";
//    }
//}
//
//void Administrator::CalculateMonthlyEarnings(const string& fileName) const {
//    cout << "Calculating monthly earnings from file: " << fileName << "...\n";
//
//    // Open the file for reading
//    ifstream file(fileName);
//    if (file.is_open()) {
//        // Read payment records from the file and calculate earnings
//        double totalEarnings = 0.0;
//        double amount;
//        while (file >> amount) {
//            // Assuming each line contains a payment amount
//            totalEarnings += amount;
//        }
//
//        // Display the calculated earnings
//        cout << "Total monthly earnings: $" << totalEarnings << '\n';
//
//        // Close the file
//        file.close();
//    }
//    else {
//        cerr << "Unable to open file: " << fileName << "\n";
//    }
//}
//
//void Administrator::Logout() {
//    // Implementation to end the current session and exit the system for the user
//    cout << "Logging out...\n";
//    // Add logic to handle logout here
//}
