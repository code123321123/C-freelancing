#include <iostream>
using std::cout;

// Example of Unique pointer

class Car {
    public:
        void show() {
            cout << "This is show method" << '\n';
        }
}

int main() {
    unique_ptr<Car> p1(new Car);
    p1->show();
    return 0;
}

// Without using Unique pointer

class Car {
    public:
        void show() {
            cout << "This is show method" << '\n';
        }
}

int main() {
    Car *car = new Car();
    car->show();
    return 0;
}

// Example of Abstarct class

class Vachile {
    public:
        virtual int getSpeed() = 0;
        int getMileage() {
            return this->mileage;
        }
    protected:
        int mileage;
}

class Bus: public Vachile {
    public:
        int getSpeed() {
            return 20;
        }
}

// Without using abstract class

class Bus {
    private:
        int mileage;
    public:
        int getSpeed() {
            return 20;
        }

        int getMileage() {
            return this->mileage;
        }
}