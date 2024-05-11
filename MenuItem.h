//#ifndef MENUITEM_H
//#define MENUITEM_H

#include <string>
#include<iostream>

//using namespace std;
//
//class MenuItem {
//private:
//    string itemID;
//    string itemName;
//    string itemDescription;
//    double price;
//    int quantityInStock;
//
//public:
//    
//    // Constructors
//    MenuItem();
//    MenuItem(const string& id, const string& name, const string& description, double itemPrice, int stockQuantity);
//
//    // Method to update stock quantity
//    void UpdateStock(int quantity);
//
//    // Getters for item attributes
//    string GetItemID() const;
//    string GetItemName() const;
//    string GetItemDescription() const;
//    double GetPrice() const;
//    int GetQuantityInStock() const;
//
//    // Setter methods
//    void SetItemID(const string& id);
//    void SetItemName(const string& name);
//    void SetPrice(double price);
//    void SetQuantityInStock(int quantity);
//
//    // Method to load item details from a file
//    bool LoadFromFile(ifstream& file);
//    // Method to save item details to a file
//    void SaveToFile(ofstream& file) const;
//
//    // Operator overloads
//    friend istream& operator>>(istream& is, MenuItem& menuItem);
//
//};
//
//#endif // MENUITEM_H
