#ifndef JIPP2_NODE_H
#define JIPP2_NODE_H

template<class T>
class Vector{

    struct oneVal{
        bool empty;
        T value;
        oneVal* next = nullptr;
    } first;

public:

    Vector() {
        oneVal a;
        a.value = 0;
        a.empty = true;
    }

    Vector(int n){
        oneVal b;
        for (int i = 0; i < n; ++i) {
            oneVal a;
            a.empty = true;
            a.value = 0;
            if(i!=0) b.next = a;
            b = a;
        }
    }

    void add(T x){
        oneVal a;
        a = first;
        while(a.empty==false && a.next != nullptr){
            a;
            a = a.next;
        }
        if(a.next == nullptr){
            oneVal New;
            New.value = x;
            New.empty = false;
            a.next = New;
        }
        else{
            a.value = x;
            a.empty = false;
        }
    }

    void pop(){
        oneVal a;
        a = first;
        while(a.empty==false && a.next != nullptr){
            a;
            a = a.next;
        }
        a.value = 0;
        a.empty = true;
    }

};

#endif //JIPP2_NODE_H