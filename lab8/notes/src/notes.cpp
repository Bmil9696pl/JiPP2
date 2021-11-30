#include "../include/notes.h"

string Note::getTitle() {
    return title;
}

void Note::setTitle() {
    cout << "Title your note" << endl;
    cin >> title;
}

string TextNote::getContent() {
    return content;
}

void TextNote::setContent() {
    cout << "Write your note" << endl;
    cin >> content;
}