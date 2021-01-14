#include <iostream>
#include <string>

#define TWO 2

int checker = 1;

class Gender {
  protected:
  std::string gender;

  public:
  int heightInches;

};


class Person : protected Gender{
  protected:
    std::string name;
    int age;

  public:
    void getInfo(){
      std::cout << "What is your name?" << std::endl;
      std::cin >> name;
      std::cout << "What is your age?\n";
      std::cin >> age;
      std::cout << "What is your gender?\n";
      std::cin >> gender;
      std::cout << "In inches, how tall are you?\n";
      std::cin >> heightInches;
    };

    void sayHi(){
      std::cout << "Hi, " << name << " you are " << age << " years old," << " and you are a " << gender << ".\n" << std::endl;
    };
    void sayHeight(){
      std::cout << name << ", you are " << heightInches << " in tall.\n" << std::endl;
    }

};

// Setting instance of class
Person Person1;

// using preprocessor definition #define below

int add(int num){
  std::cout << num * num << std::endl;
  return 0;
}

int main() {
  // Person1.getInfo();
  // Person1.sayHi();
  // Person1.sayHeight();
  add(TWO);
}