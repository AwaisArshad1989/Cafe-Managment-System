#ifndef RATING_H
#define RATING_H

#include <string>
using namespace std;

class Rating {
private:
    string ratingID;
    string menuItemID;
    string customerID;
    int score;
    string comment;

public:
    // Constructor
    Rating(const string& id, const string& itemID, const string& customer, int ratingScore, const string& customerComment);

    // Method to handle the rating
    void Rate();

    // Getters for rating attributes
    string GetRatingID() const;
    string GetMenuItemID() const;
    string GetCustomerID() const;
    int GetScore() const;
    string GetComment() const;
};

#endif // RATING_H
