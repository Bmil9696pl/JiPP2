#include <iostream>
#include "../include/node.h"

using namespace std;



int main(){
    Node a(1, 1);
    Node b(4,5);
    cout << pointsDistance(a, b) << endl;
}