/*
 * Write a program where a class Vehicle has attributes like speed and color.
 * Create two subclasses: Car and Bike, which inherit these attributes and add
 * specific ones like wheels for both classes.
 *
 * The tests were written by artificial intelligence for a good and better format
 *
 * By: Legacy
 */


#include <iostream>
#include <string>

using namespace std;

class Vehicle {
 protected:
  int speed;
  string color;

 public:
  Vehicle() = default;
  Vehicle(int speed, const string& color) : speed{speed}, color{color} {};

  virtual ~Vehicle() = default;

  // method for display Information
  virtual void displayInfo() const {
    cout << "Speed: " << speed << endl;
    cout << "color: " << color << endl;
  }

  virtual void startEngine() const {
    cout << "Vehicle engine started!" << endl;
  }
  // Getter methods
  int getSpeed() const { return speed; }
  string getColor() const { return color; }

  // Setter methods
  void setSpeed(int speed) {
    if (speed > 0) {
      this->speed = speed;
    } else {
      cout << "Error: Speed cannot be negative!" << endl;
    }
  };
  void setColor(const string& color) { this->color = color; }
};

class Car : public Vehicle {
 private:
  int wheels;
  int doors;
  string fuelType;

 public:
  Car() = default;
  Car(int speed, const string& color, int wheels = 4, int doors = 4,
      const string& fuelType = "gasoline")
      : Vehicle(speed, color),
        wheels{wheels},
        doors(doors),
        fuelType(fuelType){};

  // override display method
  void displayInfo() const override {
    Vehicle::displayInfo();
    cout << "Wheels: " << wheels << endl;
    cout << "Doors: " << doors << endl;
    cout << "Fuel Type: " << fuelType << endl;
  }
  // car-specific method
  void honk() const { cout << " Beep Beep! " << endl; }

  // getter methods
  int getWheels() const { return wheels; }
  int getDoors() const { return doors; }
  string getFuelType() const { return fuelType; }

  // setter methods
  void setWheels(int wheels) {
    if (wheels > 0) {
      this->wheels = wheels;
    } else {
      cout << "Error: Wheels must be positive!" << endl;
    }
  }
  void setDoors(int doors) {
    if (doors > 0) {
      this->doors = doors;
    } else {
      cout << "Error: Doors cannot be negative!" << endl;
    }
  }
  void setFuelType(const string& fuelType) { this->fuelType = fuelType; }
};

class Bike : public Vehicle {
 private:
  int wheels;
  string bikeType;

 public:
  Bike() = default;
  Bike(int speed, const string& color, int wheels = 2,
       const string& bikeType = "mountain")
      : Vehicle(speed, color), wheels{wheels}, bikeType(bikeType) {}

  // override display info method
  void displayInfo() const override {
    Vehicle::displayInfo();
    cout << "Wheels: " << wheels << endl;
    cout << "Bike Type: " << bikeType << endl;
  }

  // Bike-specific method
  void ringBell() const { cout << "Ring ring! " << endl; }

  // Getter methods
  int getWheels() const { return wheels; }
  string getBikeType() const { return bikeType; }

  // setter methods
  void setWheels(int wheels) {
    if (wheels > 0) {
      this->wheels = wheels;
    } else {
      cout << "Error: Doors cannot be negative!" << endl;
    }
  }
  void setBikeType(const string& bikeType) { this->bikeType = bikeType; }
};
int main(void) {
  // Create objects using parameterized constructors
  Car myCar(120, "red", 4, 2, "electric");
  myCar.displayInfo();
  myCar.startEngine();
  myCar.honk();

  cout << endl << "==============================" << endl << endl;

  // Create objects using default constructor and setters
  cout << "Creating default car and setting values:" << endl;
  Car defaultCar;  // Default constructor
  defaultCar.setSpeed(80);
  defaultCar.setColor("blue");
  defaultCar.setWheels(4);
  defaultCar.setDoors(4);
  defaultCar.setFuelType("diesel");
  defaultCar.displayInfo();

  cout << endl << "==============================" << endl << endl;

  Bike myBike(25, "blue", 2, "road");
  myBike.displayInfo();
  myBike.startEngine();
  myBike.ringBell();

  cout << endl << "==============================" << endl << endl;
  cout << "Creating default bike and setting values:" << endl;
  Bike defaultBike;  // Default constructor
  defaultBike.setSpeed(35);
  defaultBike.setColor("yellow");
  defaultBike.setWheels(2);
  defaultBike.setBikeType("electric");
  defaultBike.displayInfo();
}