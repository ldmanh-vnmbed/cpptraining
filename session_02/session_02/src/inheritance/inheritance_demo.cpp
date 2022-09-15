#include <iostream>
using std::cout;
using std::endl;

// base class
class Animal {
public:
    virtual void info() {
        cout << "Called at base class" << endl;
    }

    void eat() {
        info();
        cout << "I can eat!" << endl;
    }

    void sleep() {
        info();
        cout << "I can sleep!" << endl;
    }

    virtual void run() {
        cout << "Run 1" << endl;
    }
};

// Inheritance illustration
// derived class
class Dog : public Animal {
public:
    // polymorphism
    void info() override {
        cout << "Called at derived class" << endl;
    }

    void bark() {
        info();
        cout << "I can bark! Woof woof!!" << endl;
    }

    void run() override {
        cout << "Dog runs" << endl;
    }
};

class Wolf : public Animal {
public:
    void bark() {
        info();
        cout << "Wolf Wolf. I am a wolf1" << endl;
    }

    void run() override {
        info();
        cout << "Wolf chases" << endl;
    }
};

int main() {
    // Base class invocation
    {
        Animal animal1;
        animal1.eat();
        animal1.sleep();
    }

    cout << "=======================\n";
    // Create object of the Dog class
    Dog dog1;

    // Calling members of the base class
    dog1.eat();
    dog1.sleep();

    // Calling member of the derived class
    dog1.bark();

    cout << "=======================\n";
    // Polymorphism illustration
    Animal* a = new Animal; // BASE
    Dog d;
    Wolf w;
    a = &d;
    a->run();
    a = &w;
    a->run();

    return 0;
}

