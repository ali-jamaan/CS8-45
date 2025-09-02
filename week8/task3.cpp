/*
 * Define a class Person with attributes name and age.
 * Create a subclass Student that inherits these attributes and adds grades.
 * Write a function that prints the details of a student, including their grade,
 * name, and age.
 *
 * The tests were written by artificial intelligence for a good and better format
 *
 * By: Legacy
 */
#include <iostream>
#include <string>

using namespace std;

class Person {
 protected:
  string name;
  int age;

 public:
  Person() : name{"UnKnown"}, age{0} {}
  Person(const string& name, int age) : name{name}, age{age} {}

  virtual ~Person() = default;

  virtual void displayInfo() const {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  }

  // getter methods
  string getName() const { return name; }
  int getAge() const { return age; }

  // setter methods
  void setName(const string& name) { this->name = name; }
  void setAge(int age) {
    if (age > 0) {
      this->age = age;
    } else {
      cout << "Error: age cannot be negative!" << endl;
    }
  }
};

class Student : public Person {
 private:
  int grades;

 public:
  Student() : Person(), grades(0){};
  Student(const string& name, int age, int grades)
      : Person(name, age), grades{grades} {}

  void displayInfo() const override {
    Person::displayInfo();
    cout << "Grades: " << grades << endl;
  }

  // Getter methods
  int getGrades() const { return grades; }

  // Setter methods
  void setGrades(int grades) {
    if (grades >= 0) {
      this->grades = grades;
    } else {
      cout << "Error: Grades cannot be negative!" << endl;
    }
  }
};

void printStudentDetails(const Student& student) {
  cout << "===== STUDENT DETAILS =====" << endl;
  student.displayInfo();
  cout << "============================" << endl;
}
int main(void) {
  cout << "🎓 STUDENT MANAGEMENT SYSTEM TESTING 🎓" << endl;
  cout << "=========================================" << endl;

  // Test 1: Create student with parameterized constructor
  cout << "\n--- TEST 1: Parameterized Constructor ---" << endl;
  Student alice("Alice Johnson", 20, 85);
  printStudentDetails(alice);

  // Test 2: Create student with default constructor and setters
  cout << "\n--- TEST 2: Default Constructor + Setters ---" << endl;
  Student bob;
  cout << "Before setting values:" << endl;
  printStudentDetails(bob);

  bob.setName("Bob Smith");
  bob.setAge(19);
  bob.setGrades(92);
  cout << "\nAfter setting values:" << endl;
  printStudentDetails(bob);

  // Test 3: Test getter methods
  cout << "\n--- TEST 3: Getter Methods ---" << endl;
  cout << "Alice's info using getters:" << endl;
  cout << "Name: " << alice.getName() << endl;
  cout << "Age: " << alice.getAge() << " years old" << endl;
  cout << "Grades: " << alice.getGrades() << "%" << endl;
      // Test 4: Test validation (error handling)
    cout << "\n--- TEST 4: Validation Testing ---" << endl;
    Student charlie;
    cout << "Testing negative age validation:" << endl;
    charlie.setAge(-5);  // Should show error message
    
    cout << "Testing negative grade validation:" << endl;
    charlie.setGrades(-10);  // Should show error message
    
    cout << "\nCharlie after invalid inputs:" << endl;
    printStudentDetails(charlie);
    
    // Test 5: Modify existing student data
    cout << "\n--- TEST 5: Modifying Student Data ---" << endl;
    cout << "Alice before modification:" << endl;
    printStudentDetails(alice);
    
    alice.setName("Alice Cooper");
    alice.setAge(21);
    alice.setGrades(88);
    
    cout << "Alice after modification:" << endl;
    printStudentDetails(alice);
}