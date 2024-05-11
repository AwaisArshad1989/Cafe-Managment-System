#include "order.h"
#include <iostream>
using namespace std;


// Constructor
Order::Order(const string& id, const string& customer, double price, const string& status)
    : orderID(id), customerID(customer), itemCount(0), totalPrice(price), orderStatus(status) {
    itemsOrdered = new string[MAX_ITEMS];
}

// Destructor
Order::~Order() {
    delete[] itemsOrdered;  // Release dynamic memory
}

// Methods for managing the order
void Order::AddItem(const string& itemID) {
    if (itemCount < MAX_ITEMS) {
        itemsOrdered[itemCount++] = itemID;
    }
    else {
        // Handle case where maximum items have been reached
    }
}

void Order::RemoveItem(const string& itemID)
{
    // Implementation to remove the specified item from the order
    int itemIndex = -1;  // Initialize to an invalid index

    // Find the index of the item in the order
    for (int i = 0; i < itemCount; ++i)
    {
        if (itemsOrdered[i] == itemID)
        {
            itemIndex = i;
            break;
        }
    }

    // Check if the item was found
    if (itemIndex != -1)
    {
        // Shift items to fill the gap
        for (int j = itemIndex; j < itemCount - 1; ++j)
        {
            itemsOrdered[j] = itemsOrdered[j + 1];
        }
        --itemCount;
        cout << "Item removed from the order." << endl;
    }
    else {
        cout << "Item not found in the order." << endl;
        // You might want to handle this case based on your requirements
    }
}

void Order::CalculateTotal() 
{
   
    // Implementation to calculate the total price based on items in the order
    // For simplicity, let's assume each item has a fixed price
    const double itemPrice = 10.0;  // Replace with your pricing logic

    totalPrice = itemCount * itemPrice;
}

void Order::ConfirmOrder()
{
    // Implementation to confirm and finalize the order
    // You might want to call a method to process the payment here
     // Implementation to confirm and finalize the order
    CalculateTotal();  // Calculate total before confirming
    orderStatus = "Confirmed";
    cout << "Order confirmed. Total price: $" << GetTotalPrice() << endl;

    // Placeholder for payment processing logic
   cout << "Processing payment..." <<endl;
    // Add your payment processing logic here

    // Additional actions if needed after processing payment
    cout << "Payment processed successfully." << endl;
}

void Order::CancelOrder()
{
    // Implementation to cancel the order
    orderStatus = "Cancelled";
   cout << "Order cancelled." << endl;

    // Placeholder for any necessary cleanup or cancellation procedures
    cout << "Performing cancellation procedures..." <<endl;
    // Add your cleanup or cancellation logic here

    // Additional actions if needed after cancellation
    cout << "Cancellation procedures completed." << endl;

}

// Getters for order attributes
string Order::GetOrderID() const {
    return orderID;
}

string Order::GetCustomerID() const {
    return customerID;
}

const string* Order::GetItemsOrdered() const {
    return itemsOrdered;
}

int Order::GetItemCount() const {
    return itemCount;
}

double Order::GetTotalPrice() const {
    return totalPrice;
}

string Order::GetOrderStatus() const {
    return orderStatus;
}

// Setters for order attributes
void Order::SetOrderID(const string& id) {
    orderID = id;
}

void Order::SetCustomerID(const string& customer) {
    customerID = customer;
}

void Order::SetItemsOrdered(const string* items, int count) {
    // Assuming that items is an array of strings with 'count' elements
    if (count <= MAX_ITEMS) {
        for (int i = 0; i < count; ++i) {
            itemsOrdered[i] = items[i];
        }
        itemCount = count;
    }
    else {
        // Handle case where count exceeds MAX_ITEMS
    }
}

void Order::SetTotalPrice(double price) {
    totalPrice = price;
}

void Order::SetOrderStatus(const string& status) {
    orderStatus = status;
}

istream& operator>>(istream& is, Order& order) {
    string id, customer, status;
    double price;

    // Read order details from the stream
    is >> id >> customer >> price >> status;

    // Set the read details to the Order object
    order.SetOrderID(id);
    order.SetCustomerID(customer);
    order.SetTotalPrice(price);
    order.itemsOrdered = new string[Order::MAX_ITEMS];  // Allocating memory for items
    order.itemCount = 0;
    order.orderStatus = status;

    // Assuming there is an AddItem function in Order class
    string itemID;
    while (is >> itemID) 
    {
        order.AddItem(itemID);
    }

    return is;
}

ostream& operator<<(ostream& os, const Order& order) {
    // Write order details to the stream
    os << "Order ID: " << order.GetOrderID() << ", Customer ID: " << order.GetCustomerID()
        << ", Total Price: " << order.GetTotalPrice() << ", Order Status: " << order.GetOrderStatus() << "\n";

    os << "Items Ordered: ";
    const string* items = order.GetItemsOrdered();
    for (int i = 0; i < order.GetItemCount(); ++i) {
        os << items[i] << " ";
    }

    return os;
}
