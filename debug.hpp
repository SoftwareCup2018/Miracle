#pragma once
#include<iostream>
#define DEBUG(x) \
        std::cout << "\033[33m[Error on line " << __LINE__ <<  "] " << #x << ": " << x << "\033[0m\n";

