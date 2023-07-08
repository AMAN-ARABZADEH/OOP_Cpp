//
// Created by Aman on 2023-07-08.
//

#ifndef OOP_BANKACCOUNT_H
#define OOP_BANKACCOUNT_H

#include <iostream>
#include <string>

class BankAccount {
    friend std::istream& operator>>(std::istream& is, BankAccount& obj);
    friend std::ostream& operator<<(std::ostream& os, const BankAccount& obj);

public:
    // Constructor
    // Initializes a BankAccount object with the provided account number, owner's name, and balance.
    // The default values are set if no arguments are provided.
    BankAccount(unsigned int account_number = 0, const std::string& owner_name = "", double balance = 0.0);

    // Deposit funds into the account
    // Adds the specified amount to the account's balance
    void deposit(double amount);

    // Withdraw funds from the account
    // Subtracts the specified amount from the account's balance
    // Returns the remaining balance after the withdrawal
    double withdraw(double amount);

    // Accessor for account number
    // Returns the account number of the BankAccount object
    unsigned int getAccountNumber() const;

    // Accessor for owner's name
    // Returns the owner's name of the BankAccount object
    std::string getOwnerName() const;

    // Accessor for balance
    // Returns the current balance of the BankAccount object
    double getBalance() const;

private:
    unsigned int account_no; // Account number
    std::string owner_name; // Owner's name
    double balance; // Balance
};

#endif //OOP_BANKACCOUNT_H
