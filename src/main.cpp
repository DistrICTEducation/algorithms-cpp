#include <iostream>

#include "algorithms/fundamentals.h"


int main() {

    {
        int myArray1[] = { 4, 2, 1, 3, 5 };
        std::vector<int> myVector1(std::begin(myArray1), std::end(myArray1));
        int minimum_value1 = Algorithms::searchMinimum(myVector1);
        std::cout << "The minimum value is: " << minimum_value1 << std::endl;

        int myArray2[] = { 233, 101, 13, 55, 69, 461, 48, 101, 77 };
        std::vector<int> myVector2(std::begin(myArray2), std::end(myArray2));
        int minimum_value2 = Algorithms::searchMinimum(myVector2);
        std::cout << "The minimum value is: " << minimum_value2 << std::endl;
    }

    {
        int myArray1[] = { 4, 2, 1, 3, 5 };
        std::vector<int> myVector1(std::begin(myArray1), std::end(myArray1));
        int maximum_value1 = Algorithms::searchMaximum(myVector1);
        std::cout << "The maximum value is: " << maximum_value1 << std::endl;

        int myArray2[] = { 233, 101, 13, 55, 69, 461, 48, 101, 77 };
        std::vector<int> myVector2(std::begin(myArray2), std::end(myArray2));
        int maximum_value2 = Algorithms::searchMaximum(myVector2);
        std::cout << "The maximum value is: " << maximum_value2 << std::endl;
    }

    return 0;
}
