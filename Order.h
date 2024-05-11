#ifndef ORDER_H
#define ORDER_H

#include <string>
using namespace std;

class Order
{
private:
    static const int MAX_ITEMS = 10;  // Adjust the maximum number of items as needed
    string orderID;
    string customerID;
    string* itemsOrdered;  // Dynamic array to represent composition
    int itemCount;  // To keep track of the number of items in the order
    double totalPrice;
    string orderStatus;

public:
    // Constructor and destructor
    Order(const string& id, const string& customer, double price, const string& status);
    ~Order();

    // Methods for managing the order
    void AddItem(const string& itemID);
    void RemoveItem(const string& itemID);
    void CalculateTotal();
    void ConfirmOrder();
    void CancelOrder();

    // Getters for order attributes
    string GetOrderID() const;
    string GetCustomerID() const;
    const string* GetItemsOrdered() const;  // Return pointer to array
    int GetItemCount() const;  // Return the number of items
    double GetTotalPrice() const;
    string GetOrderStatus() const;

    // Setters for order attributes
    void SetOrderID(const string& id);
    void SetCustomerID(const string& customer);
    void SetItemsOrdered(const string* items, int count);
    void SetTotalPrice(double price);
    void SetOrderStatus(const string& status);

    friend istream& operator>>(istream& is, Order& order);
    friend ostream& operator<<(ostream& os, const Order& order);
};

#endif // ORDER_H
