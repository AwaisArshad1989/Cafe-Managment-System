//#include "filemanager.h"
//#include <iostream>
//#include <fstream>
//
//// Constructors
//FileManager::FileManager(){}
//FileManager::FileManager(const string& file) : fileName(file) {}
//
//string FileManager::ReadFile(const string& fileName) const {
//    ifstream file(fileName);
//    string content;
//
//    if (file.is_open())
//    {
//        string line;
//        while (getline(file, line)) {
//            content += line + "\n";
//        }
//        file.close();
//    }
//    else {
//        cerr << "Unable to open file: " << fileName << endl;
//    }
//
//    return content;
//}
//
//
//// Methods for saving data to files
//void FileManager::SaveUserToFile(const string& userData) {
//    ofstream file(fileName + "_users.txt", ios::app);
//    if (file.is_open())
//    {
//        file << userData << endl;
//        cout << "User data saved to file.\n";
//        file.close();
//    }
//    else
//    {
//        cerr << "Unable to open user file.\n";
//    }
//}
//
//void FileManager::SaveMenuItemToFile(const string& itemID, const string& itemName, double price, int quantityInStock) {
//    ofstream file(fileName + "_menuitems.txt", ios::app);
//    if (file.is_open()) {
//        file << itemID << " " << itemName << " " << price << " " << quantityInStock << endl;
//        cout << "Menu item data saved to file.\n";
//        file.close();
//    }
//    else {
//        cerr << "Unable to open menu item file.\n";
//    }
//}
//
//void FileManager::SaveMenuToFile(const MenuItem menuItems[], int numMenuItems) {
//    ofstream file(fileName + "_menuitems.txt");
//    if (file.is_open()) {
//        for (int i = 0; i < numMenuItems; ++i) {
//            menuItems[i].SaveToFile(file);
//        }
//        cout << "Menu items data saved to file.\n";
//        file.close();
//    }
//    else {
//        cerr << "Unable to open menu items file.\n";
//    }
//}
//
//void FileManager::SaveOrderToFile(const string& orderData) {
//    ofstream file(fileName + "_orders.txt", ios::app);
//    if (file.is_open()) {
//        file << orderData << endl;
//        cout << "Order data saved to file.\n";
//        file.close();
//    }
//    else {
//        cerr << "Unable to open order file.\n";
//    }
//}
//
//void FileManager::SaveRatingToFile(const string& ratingData) {
//    ofstream file(fileName + "_ratings.txt", ios::app);
//    if (file.is_open()) {
//        file << ratingData << endl;
//        cout << "Rating data saved to file.\n";
//        file.close();
//    }
//    else {
//        cerr << "Unable to open rating file.\n";
//    }
//}
//
//void FileManager::SavePaymentToFile(const string& paymentData) {
//    ofstream file(fileName + "_payments.txt", ios::app);
//    if (file.is_open()) {
//        file << paymentData << endl;
//        cout << "Payment data saved to file.\n";
//        file.close();
//    }
//    else {
//        cerr << "Unable to open payment file.\n";
//    }
//}
//
//int FileManager::LoadMenuFromFile(const string& fileName, MenuItem menuItems[], int maxSize) {
//    ifstream file(fileName);
//
//    if (!file.is_open()) {
//        return 0;  // Return 0 if file cannot be opened
//    }
//
//    int numItems = 0;
//
//    while (numItems < maxSize && menuItems[numItems].LoadFromFile(file)) {
//        // Increment numItems for each successfully loaded menu item
//        ++numItems;
//    }
//
//    file.close();
//    return numItems;  // Return the number of menu items loaded
//}
//
//bool FileManager::LoadOrderFromFile(const string& fileName, Order* orders, int maxOrders) {
//    ifstream file(fileName + "_orders.txt");
//    if (file.is_open()) {
//        int orderCount = 0;
//
//        while (orderCount < maxOrders && file >> orders[orderCount]) {
//            orderCount++;
//        }
//
//        file.close();
//        return true;
//    }
//    else {
//        cerr << "Unable to open order history file.\n";
//        return false;
//    }
//}
//
//// Function to remove a menu item from a file
//void RemoveMenuItemFromFile(const string& fileName, const string& itemIdToRemove) {
//    ifstream inFile(fileName);
//    if (!inFile.is_open()) {
//        cerr << "Unable to open file: " << fileName << endl;
//        return;
//    }
//
//    ofstream outFile(fileName + "_temp");  // Temporary file to write updated content
//
//    string line;
//    bool itemFound = false;
//
//    while (getline(inFile, line)) {
//        // Check if the line contains the item to be removed
//        if (line.find(itemIdToRemove) == string::npos) {
//            // If not, write the line to the temporary file
//            outFile << line << endl;
//        }
//        else {
//            itemFound = true;
//        }
//    }
//
//    inFile.close();
//   // outFile.close(); //SOME ERROR HERE
//
//    // Rename the temporary file to the original file if the item was found
//    if (itemFound) {
//        remove(fileName.c_str());  // Remove the original file
//        rename((fileName + "_temp").c_str(), fileName.c_str());
//        cout << "Menu item removed successfully.\n";
//    }
//    else {
//        remove((fileName + "_temp").c_str());  // Remove the temporary file
//        cout << "Menu item not found.\n";
//    }
//}
