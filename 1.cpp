#include <iostream>
#include <cstring>

class office
{
    int Emp_id;
    char Emp_name[100];
    int Emp_sal;

public:
    office(int a, char b[], int c)
    {
        Emp_id = a;
        strcpy(Emp_name, b);
        Emp_sal = c;
    }
    void display()
    {
        std::cout << Emp_id;
        std::cout << "\n";
        std::cout << Emp_name;
        std::cout << "\n";
        std::cout << Emp_sal;
        std::cout << "\n";
    }
};
int main()
{

    for (int i = 0; i <= 1; i++)
    {

        int x;
        std::cout << "enter employee ID: ";
        std::cin >> x;

        char y[100];
        std::cout << "enter employee name: ";
        std::cin >> y;

        int z;
        std::cout << "enter employeee salary: ";
        std::cin >> z;
        office obji(x, y, z);
        obji.display();
    }
}