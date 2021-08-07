#include<bits/stdc++.h>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction() {
        cout << "default constructor called" << endl;
    }

    Fraction(int numerator, int denominator) {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void display() {
        cout << "numerator is " << numerator << " " << "denominator is " << denominator << endl;
    }

    ~Fraction() {
        cout << "destructor called" << endl;
    }
};

int main() {
    priority_queue<pair<double, vector<int>>, vector<pair<double, vector<int> > >, greater<> > pq;

    Fraction f1(10, 2);
    f1.display();
}