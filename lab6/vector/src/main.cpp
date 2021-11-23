#include <iostream>
#include "../include/vector.h"

using namespace std;



int main(){
    Vector babus(2,2);
    Vector yiyi = babus*2.0;
    yiyi.print();
    Vector solobolo = 2.0*babus;
    cout << solobolo << endl;
    solobolo.print();
    return 0;
}