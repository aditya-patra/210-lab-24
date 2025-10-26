// Goat.h

#ifndef GOAT_H
#define GOAT_H
#include <iostream>
using namespace std;

class Goat {
private:
    string name;
    int age;
    string color;
public: 
    Goat()                          { name = ""; age = 0; color = ""; }
    // write three more constructors
    Goat(string Name) {
        name = Name;
        age = 0;
        color = "";
    }
    Goat(string Name, int Age) {
        name = Name;
        age = age;
        color = "";
    }
    Goat(string Name, int Age, string Color) {
        name = Name;
        age = age;
        color = Color;
    }

    // setters and getters
    void set_name(string n)         { name = n; };
    string get_name() const         { return name; };
    void set_age(int a)             { age = a; };
    int get_age() const             { return age; }
    void set_color(string c)        { color = c; }
    string get_color() const        { return color; }

    // write overloaded < operator for the std::list
    bool operator<(const Goat &other) {
        return name < other->name;
    }
};

#endif