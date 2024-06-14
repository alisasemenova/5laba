#include <iostream>

/**
 * @brief функция возвращает частное от деления двух знаковых целых чисел 
 * используя операции битового сдвига и побитовых операций.
 * 
 * @param dividend - делимое
 * @param divisor - делитель
 * @return int - частное от деления
 */

int returndiv(int dividend, int divisor){
    int result = 0;
    //определение знака числа путём битовых операций
    int sign = ((dividend & (1 << 31)) != (divisor & (1 << 31))) ? -1 : 1; //определение знака числа
    dividend = (dividend >= 0) ? dividend : -divisor; 
    divisor = (divisor >= 0) ? divisor : -divisor;
    divisor = ~divisor + 1;
    while(dividend + divisor >= 0){
        result++;
        dividend = dividend + divisor;
    }
    result = result * sign;
    
    if(result > INT_MAX)
    {
        return INT_MAX;
    }
    if(result < INT_MIN)
    {
        return INT_MIN;
    }
    return result;
}