/*
 * Write a class for a person which has attributes (name, age, email, address,)
-Make a default constructor to output “Object Created”
-Make a parameterized constructor to take all attributes and assign it to the
object.
- Make a function to output all attributes.
-Take input for two people from the user.
-Output info of the two people using the output function you made.
*
* By: Legacy
*/

#include <iostream>

using namespace std;

class Persion {
 private:
  string name;
  int age;
  string email;
  string address;

 public:
  Persion() = default;
  Persion(string name, int age, string email, string address)
      : name{name}, age{age}, email{email}, address{address} {};
  void printInfo() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Email: " << email << endl;
    cout << "Address: " << address << endl;
  }
};

int main(void) {
  Persion p1("John", 45, "john@john.com", "New York, US");
  Persion p2("Adele", 32, "adele@adele.com", "London, UK");

  p1.printInfo();
  p2.printInfo();
}
