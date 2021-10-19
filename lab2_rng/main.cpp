#include <iostream>
using namespace std;

int random (int a, int b){
    int r;
    srand(time(NULL));
    int przedzial = b-a;
    r = rand()%przedzial + a;
    return r;
}

int main()
{
    int a,b;
    cin >> a;
    cin >> b;
    cout << random(a,b) << endl;
    return 0;
}