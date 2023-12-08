#include <iostream>
#include <string>

class Animal {
public:
    Animal(std::string name, int age) : name(name), age(age) {}

    virtual void make_sound() const {
        std::cout << "Generic animal sound\n";
    }

protected:
    std::string name;
    int age;
};

class Lion : public Animal {
public:
    Lion(std::string name, int age) : Animal(name, age) {}

    void make_sound() const override {
        std::cout << name << " the Lion roars loudly!\n";
    }
};

class Elephant : public Animal {
public:
    Elephant(std::string name, int age) : Animal(name, age) {}

    void make_sound() const override {
        std::cout << name << " the Elephant trumpets loudly!\n";
    }
};

class Monkey : public Animal {
public:
    Monkey(std::string name, int age) : Animal(name, age) {}

    void make_sound() const override {
        std::cout << name << " the Monkey chatters and screeches!\n";
    }
};

int main() {
    Lion lion("Leo", 5);
    Elephant elephant("Ellie", 10);
    Monkey monkey("Milo", 3);

    lion.make_sound();        // Output: Leo the Lion roars loudly!
    elephant.make_sound();    // Output: Ellie the Elephant trumpets loudly!
    monkey.make_sound();      // Output: Milo the Monkey chatters and screeches!

    return 0;
}
