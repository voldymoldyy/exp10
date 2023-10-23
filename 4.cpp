#include <iostream>

class rectangle
{
    float length;
    float width;
    float depth;

public:
    rectangle(float a, float b)
    {
        length = a;
        width = b;
    }
    float area()
    {
        int ar = length * width;
        return ar;
    }
};

int main()
{
    int length;
    std::cout << "enter out length: ";
    std::cin >> length;

    int width;
    std::cout << "enter width: ";
    std::cin >> width;

    rectangle r(length, width);
    std::cout << r.area();
}