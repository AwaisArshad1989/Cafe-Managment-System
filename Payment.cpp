// payment.cpp
#include "payment.h"
#include <iostream>

// Constructor
Payment::Payment(const string& id, const string& order, double paymentAmount, const string& status)
    : paymentID(id), orderID(order), amount(paymentAmount), paymentStatus(status) {}

// Method to process the payment
void Payment::ProcessPayment()
{
    // Implementation to process the payment
    // You might want to update the order status, record the transaction, etc.

    // For demonstration purposes, let's just print a message
    cout << "Processing payment for Order ID: " << orderID << "\n";

    // Update the payment status
    paymentStatus = "Processed";

    cout << "Payment processed successfully. Thank you for your purchase!\n";
}

// Getters for payment attributes
string Payment::GetPaymentID() const
{
    return paymentID;
}

string Payment::GetOrderID() const
{
    return orderID;
}

double Payment::GetAmount() const
{
    return amount;
}

string Payment::GetPaymentStatus() const
{
    return paymentStatus;
}
