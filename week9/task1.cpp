#include <exception>
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

class Book {
 private:
  std::string name;
  int numberOfPages;
  float price;

 public:
  Book() : name{""}, numberOfPages(0), price(0.0f){};
  Book(int numberOfPages)
      : name{""}, numberOfPages{numberOfPages}, price(0.0f){};
  Book(const std::string& name, float price)
      : name(name), numberOfPages(0), price(price){};
  Book(const std::string& name, int numberOfPages, float price)
      : name(name), numberOfPages(numberOfPages), price(price){};

  virtual ~Book() = default;

  // Setter
  void setPrice(float price) {
    if (price <= 0) {
      throw std::invalid_argument("Price can not be be negative!");
    }
    this->price = price;
  }

  void setName(const std::string& name) { this->name = name; }

  // Getter
  const std::string getName() const { return name; }
  int getNumberOfPages() const { return numberOfPages; }
  float getPrice() const { return price; }

  // Display all information
  virtual void displayBookInfo() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Number of Pages: " << numberOfPages << std::endl;
    std::cout << "Price: " << std::fixed << std::setprecision(2) << price
              << std::endl;
  }
};

class Author {
 private:
  std::string name;
  std::vector<Book> books;

 public:
  Author(const std::string& name) : name(name){};
  ~Author() { books.clear(); }

  const std::string getName() const { return name; }

  void addBook(Book& book, int index) {
    if (index < 0) {
      throw std::invalid_argument("Invalid index! Index must be non-negative.");
    }
    books[index] = book;
  }

  Book searchBook(const std::string& bookName) {
    for (Book b : books) {
      if (b.getName() == bookName) {
        return b;
      }
    }
    return NULL;
  }

  void displayBooksData() const {
    std::cout << "Author: " << name << std::endl;
    for (Book b : books) {
      b.displayBookInfo();
    }
  }
};
int main(void) {
  try {
  } catch (const std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }
}