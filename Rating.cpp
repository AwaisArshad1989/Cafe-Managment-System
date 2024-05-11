#include "rating.h"
#include <iostream>

// Constructor
Rating::Rating(const string& id, const string& itemID, const string& customer, int ratingScore, const string& customerComment)
    : ratingID(id), menuItemID(itemID), customerID(customer), score(ratingScore), comment(customerComment) {}

// Method to handle the rating
void Rating::Rate() {
    // Implementation to handle the rating
    // You might want to update the menu item's overall rating or perform other actions
    cout << "Rating recorded. Thank you for your feedback!\n";
}

// Getters for rating attributes
string Rating::GetRatingID() const {
    return ratingID;
}

string Rating::GetMenuItemID() const {
    return menuItemID;
}

string Rating::GetCustomerID() const {
    return customerID;
}

int Rating::GetScore() const {
    return score;
}

string Rating::GetComment() const {
    return comment;
}
