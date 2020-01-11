#ifndef FATAL_H
#define FATAL_H

#include <stdio.h>
#include <string.h>
#include <vector>

namespace catu
{
    int read_type(std::vector<char> tt)
    {
        
    }
    void errorf(char* type, ...)
    {
        int len = strlen(type);
        std::vector<char> tt;
        std::vector<int> input_stream;
        for (int i = 0; i < len; i ++)
        {
            int k = i + 1;
            while (k < len)
            {
                if (type[k] == '%')
                {
                    i = k;
                    break;
                }
                tt.push_back(type[k]);
            }
        }
        input_stream.push_back(read_type(tt));
        tt.clear();
    }
}

#endif