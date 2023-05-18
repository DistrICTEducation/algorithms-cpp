#include "algorithms/fundamentals.h"

#include <limits>
#include <stdexcept>


int Algorithms::searchMaximum(const std::vector<int> &i_array) {

    int current_index = 0;
    int maximum_value = std::numeric_limits<int>::min();
    int N = i_array.size();
    
    if (N == 0) throw std::invalid_argument("Empty collection.");

    while (current_index < N) {
        if (maximum_value < i_array[current_index])
            maximum_value = i_array[current_index];
        current_index++;
    }

    return maximum_value;
}
