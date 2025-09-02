/*
 * Implement a parent class Book with attributes like title and author.
 * Create two child classes Ebook and PrintedBook that inherit Book
 * and add specific attributes like file_size for Ebook and pages for
 * PrintedBook.
 *
 * By: Legacy
 */

#include <iostream>
#include <string>

using namespace std;

class Book {
 protected:
  string title;
  string author;

 public:
  Book() : title("UnKnown"), author("UnKnown"){};
  Book(const string& title, const string& author)
      : title{title}, author{author} {};

  virtual ~Book() = default;

  virtual void displayInfo() const {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
  }
  // Getter methods
  string getTitle() const { return title; }
  string getAuthor() const { return author; }

  // Setter methods
  void setTitle(const string& title) { this->title = title; }
  void setAuthor(const string& author) { this->author = author; };
};

class Ebook : public Book {
 private:
  int fileSize;

 public:
  Ebook() : Book(), fileSize(0){};
  Ebook(const string& title, const string& author, int fileSize)
      : Book(title, author), fileSize(fileSize){};

  void displayInfo() const override {
    Book::displayInfo();
    cout << "File Size: " << fileSize << " MB" << endl;
  }
  // Getter methods
  int getFileSize() const { return fileSize; }

  // Setter methods
  void setFileSize(int fileSize) { this->fileSize = fileSize; }
};

class PrintedBook : public Book {
 private:
  int pages;

 public:
  PrintedBook() : Book(), pages(0){};
  PrintedBook(const string& title, const string& author, int pages)
      : Book(title, author), pages(pages){};

  void displayInfo() const override {
    Book::displayInfo();
    cout << "Pages: " << pages << " Pages" << endl;
  }
  // Getter methods
  int getPages() const { return pages; }

  // setter methods
  void setPages(int pages) { this->pages = pages; }
};

int main(void) {
  // Test 1: Normal Book
  cout << "=== Testing Book ===" << endl;
  Book b1("The Alchemist", "Paulo Coelho");
  b1.displayInfo();
  cout << endl;

  // Test 2: Ebook
  cout << "=== Testing Ebook ===" << endl;
  Ebook e1("Clean Code", "Robert C. Martin", 5);
  e1.displayInfo();
  cout << endl;

  // Test 3: PrintedBook
  cout << "=== Testing PrintedBook ===" << endl;
  PrintedBook p1("Introduction to Algorithms", "Cormen et al.", 1200);
  p1.displayInfo();
  cout << endl;
}