#ifndef IS_IN_H
#define IS_IN_H

#include <initializer_list>

template <typename T>
bool is_in(const T& val, const std::initializer_list<T>& list);

#endif