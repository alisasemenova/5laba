#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm> 
#include "FirstTask.h"
#include "SecondTask.h"
#include "ThirdTask.h"

int returndiv(int dividend, int divisor);

int main() 
{
    setlocale(LC_ALL, "rus");

     /*������� 1*/
    std::cout << "������� x � y: ";
    int x, y; // ��� ������� �� �������� ������
    std::cin >> x >> y;
    std::cout << "\n";
    std::vector <int> vec1 = { 2 }, vec2 = { 2 };

    for (int i = 0; i < x - 1; ++i) { //�������� ������ ������ � �������
        vec1 = vecsum(vec1, vec1);
    }
    print(vec1, vec1.size());
    std::cout << "\n";

    for (int i = 0; i < y - 1; ++i) { //�������� ������ ������ � �������
        vec2 = vecsum(vec2, vec2);
    }
    print(vec2, vec2.size());
    std::cout << "\n";
    std::vector <int> vecanswer = vecsub(vec1, vec2, std::max(vec1.size(), vec2.size()), std::min(vec1.size(), vec2.size()));

    print(vecanswer, (int)vecanswer.size());

    /* ������� 2*/
    
    int divisor = 1000;
    int dividend = 10;
    int result = returndiv(divisor, dividend);
    std::cout << divisor << " / " << dividend << " = " << result;
    

    /*������� 3*/
    
    start();
    

    return 0;

}