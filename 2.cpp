#include <iostream>

class complex
{
    float real1;
    float imaginary1;
    float real2;
    float imaginary2;
    float rsum;
    float csum;

public:
    complex(float a, float b, float c, float d)
    {
        real1 = a;
        imaginary1 = b;
        real2 = c;
        imaginary2 = d;
    }
    void s()
    {
        rsum = real1 + real2;
        csum = imaginary1 + imaginary2;
    }
    void display()
    {
        std::cout << "sum is: " << rsum << "+" << csum << "i";
    }
};

int main()
{
    float x;
    std::cout << "enter real1: ";
    std::cin >> x;

    float y;
    std::cout << "enter imaginary1: ";
    std::cin >> y;

    float z;
    std::cout << "enter real2: ";
    std::cin >> z;

    float w;
    std::cout << "enter imaginary2: ";
    std::cin >> w;

    complex obj(x, y, z, w);
    obj.s();
    obj.display();
}