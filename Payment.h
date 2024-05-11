// payment.h
#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>
using namespace std;

class Payment {
private:
    string paymentID;
    string orderID;
    double amount;
    string paymentStatus;

public:
    // Constructor
    Payment(const string& id, const string& order, double paymentAmount, const string& status);

    // Method to process the payment
    void ProcessPayment();

    // Getters for payment attributes
    string GetPaymentID() const;
    string GetOrderID() const;
    double GetAmount() const;
    string GetPaymentStatus() const;
};

#endif // PAYMENT_H
