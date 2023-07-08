#include "BankAccount.h"

// Constructor for BankAccount class
BankAccount::BankAccount(unsigned int account_number, const std::string& owner_name, double balance)
        : account_no(account_number), owner_name(owner_name), balance(balance) {
    // Initialize the BankAccount object with the provided account number, owner's name, and balance
}

// Deposit funds into the account
void BankAccount::deposit(double amount) {
    balance += amount;  // Add the specified amount to the account's balance
}

// Withdraw funds from the account
// Returns the remaining balance after the withdrawal
double BankAccount::withdraw(double amount) {
    if (amount > balance) {
        std::cout << "Insufficient balance. ";  // Display an error message if withdrawal amount exceeds the balance
        return balance;  // Return the current balance
    } else {
        balance -= amount;  // Subtract the specified amount from the account's balance
        return balance;  // Return the remaining balance
    }
}

// Accessor for account number
// Returns the account number of the BankAccount object
unsigned int BankAccount::getAccountNumber() const {
    return account_no;  // Return the account number
}

// Accessor for owner's name
// Returns the owner's name of the BankAccount object
std::string BankAccount::getOwnerName() const {
    return owner_name;  // Return the owner's name
}

// Accessor for balance
// Returns the current balance of the BankAccount object
double BankAccount::getBalance() const {
    return balance;  // Return the balance
}

// Overloading the >> operator for input stream
// Allows input of BankAccount object from istream
std::istream& operator>>(std::istream& is, BankAccount& obj) {
    is >> obj.account_no >> obj.owner_name >> obj.balance;  // Read the account number, owner's name, and balance from istream
    return is;  // Return the updated istream object
}

// Overloading the << operator for output stream
// Allows output of BankAccount object to ostream
std::ostream& operator<<(std::ostream& os, const BankAccount& obj) {
    os << "Account " << obj.account_no << ", owned by " << obj.owner_name << ", has a balance of " << obj.balance;
    // Output the account information to ostream
    return os;  // Return the updated ostream object
}
