/**
 * @file add_Calculator.h
 * @author Adhyyan (you@domain.com)
 * @brief Basic Calculator
 * @version 0.1
 * @date 2022-04-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _ADD_CALCULATOR_H_
#define _ADD_CALCULATOR_H_

typedef enum function_status_t
{
    SUCCESS'
    OVERFLOW,
    UNDERFLOW
}function_status_t;

/**
 * @brief Basic Calculator
 * 
 * @param a a[in] Input
 * @param b b[in] Input
 * @param result result[out] result of the opertion
 * @return function_status_t 
 */

function_status_t add_Calculator(int a, int b, int result);
#endif /* _ADD_CALCULATOR_H_ */