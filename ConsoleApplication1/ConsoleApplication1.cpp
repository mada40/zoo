#include <iostream>
#include "Penguin.h"
#include "Stork.h"
#include "Cat.h"
#include "Dog.h"
#include "Zoo.h"

int Animal::count_animals = 0;

int main()
{
    Penguin* Pin = new Penguin("Pin");
    Stork* cool_bird = new Stork("MyZHik B JIo$iNAX");
    Cat* black_cat = new Cat("Snowball");
    Dog* dog = new Dog("SobaKa");

    Zoo zoopark;
    zoopark.add(Pin);
    zoopark.add(black_cat);
    zoopark.add(cool_bird);
    zoopark.add(dog);

    std::cout << "\tLISTEN: \n";
    zoopark.listen();
    std::cout << "-----------------------------\n";

    std::cout << "\tSOMETHING: \n";
    zoopark.do_something();
    std::cout << "-----------------------------\n";

    std::cout << "Count of bird: " << zoopark.get_count_bird() << "\n";

    delete Pin;
    delete black_cat;
    delete cool_bird;
    delete dog;
}

