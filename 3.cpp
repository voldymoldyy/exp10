#include <iostream>

class complex
{
    int real;
    int img;

public:
    void get()
    {
        std::cout << "enter real: ";
        std::cin >> real;
        std::cout << "enter img: ";
        std::cin >> img;
    }
    void print()
    {
        std::cout << real << "+" << img << "i";
    }
    complex operator+(complex b)
    {
        complex c;
        c.real = real + b.real;
        c.img = img + b.img;
        return c;
    }
};

int main()
{
    complex a, b, c;
    a.get();
    b.get();
    c = a + b;
    c.print();
}