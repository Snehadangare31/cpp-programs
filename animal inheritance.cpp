#include <iostream>
#include <string>

// Base class
class Animal {
protected:
    std::string name;

public:
    Animal(const std::string& animalName) : name(animalName) {}

    void displayInfo() const {
        std::cout << "I am an animal, and my name is " << name << "." << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    Dog(const std::string& dogName) : Animal(dogName) {}

    void makeSound() const {
        std::cout << name << " says: Woof! Woof!" << std::endl;
    }
};

int main() {
    Animal genericAnimal("GenericAnimal");
    genericAnimal.displayInfo();

    Dog myDog("Buddy");
    myDog.displayInfo();
    myDog.makeSound();

    return 0;
}

