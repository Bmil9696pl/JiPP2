#include <iostream>
#include <list>
using namespace std;

/*
int main()
{
    list<int> li= { 10, 20, 75, 50, 75 };


    list<int>::iterator x;

    cout<<"Przejście po elementach listy do przodu."<<endl;


    for (x = li.begin(); x != li.end(); x++) {
//używanie iteratora wejściowego do przechodzenia przez listę
        cout << (*x) << " ";
    }
    cout<<endl;
    cout<<"Przechodzenie przez elementy listy w kierunku wstecznym"<<endl;

    for (x=li.end();x!=li.begin();--x)
    {
        if (x != li.end())
        {
            cout << (*x) << " ";
        }
    }
    cout << (*x) << endl;

    for (x = li.begin(); x != li.end(); x++) {
//iterator wyjścia do zmiany lub przypisania nowych wartości do wszystkich
// elementów listy
        *x = 4;
    }

    cout<<"Wynik: "<<endl;
    for (x = li.begin(); x != li.end(); x++) {

        cout << (*x) << " ";
    }
    return 0;
}
*/

int main()
{
    list<int> li= {10, 20, 42, 50, 75};
    list<int>::iterator x;

    cout<<"Przejście po elementach listy do przodu "<<endl;


    for (x = li.begin(); x != li.end(); x++) {

        cout << (*x) << " "; //używanie iteratora wejściowego do przechodzenia przez listę
    }
    cout<<endl;

    list<int>::iterator ee = li.begin();

    advance(ee, 3);
    cout << "Element wskazywany przez iterator po użyciu metody Advance():";
    cout << *ee << " ";
    cout<<endl;
    list<int>::iterator A = li.begin();
    list<int>::iterator B = li.end();

    auto aa = next(A, 2);


    auto  bb = prev(B, 2);

    cout << "Element wskazany za pomocą next() to : ";
    cout << *aa << " ";
    cout << endl;

    cout << "Element wskazany za pomocą prev() to : ";
    cout << *bb << " ";
    cout << endl;

    return 0;
}
