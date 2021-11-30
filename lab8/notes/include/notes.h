#ifndef JIPP2_NODE_H
#define JIPP2_NODE_H

#include "iostream"
using namespace std;

class Note {
    string title;

public:
    string getTitle();
    void setTitle();
    virtual string getContent() = 0;
    virtual void setContent() = 0;
};

class TextNote: public Note{
    string content;
public:
    string getContent();
    void setContent();
};

#endif //JIPP2_NODE_H