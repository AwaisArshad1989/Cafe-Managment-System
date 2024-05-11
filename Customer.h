#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "user.h"
using namespace std;


class Customer : public User {
private:
  //  string userType;  // Add a member variable to represent the user type
   string customertype;
public:
    // Constructor
     Customer(const string& id, const string& name, const string& pass, const string& userType);

    // Methods specific to the Customer class
    void customerMenu();
    void ViewMenu();
    void PlaceOrder();
    void ViewOrderHistory();
    void Logout();

private:
    // Additional functions for displaying menus
    void DisplayStudentMenu();
    void DisplayFacultyMenu();
    void DisplayNonFacultyMenu();
};

#endif // CUSTOMER_H
