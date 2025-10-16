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

    Cat chat;
    Cat chat2;
        
    chat2 = chat;

    return 0;
}