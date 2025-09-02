/*
 * Create a parent class Animal with methods eat() and sleep().
 * Then, create a child class Dog that inherits from Animal and adds a method
 * bark(). Demonstrate how you would use the methods from both the parent and
 * child classes.
 *
 * By: Legacy
 */

#include <iostream>

using namespace std;

class Animal {
 public:
  Animal() = default;

  void eat() { cout << "Eating..." << endl; }
  void sleep() { cout << "Sleeping..." << endl; }
};

class Dog : public Animal {
 public:
  void bark() { cout << "Barking..." << endl; }
};

int main(void) {
  Animal a1;
  a1.eat();
  a1.sleep();

  Dog d1;
  d1.eat();
  d1.sleep();
  d1.bark();
}