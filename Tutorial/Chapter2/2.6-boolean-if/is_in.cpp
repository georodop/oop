//Purpose: function that checks if a given number is part of a given list
//Found here: https://stackoverflow.com/questions/15181579/c-most-efficient-way-to-compare-a-variable-to-multiple-values
//Due to initializer_list this needs -std=c++11 in order to compile

#include <initializer_list>

template <typename T>
bool is_in(const T& val, const std::initializer_list<T>& list)
{
    for (const auto& i : list) {
        if (val == i) {
            return true;
        }
    }
    return false;
}