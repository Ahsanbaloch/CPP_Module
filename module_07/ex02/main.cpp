#include <iostream>
#include "Array.hpp"
#include <stdlib.h>

int main() {
    // Create an Array of 10 ints
    Array<int> arr(10);

    // Set some values
    for (unsigned int i = 0; i < arr.size(); ++i) {
        arr[i] = i * 2;
    }

    // Read the values back
    for (unsigned int i = 0; i < arr.size(); ++i) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    // Try to access an out-of-bounds index
    try {
        std::cout << "arr[10] = " << arr[10] << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}

/* #define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
} */