//
// Created by bartek on 12.10.2021.
//
#include "../include/calc.h"
#include<iostream>
using namespace std;

int add(){
    int a, b;
    cout << "podaj pierwsza liczbe" << endl;
    cin >> a;
    cout << endl;
    cout << "podaj druga liczbe" << endl;
    cin >> b;
    cout << endl;
    return a+b;
}

int substract(){
    int a, b;
    cout << "podaj pierwsza liczbe" << endl;
    cin >> a;
    cout << endl;
    cout << "podaj druga liczbe" << endl;
    cin >> b;
    cout << endl;
    return a - b;
}

float volume(){
    int a, b, h, H;
    float P;
    cout << "podaj bok a" << endl;
    cin >> a;
    cout << endl;
    cout << "podaj bok b" << endl;
    cin >> b;
    cout << endl;
    cout << "podaj wysokosc podstawy" << endl;
    cin >> h;
    cout << endl;
    cout << "podaj wysokosc bryly" << endl;
    cin >> H;
    cout << endl;
    P = ((a + b)*h)/2;
    return P*H;
}

void help(){
    cout << "Simple Calculator\n"
            "simpleCalculator [command]\n"
            "\n"
            "Commands:\n"
            "add [a] [b]\n"
            "dodaje dwie liczby [a] i [b]\n"
            "substract [a] [b]\n"
            "odejmuje [b] od [a]\n"
            "volume [a] [b] [h] [H]\n"
            "oblicza objętość graniastoslupa prostego o podstawie trapezu przy pomocy dlugosci podstaw tego trapezu[a] [b],\n"
            "jego wysokosci [h] oraz wysokosci bryly [H]\n"
            "help\n"
            "wypisz to wszystko jeszcze raz" << endl;
}