#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* test[4];

    for (int i = 0; i < 4; i++){
        if (i % 2)
            test[i] = new Cat();
        else
            test[i] = new Dog();
    }
    for (int i = 0; i < 4; i++){
        delete test[i];
    }
    return 0;
}