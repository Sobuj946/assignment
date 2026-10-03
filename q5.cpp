#include <iostream>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction() : numerator(0), denominator(1) {}
    Fraction(int num, int den) {
        if (den == 0) {
            cout << "Denominator cannot be zero. Setting to 1." << endl;
            den = 1;
        }
        numerator = num;
        denominator = den;
    }

    void getFraction() {
        char slash;
        cout << "Enter fraction (format: a/b): ";
        cin >> numerator >> slash >> denominator;
        if (denominator == 0) {
            cout << "Denominator cannot be zero. Setting to 1." << endl;
            denominator = 1;
        }
    }

    void display() const {
        cout << numerator << "/" << denominator;
    }

    Fraction operator+(const Fraction &other) const {
        int num = numerator * other.denominator + other.numerator * denominator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

    Fraction operator/(int divisor) const {
        return Fraction(numerator, denominator * divisor);
    }
};

int main() {
    int n;
    cout << "Enter the number of fractions: ";
    cin >> n;

    Fraction *fractions = new Fraction[n];
    Fraction sum;

    for (int i = 0; i < n; i++) {
        fractions[i].getFraction();
        sum = sum + fractions[i];
    }

    Fraction average = sum / n;

    cout << "The average of the fractions is: ";
    average.display();
    cout << endl;

    delete[] fractions;
    return 0;
}

