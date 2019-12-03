#ifndef FATAL_H
#define FATAL_H

#include <stdio.h>
#include <iostream>
#include <string>

namespace catu
{

void output_fatal(std::string FATAL_PROBLEM_STR)
{
    std::cout << "ERROR INPUT!!\n";
    std::cout << "problem:\n";
    std::cout << FATAL_PROBLEM_STR;
}

}

#endif