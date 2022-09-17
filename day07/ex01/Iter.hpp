#pragma once

template <typename T>
void iter(T *array, int length, void callback(const T &element))
{
    for (int i = 0; i < length; i++)
        callback(array[i]);
}
