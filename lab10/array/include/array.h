#ifndef JIPP2_NODE_H
#define JIPP2_NODE_H

template<typename T, int size>
class Array{
    T *arr;

public:
    Array(){
        arr = new T [size];
    };
};

#endif //JIPP2_NODE_H