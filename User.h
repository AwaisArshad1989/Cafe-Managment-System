#ifndef USER_H
#define USER_H

#include <string>

using namespace std;
/*
Inheritance:
CafeStaff and Customer inherit from the User class. This establishes an "is-a" relationship, where a cafe staff member "is a" user, and a customer "is a" user.
Composition:
No explicit composition is used in the User class.
*/
class User {
protected:
    string userID;
    string userName;
    string password;
    string userType;

public:
    // Constructor
    User();
    User(const string& id, const string& name, const string& pass, const string& type);

    // Method to handle login or register based on user's choice
    void LoginOrRegister();

    // Method to register a new user
    void Register();

    // Getter and Setter for userID
    const string& GetUserID() const;
    void SetUserID(const string& id);

    // Getter and Setter for userName
    const string& GetUserName() const;
    void SetUserName(const string& name);

    // Getter and Setter for password
    const string& GetPassword() const;
    void SetPassword(const string& pass);

    // Getter and Setter for userType
    const string& GetUserType() const;
    void SetUserType(const string& type);

    virtual void DisplayMenu() const;

    // Method to log in
    bool Login(const string& inputUserID, const string& inputPassword) const;
    virtual void Logout(); // Made virtual to allow polymorphic behavior

    // Virtual destructor
    virtual ~User();
};

#endif // USER_H

