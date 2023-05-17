#include <iostream>

#include "algorithms/fundamentals.h"


int main() {

    int myArray1[] = { 4, 2, 1, 3, 5 };
    std::vector<int> myVector1(std::begin(myArray1), std::end(myArray1));
    int minimum_value1 = Algorithms::searchMinimum(myVector1);
    std::cout << "The minimum value is: " << minimum_value1;

    return 0;
}
