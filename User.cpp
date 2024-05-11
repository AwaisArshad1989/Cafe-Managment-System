#include "user.h"
#include "customer.h"
#include <iostream>

// Constructor
User::User() {};
User::User(const string& id, const string& name, const string& pass, const string& type)
    : userID(id), userName(name), password(pass), userType(type) {}

// Getter and Setter for userID
const string& User::GetUserID() const {
    return userID;
}

void User::SetUserID(const string& id) {
    userID = id;
}

// Getter and Setter for userName
const string& User::GetUserName() const {
    return userName;
}

void User::SetUserName(const string& name) {
    userName = name;
}

// Getter and Setter for password
const string& User::GetPassword() const {
    return password;
}

void User::SetPassword(const string& pass) {
    password = pass;
}

// Getter and Setter for userType
const string& User::GetUserType() const {
    return userType;
}

// Method to handle login or register based on user's choice
void User::LoginOrRegister() {
    cout << "Do you want to login or register? Enter '1' for login, '2' for register: ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        // Log in
        string loginID, loginPassword;
        cout << "Enter User ID for Login: ";
        cin >> loginID;
        cout << "Enter Password for Login: ";
        cin >> loginPassword;

        if (Login(loginID, loginPassword)) {
            cout << "Login Successful!\n";
            if (userType == "Customer")
            {
                Customer c1(userID,userName,password, userType) ;
                c1.customerMenu();
                cout << "Ends" << endl;
            }
        }
        else {
            cout << "Login Failed. Incorrect User ID or Password.\n";
        }
    }
    else if (choice == 2) {
        // Register a new user
        Register();
    }
    else {
        cout << "Invalid choice.\n";
    }
}

// Method to register a new user
void User::Register() {
    cout << "Registration Form\n";
    cout << "Enter User ID: ";
    cin >> userID;
    cout << "Enter User Name: ";
    cin >> userName;
    cout << "Enter Password: ";
    cin >> password;
    cout << "Enter User Type: ";
    cin >> userType;
    cout << "Registration Successful!\n";
}

// Method to log in
bool User::Login(const string& inputUserID, const string& inputPassword) const {
    return (inputUserID == userID && inputPassword == password);
}

void User::DisplayMenu() const {
    cout << "Welcome, " << userName << "!\n";
    cout << "-------------------------\n";
    cout << "Dummy Menu:\n";
    cout << "1. View Menu\n";
    cout << "2. Place Order\n";
    cout << "3. View Order History\n";
    cout << "4. Logout\n";
    cout << "-------------------------\n";
}

void User::Logout() {
    cout << "Logging out...\n";
    // Add any additional logout-related operations if needed
    // For example: Clear session data, perform cleanup, etc.
}

// Virtual destructor
User::~User() {}
