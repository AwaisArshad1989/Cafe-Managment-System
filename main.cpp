#include <iostream>
#include "user.h"
#include "customer.h"
#include "cafestaff.h"
#include "administrator.h"

using namespace std;

int main() {
    cout << "Welcome to the Cafe Management System!\n";

    while (true) {
        cout << "\nSelect an option:\n";
        cout << "1. Login\n";
        cout << "2. Exit\n";

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            // Login logic
            //string userId, password;
            //cout << "Enter User ID: ";
            //cin >> userId;
            //cout << "Enter Password: ";
            //cin >> password;

            // Determine user type (Administrator, CafeStaff, Customer) and create the corresponding object
           // User* currentUser = nullptr;
            User *currentUser = new User();
            currentUser->Register();
            currentUser->LoginOrRegister();
            // Implement your logic to authenticate and determine user type

            //if (currentUser) {
            //    // User successfully logged in
            //    while (true) {
            //        currentUser->DisplayMenu();  // Display menu based on user type

            //        int option;
            //        cout << "Enter your choice: ";
            //        cin >> option;

            //       // currentUser->PerformAction(option);  // Perform action based on user input
            //    }
            //}
            //else {
            //    cout << "Invalid User ID or Password. Please try again.\n";
            //}
        }
        else if (choice == 2) {
            cout << "Exiting the Cafe Management System. Goodbye!\n";
            break;
        }
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
