#include <iostream>
#include <cstring>

class employee
{
public:
    int id;
    char name[100];

    void getdata(int a, char b[])
    {
        id = a;
        strcpy(name, b);
    }
    void display()
    {
        std::cout << id;
        std::cout << "\n";
        std::cout << name;
    }
};

class manager : public employee
{
public:
    double salary;

    void getdata(double p)
    {
        salary = p;
    }
    void display()
    {
        std::cout << salary;
        std::cout << "\n";
    }
};

class projectmanager : public manager
{
public:
    int exp;
    int projects;

    void getdata(int r, int s)
    {
        exp = r;
        projects = s;
    }
    void display()
    {
        std::cout << projects;
        std::cout << "\n";
        std::cout << exp;
    }
};

int main()
{
    int x;
    std::cout << "enter id: ";
    std::cin >> x;

    char k[100];
    std::cout << "enter name: ";
    std::cin >> k;

    double sal;
    std::cout << "enter salary: ";
    std::cin >> sal;

    int experience;
    std::cout << "enter experinece: ";
    std::cin >> experience;

    int noprojects;
    std::cout << "enter no.of projects: ";
    std::cin >> noprojects;

    projectmanager hehe;
    hehe.getdata(experience, noprojects);
    hehe.display();
}
