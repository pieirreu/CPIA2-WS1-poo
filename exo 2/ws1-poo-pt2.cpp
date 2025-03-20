#include <iostream>
using namespace std;

class Fraction {
private:
    int numerateur;
    int denominateur;
public:
    // Constructeur par défaut (initialise la fraction à 1/1)
    Fraction() : numerateur(1), denominateur(1) {}

    // Constructeur avec paramètres
    Fraction(int n, int d) : numerateur(n), denominateur(d) {}

    // Getters
    int getNumerateur() const {
        return numerateur;
    }
    
    int getDenominateur() const {
        return denominateur;
    }

    // Setters
    void setNumerateur(int n) {
        numerateur = n;
    }
    
    void setDenominateur(int d) {
        denominateur = d;
    }

    // Méthode d'addition
    Fraction add(const Fraction &f) const {
        // (a/b) + (c/d) = (a*d + b*c)/(b*d)
        int num = numerateur * f.denominateur + denominateur * f.numerateur;
        int den = denominateur * f.denominateur;
        return Fraction(num, den);
    }
    
    // Méthode de soustraction
    Fraction minus(const Fraction &f) const {
        // (a/b) - (c/d) = (a*d - b*c)/(b*d)
        int num = numerateur * f.denominateur - denominateur * f.numerateur;
        int den = denominateur * f.denominateur;
        return Fraction(num, den);
    }
    
    // Méthode de multiplication
    Fraction multiply(const Fraction &f) const {
        // (a/b) * (c/d) = (a*c)/(b*d)
        int num = numerateur * f.numerateur;
        int den = denominateur * f.denominateur;
        return Fraction(num, den);
    }
    
    // Méthode de division
    Fraction divide(const Fraction &f) const {
        // (a/b) / (c/d) = (a*d)/(b*c)
        int num = numerateur * f.denominateur;
        int den = denominateur * f.numerateur;
        return Fraction(num, den);
    }
};

int main() {
    /* Test des constructeurs */
    Fraction f0;
    if (f0.getNumerateur() == 1 && f0.getDenominateur() == 1) {
        cout << "[OK] Default constructor works" << endl;
    }
    else {
        cout << "[FAILURE] Default constructor doesn't work" << endl;
    }

    Fraction f1(1, 2);
    if (f1.getNumerateur() == 1 && f1.getDenominateur() == 2) {
        cout << "[OK] Constructor with parameters works" << endl;
    }
    else {
        cout << "[FAILURE] Constructor with parameters doesn't work" << endl;
    }

    Fraction f2(3, 4);

    /* Test de l'addition */
    Fraction f3 = f1.add(f2);
    if (f3.getNumerateur() == 10 && f3.getDenominateur() == 8) {
        cout << "[OK] Add method works" << endl;
    }
    else {
        cout << "[FAILURE] Add method doesn't work" << endl;
    }

    /* Test de la soustraction */
    f3 = f1.minus(f2);
    if (f3.getNumerateur() == -2 && f3.getDenominateur() == 8) {
        cout << "[OK] Minus method works" << endl;
    }
    else {
        cout << "[FAILURE] Minus method doesn't work" << endl;
    }

    /* Test de la multiplication */
    f3 = f1.multiply(f2);
    if (f3.getNumerateur() == 3 && f3.getDenominateur() == 8) {
        cout << "[OK] Multiply method works" << endl;
    }
    else {
        cout << "[FAILURE] Multiply method doesn't work" << endl;
    }

    /* Test de la division */
    f3 = f1.divide(f2);
    if (f3.getNumerateur() == 4 && f3.getDenominateur() == 6) {
        cout << "[OK] Divide method works" << endl;
    }
    else {
        cout << "[FAILURE] Divide method doesn't work" << endl;
    }
    
    return 0;
}
