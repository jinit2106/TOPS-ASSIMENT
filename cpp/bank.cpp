#include <iostream>
#include <string>

class BankAccount {
private:
    std::string depositorName;
    std::string accountNumber;
    std::string accountType;
    double balance;

public:
    // Function to assign values to the bank account
    void assignValues(const std::string& name, const std::string& number, const std::string& type, double initialBalance) {
        depositorName = name;
        accountNumber = number;
        accountType = type;
        balance = initialBalance;
    }

    // Function to deposit an amount into the account
    void deposit(double amount) {
        balance += amount;
        std::cout << "Amount deposited successfully." << std::endl;
    }

    // Function to withdraw an amount from the account
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Amount withdrawn successfully." << std::endl;
        } else {
            std::cout << "Insufficient balance. Withdrawal failed." << std::endl;
        }
    }

    // Function to display the name and balance of the account
    void display() {
        std::cout << "Depositor Name: " << depositorName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Type: " << accountType << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};

int main() {
    BankAccount account;

    // Assigning values to the account
    account.assignValues("John Doe", "123456789", "Savings", 1000.0);

    // Displaying initial account details
    account.display();

    // Depositing an amount
    account.deposit(500.0);

    // Displaying updated account details
    account.display();

    // Withdrawing an amount
    account.withdraw(200.0);

    // Displaying updated account details
    account.display();

    return 0;
}
