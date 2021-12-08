#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
int main()
{
    vector<string> ve = {"a", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b"};

    vector<string>::iterator x;

    for (x = ve.begin(); x != ve.end(); ++x) {
        for(char &c : *x) c = toupper(c);
    }

    for (x = ve.begin(); x!= ve.end(); ++x) cout << *x << " ";

    return 0;
}