//#ifndef FILEMANAGER_H
//#define FILEMANAGER_H
//
//#include <fstream>
//#include "menuitem.h"
//#include "Order.h"
//#include <string>
//using namespace std;
//
//class FileManager {
//private:
//    string fileName;
//
//public:
//    // Constructors
//    FileManager();
//    FileManager(const string& file);
//
//    //For reading a file
//    string ReadFile(const string& fileName) const;
//
//    // Methods for saving data to files
//    void SaveUserToFile(const string& userData);
//    void SaveMenuItemToFile(const string& itemID, const string& itemName, double price, int quantityInStock);
//    void SaveMenuToFile(const MenuItem menuItems[], int numMenuItems);
//    void SaveOrderToFile(const string& orderData);
//    void SaveRatingToFile(const string& ratingData);
//    void SavePaymentToFile(const string& paymentData);
//
//    // Function to remove a menu item from a file
//    void RemoveMenuItemFromFile(const string & fileName, const string& itemIdToRemove);
//
//    // Method to load menu items from a file into an array
//    int LoadMenuFromFile(const string& fileName, MenuItem menuItems[], int maxSize);
//    bool LoadOrderFromFile(const string& fileName, Order* orders, int maxOrders);
//    // Additional methods for loading data from files if needed
//};
//
//#endif // FILEMANAGER_H
