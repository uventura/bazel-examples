#include "hello-greet.h"

std::string get_greet(std::string message)
{
    std::string result = "Hello " + message;
    return result;
};