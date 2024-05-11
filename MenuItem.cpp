#include "menuitem.h"
#include <fstream>
#include<iostream>

//// Constructors
//MenuItem::MenuItem(){}
//MenuItem::MenuItem(const string& id, const string& name, const string& description, double itemPrice, int stockQuantity)
//    : itemID(id), itemName(name), itemDescription(description), price(itemPrice), quantityInStock(stockQuantity) {}
//
//// Method to update stock quantity
//void MenuItem::UpdateStock(int quantity)
//{
//    quantityInStock += quantity;
//}
//
//// Getters for item attributes
//string MenuItem::GetItemID() const 
//{
//    return itemID;
//}
//
//string MenuItem::GetItemName() const {
//    return itemName;
//}
//
//string MenuItem::GetItemDescription() const {
//    return itemDescription;
//}
//
//double MenuItem::GetPrice() const {
//    return price;
//}
//
//int MenuItem::GetQuantityInStock() const {
//    return quantityInStock;
//}
//
//// Setter methods
//void MenuItem::SetItemID(const string& id) {
//    itemID = id;
//}
//
//void MenuItem::SetItemName(const string& name) {
//    itemName = name;
//}
//
//void MenuItem::SetPrice(double newPrice) {
//    price = newPrice;
//}
//
//void MenuItem::SetQuantityInStock(int newQuantity) {
//    quantityInStock = newQuantity;
//}
//
//bool MenuItem::LoadFromFile(ifstream& file) {
//    // Assuming the file format is: ItemID ItemName Price QuantityInStock
//    if (file >> itemID >> itemName >> price >> quantityInStock) {
//        return true;
//    }
//    else {
//        return false;
//    }
//}
//
//// Method to save item details to a file
//void MenuItem::SaveToFile(ofstream& file) const {
//    // Save item details to the file
//    file << itemID << " " << itemName << " " << price << " " << quantityInStock << "\n";
//}
//
//// Operator overloads
//istream& operator>>(stdistream& is, MenuItem& menuItem) {
//    // Prompt and get input for each member variable
//    cout << "Item ID: ";
//    is >> menuItem.itemID;
//
//    cout << "Item Name: ";
//    is >> menuItem.itemName;
//
//    cout << "Price: ";
//    is >> menuItem.price;
//
//    cout << "Quantity in Stock: ";
//    is >> menuItem.quantityInStock;
//
//    return is;
//}
