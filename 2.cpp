#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include<cstring>

using namespace std;

class Canine {
    char *name;
public:
    Canine() { name = nullptr; }

    Canine(const char *nm) {
        name = nullptr;
        if (nm && nm[0] != '\0') {
            name = new char[strlen(nm) + 1];
            strcpy(name, nm);
        }
    }

    ~Canine() { delete[] name; }

    void display(ostream &os) const {
        if (name) os << name << ":";
    }
};

class Dog : public Canine {
    int hunger;
    char *name;
public:
    Dog() { hunger = 0; }

    Dog(const char *nm, int hun) {//: Canine(nm) {
        name= nullptr;
        if(nm and nm[0]!='\0'){
            name=new char[strlen(nm)+1];
            strcpy(name, nm);
        }
        hunger=0;
        if(hun>=0 and hun<=100)hunger=hun;
    }

    ostream &bark(ostream &os) const {
        if (hunger < 50)
            os << "Woof Woof" << endl;
        else
            os << "Grmmmm" << endl;
        return os;
    }

    ostream &display(ostream &os) {
        Canine::display(os);
        os << "Hunger Level: " << hunger << endl;
        return os;
    }

    Dog &operator-=(int food) {

        hunger -= food;
        hunger = hunger < 0 ? 0 : hunger;
        bark(cout);
        return *this;
    }

    void play() {
        hunger += 10;
        bark(cout);
    }

    friend ostream &operator<<(ostream &os, Dog &d) {
        return d.display(os);
    }
};

int main() {
    Dog dl("Hosoinu", 30);
    Dog d2("Futoinu", 80);
    dl.Canine::display(cout);
    d2.Canine::display(cout);
    dl.play();
    d2.play();
    cout << endl << dl << d2 << endl; //;//error endl shoud be at the end and must include semicolon at end
    dl -= 30;
    d2 -= 50;
    cout << endl << dl << d2 << endl;//error endl shoud be at the end and must include semicolon at end
    return 0;
}