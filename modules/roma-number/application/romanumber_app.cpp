// Copyright 2019 Pinaev Danil

#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>

#include "include/romanumber_converter.h"

int main(int argc, const char** argv) {
    RomaNumberConverter app;
    std::string output = app(argc, argv);
    std::cout << output.c_str() << std::endl;
    return 0;
}
