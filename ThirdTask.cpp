#include <iostream>
#include <cmath>

void finish(double t)
{
    std::cout << "Passed" << std::endl;
    if (t != 9.81)
    {
        throw t;
    }
    std::cout << "6 pass" << std::endl;
}

void comp(std::string name)
{
    std::cout << "Your age is " << name << "?" << std::endl;
    double g; 
    std::cout << "Enter g: "; 
    std::cin >> g;
    try
    {
        finish(g); 
    }
    catch(double g)
    {
        std::cout << "Error! Uncorrect g" << std::endl; 
    }
    std::cout << "5 pass" << std::endl;
}

void square_root(int num)
{
    std::string age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    comp(age); 
    if (num < 0)
    {
        throw num;
    }
    else
    {
        std::cout << num << "^(1/2) = " << sqrt(num) << std::endl;
    }
    std::cout << " 4 pass" << std::endl;
}

void dive(int dvd, double dvr)
{
    int num; 
    std::cout << "Sqrt from";
    std::cin >> num;
    try
    {
        square_root(num);
    }
    catch(int num)
    {
        std::cout << "You cant use negative numbers" << std::endl;
    }
    if((dvd == 0) && (dvr != 0))
    {
        throw dvd;
    }
    else if((dvd != 0) && (dvr == 0))
    {
        throw dvr;
    }
    else if ((dvd != 0) && (dvr == 0))
    {
        throw dvr;
    }
    else
    {
        std::cout << dvd << " / " << dvr << " = " << dvd / dvr << std::endl;
    }
    std::cout << "3 pass" << std::endl;
}

void start()
{
    setlocale(LC_ALL, "Russian");
    int dividend; 
    int divider; 
    std::cout << "Divided: ";
    std::cin >> dividend; 
    std::cout << "Divider: ";
    std::cin >> divider;
    try
    {
       dive(dividend, divider);
    }
    catch(int dividend)
    {
        std::cout << "0 / (number) = 0" << std::endl;
    }
    catch (double divider)
    {
        std::cout << "You cant use 0 for division" << std::endl;
    }
    std::cout << "2 pass" << std::endl;
}








