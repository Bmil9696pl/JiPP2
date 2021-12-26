#include "iostream"
#include "../include/linie.h"
#include <string>
#include "fstream"
using namespace std;



int main()
{
    string line;
    string AAAAA = ",";
    char pom2 = AAAAA[0];

    ifstream linie(R"(C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\lab10\linie\linie)");
    ofstream tramwaje(R"(C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\lab10\linie\tramwaje)");
    ofstream autobusy(R"(C:\Users\bartek\CLionProjects\JiPP2-Bart-omiej-Milecki\lab10\linie\autobusy)");

    while(!linie.eof()){
        getline(linie,line);
        char pom = line[2];
        if(pom == pom2)
            tramwaje << line << endl;
        else
            autobusy << line << endl;
        line = "";
    }
    linie.close();
    tramwaje.close();
    autobusy.close();
    return 0;
}