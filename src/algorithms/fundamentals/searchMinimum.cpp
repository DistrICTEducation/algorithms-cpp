#include "algorithms/fundamentals.h"

#include <limits>
#include <stdexcept>


int Algorithms::searchMinimum(const std::vector<int> &i_array) {

    int current_index = 0;
    int minimum_value = std::numeric_limits<int>::max();
    int N = i_array.size();
    
    if (N == 0) throw std::invalid_argument("Empty collection.");

    while (current_index < N) {
        if (minimum_value > i_array[current_index])
            minimum_value = i_array[current_index];
        current_index++;
    }

    return minimum_value;
}
