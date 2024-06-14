#include <iostream>
#include <vector>
#include <algorithm> 
#include <cmath>

bool test(std::vector <int> vec1, std::vector <int> vec2) {
    if (vec1.size() > vec2.size()) return true;
    else if (vec1.size() < vec2.size()) return false;
    else {
        for (int i = vec2.size() - 1; i >= 0; --i) {
            if (vec2[i] < vec1[i]) return true;
            else if (vec2[i] > vec1[i]) return false;
        }
    }
    return true;
}

void print(std::vector <int> vec, int sz) {
    for (int i = sz - 1; i >= 0; --i) {
        std::cout << vec[i];
    }
    std::cout << '\n';
}

std::vector <int> cleaner(std::vector <int> vec) {
    for (int i = vec.size() - 1; i >= 0; --i) {
        if (vec[i] == 0) vec.pop_back();
        else break;
        if (vec.size() == 1) break;
    }
    return vec;
}

std::vector <int> vecsum(std::vector <int> vec1, std::vector <int> vec2) {
    std::vector <int> resultvector; // Число-вектор с результатом
    int sz = vec1.size();
    resultvector.push_back(0);
    resultvector[0] = (vec1[0] + vec2[0]) % 10;
    int md = (vec1[0] + vec2[0]) / 10; // Переменная остатка
    for (int i = 1; md > 0 || i < sz; ++i) {
        vec1.push_back(0);
        vec2.push_back(0);
        resultvector.push_back(0);
        resultvector[i] = (vec1[i] + vec2[i] + md) % 10;
        md = (vec1[i] + vec2[i] + md) / 10;
    }
    return resultvector;
}

std::vector <int> vecsub(std::vector <int> vec1, std::vector <int> vec2, int maxs, int mins) {
    std::vector <int> resultvector; // Число-вектор с результатом
    resultvector.push_back(0);
    if (!test(vec1, vec2))
    {
        resultvector[0] = -1;
        return resultvector;
    }
    else {
        for (int i = 0; i < mins; ++i) { // Вычитаем из 1-ого числа 2-е 
            resultvector.push_back(0);
            resultvector[i] = (vec1[i] - vec2[i]);
            if (resultvector[i] < 0) {
                for (int j = i + 1; j < maxs; j++) {
                    if (vec1[j] > 0) {
                        vec1[j] -= 1;
                        for (int k = j - 1; k > i; --k) {
                            vec1[k] += 9;
                        }
                        resultvector[i] += 10;
                        break;
                    }
                }
            }
        }
        resultvector = cleaner(resultvector);
        for (int i = mins; i < maxs; i++) { // Переписываем элементы 1-го числа, которые не задело вычитание
            resultvector.push_back(vec1[i]);
        }
        return cleaner(resultvector);
        //return resultvector;
    }
}
