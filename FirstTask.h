#include <iostream>
#include <vector>
#include <algorithm> 

#ifndef FIRSTTASK_H
#define FIRSTTASK_H

std::vector<int> vecsub(std::vector <int> vec1, std::vector <int> vec2, int maxs, int mins);
std::vector <int> vecsum(std::vector <int> vec1, std::vector <int> vec2);
std::vector <int> cleaner(std::vector <int> vec);
bool test(std::vector <int> vec1, std::vector <int> vec2); 
void print(std::vector <int> vec, int sz); 

#endif