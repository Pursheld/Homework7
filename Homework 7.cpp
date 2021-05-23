#include <iostream>
class Animal
{
public:
    virtual void voice() const=0;
};

class Cat : public Animal
{
public:
    void voice() const override
    {
        std::cout << "Meow\n";
    }
};

class Dog : public Animal
{
public:
    void voice() const override
    {
        std::cout << "Woof\n";
    }
};
class Goat : public Animal
{
public:
    void voice() const override
    {
        std::cout << "Beee\n";
    }
};

int main()
{
    Animal* animals[3];
    animals[0] = new Cat();
    animals[1] = new Dog();
    animals[2] = new Goat();

    for (Animal* b : animals)
        b->voice();
}


