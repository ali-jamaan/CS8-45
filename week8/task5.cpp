/*
 * Write a program where a class BankAccount contains methods to deposit and
 * withdraw money. Create a subclass SavingsAccount that inherits BankAccount
 * and adds an interest rate attribute. Demonstrate adding interest to the
 * balance.
 *
 * The tests were written by artificial intelligence for a good and better format
 *
 * By: Legacy
 */
#include <iomanip>
#include <iostream>
#include <stdexcept>

class BankAccount {
 protected:
  double balance;

 private:
  void validateBalance(double balance) const {
    if (balance < 0) {
      throw std::invalid_argument("Intial Balance con not be negative!");
    }
  }

 public:
  BankAccount() : balance(0.0){};
  BankAccount(double balance) {
    validateBalance(balance);
    this->balance = balance;
  }

  virtual ~BankAccount() = default;

  // Getter methods
  double getBalance() const { return balance; }

  // Setter methods
  void setBalance(double balance) {
    validateBalance(balance);
    this->balance = balance;
  }

  void deposit(double amount) {
    if (amount <= 0) {
      throw std::invalid_argument("Deposit must be positive.");
    }
    balance += amount;
  }

  void withdraw(double amount) {
    if (amount <= 0) {
      throw std::invalid_argument("Withdrawal must be positive.");
    }
    if (amount > balance) {
      throw std::invalid_argument("Insufficient funds.");
    }
    balance -= amount;
  }

  virtual void displayAccount() const {
    std::cout << "Account Balance: $" << std::fixed << std::setprecision(2)
              << balance << std::endl;
  }
};

class SavingsAccount : public BankAccount {
 private:
  double interestRate;

  void validateInterestRate(double interestRate) const {
    if (interestRate < 0 || interestRate > 1) {
      throw std::invalid_argument("Interest rate must be between 0 and 1.");
    }
  }

 public:
  SavingsAccount() : BankAccount(), interestRate(0.0){};
  SavingsAccount(double balance, double interestRate) : BankAccount(balance) {
    validateInterestRate(interestRate);
    this->interestRate = interestRate;
  };

  // Getter methods
  double getInterestRate() const { return interestRate; }
  // setter methods
  void setInterestRate(double interestRate) {
    validateInterestRate(interestRate);
    this->interestRate = interestRate;
  }

  void addInterest() {
    double interset = interestRate * balance;
    deposit(interset);
  }

  void displayAccount() const override {
    BankAccount::displayAccount();
    std::cout << "Interest Rate: " << (interestRate * 100) << "%\n";
  }
};

int main(void) {
  try {
    // Create a savings account with $1000 and 5% interest rate
    SavingsAccount account(1000.0, 0.05);

    std::cout << "=== Initial Account Status ===" << std::endl;
    account.displayAccount();

    std::cout << "\n=== Making Transactions ===" << std::endl;

    // Make a deposit
    account.deposit(500.0);
    std::cout << "Deposited: $500.00" << std::endl;
    std::cout << "New balance: $" << std::fixed << std::setprecision(2)
              << account.getBalance() << std::endl;

    // Make a withdrawal
    account.withdraw(200.0);
    std::cout << "Withdrew: $200.00" << std::endl;
    std::cout << "New balance: $" << std::fixed << std::setprecision(2)
              << account.getBalance() << std::endl;

    std::cout << "\n=== Adding Interest ===" << std::endl;
    account.addInterest();

    std::cout << "\n=== Final Account Status ===" << std::endl;
    account.displayAccount();

    // Demonstrate error handling
    std::cout << "\n=== Testing Error Handling ===" << std::endl;
    try {
      account.withdraw(2000.0);  // Should fail
    } catch (const std::exception& e) {
      std::cout << "Expected error: " << e.what() << std::endl;
    }

  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
    return 1;
  }
}
