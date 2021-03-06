#pragma once

#include <string>

enum operator_type
{
    OP_NONE,
    PLUS,
    MINUS,
    MULT,
    DIV,
    MOD,
    POW,
};

/**
 * @param tok                      The string containing an Operator (+, -, /, *, ...)
 * @return
 */
operator_type guess_operator_type (const std::string& tok);

/**
 * @param type                      The operator type
 * @return                          The string representing the given operator type
 */
std::string operator_type_to_string (const operator_type& type);

/**
 * @brief                           Returns the priorities for each operator
 *                                  (the higher to more prioritary)
 * @param type                      The operator type
 * @return                          The priority value of the operator type ('+' = 1, '*' = 2, '^' = 3)
 */
int operator_type_to_int (const operator_type& type);