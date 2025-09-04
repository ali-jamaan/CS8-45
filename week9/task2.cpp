/*
 * Create an Employee class (Abstract class using virtual) which
 * contains:
 * 1. employeeName as a string, paymentPerHour as a integer. All the
 * variables are protected.
 * 2. Parametrized constructor to fill the variables.
 * 3. CalculateSalary() function: This function returns an integer
 * number. The salary of the employee is calculated using the following
 * equation: (paymentPerHour * 8).
 *
 * By: Legacy
 */

#include <iostream>
#include <string>

class Employee {
 protected:
  std::string employeeName;
  int paymentPerHour;

 public:
  Employee() : employeeName(""), paymentPerHour(0){};
  Employee(const std::string& employmentName, int paymentPerHour)
      : employeeName(employmentName), paymentPerHour(paymentPerHour){};

  virtual ~Employee() = default;

  virtual int calculateSalary() = 0;

  virtual void displayData() const {
    std::cout << "Name: " << employeeName
              << "\nPayment Per Hour: " << paymentPerHour << std::endl;
  }
};

class Contractor : public Employee {
 private:
  int workingHours;

 public:
  Contractor() : Employee(), workingHours(0){};
  Contractor(const std::string& employeeName, int paymentPerHour,
             int workingHours)
      : Employee(employeeName, paymentPerHour), workingHours(workingHours){};

  int calculateSalary() override { return paymentPerHour * workingHours; }
  void displayData() const override {
    Employee::displayData();
    std::cout << "Working Hours: " << workingHours << std::endl;
  }
};

class FullTimeEmployee : public Employee {
 private:
  int overtime;

 public:
  FullTimeEmployee() : Employee(), overtime(0){};
  FullTimeEmployee(const std::string& employeeName, int paymentPerHour,
                   int overtime)
      : Employee(employeeName, paymentPerHour), overtime(overtime){};
  int calculateSalary() override { return paymentPerHour * (8 * overtime); }

  void displayData() const override {
    Employee::displayData();
    std::cout << "OverTime: " << overtime << std::endl;
  }
};

void displayInfo(Employee* obj) {
  obj->displayData();
  std::cout << "Salary: " << obj->calculateSalary() << "\n\n";
}

int main(void) {
  Contractor c1("John", 40, 8);
  Contractor c2("Adele", 50, 7);

  FullTimeEmployee f1("Sara", 31, 3);
  FullTimeEmployee f2("Malek", 21, 4);

  displayInfo(&c1);
  displayInfo(&c2);
  displayInfo(&f1);
  displayInfo(&c2);
}
