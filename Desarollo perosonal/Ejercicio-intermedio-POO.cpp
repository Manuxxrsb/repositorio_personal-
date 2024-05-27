#include <iostream>
#include <string>

using namespace std;

enum Fruta { Durazno, Frutilla, Manzana, Papaya };

class Bebestible {
private:
    int volumen;

public:
    Bebestible(void) : volumen(250) {}
    Bebestible(int vol) : volumen(vol) {}
    Bebestible(const Bebestible& otro) : volumen(otro.volumen) {}
    virtual ~Bebestible(void) {}

    int getVolumen(void) { return volumen; }
    void setVolumen(int vol) { volumen = vol; }

    // Método virtual puro para presentar la información del bebestible
    virtual void presentacion() = 0;
};

class Gaseosa : public Bebestible {
private:
    string nombre;

public:
    Gaseosa(void) : nombre("Coca-Cola") {}
    Gaseosa(string nom, int vol) : nombre(nom), Bebestible(vol) {}
    Gaseosa(const Gaseosa& otro) : nombre(otro.nombre), Bebestible(otro) {}
    ~Gaseosa(void) {}

    string getNombre(void) { return nombre; }
    void setNombre(string nom) { nombre = nom; }

    // Implementación del método virtual
    void presentacion() override {
        cout << "Gaseosa - Nombre: " << nombre << ", Volumen: " << getVolumen() << endl;
    }
};

class JugoNatural : public Bebestible {
private:
    Fruta nombre;

public:
    JugoNatural(void) : nombre(Manzana) {}
    JugoNatural(Fruta nom, int vol) : nombre(nom), Bebestible(vol) {}
    JugoNatural(const JugoNatural& otro) : nombre(otro.nombre), Bebestible(otro) {}
    ~JugoNatural(void) {}

    Fruta getNombre(void) { return nombre; }
    void setNombre(Fruta nom) { nombre = nom; }

    // Implementación del método virtual
    void presentacion() override {
        string strnombre;

        switch (nombre) {
            case Durazno:
                strnombre = "Durazno";
                break;
            case Frutilla:
                strnombre = "Frutilla";
                break;
            case Manzana:
                strnombre = "Manzana";
                break;
            case Papaya:
                strnombre = "Papaya";
                break;
        }
        cout << "Jugo Natural - Fruta: " << strnombre << ", Volumen: " << getVolumen() << endl;
    }
};

int main() {
    cout << "Probando instancia de jugo" << endl;
    JugoNatural j;
    j.presentacion();

    cout << "Probando instancia de bebida" << endl;
    Gaseosa b;
    b.presentacion();

    cout << "Probando otra bebida" << endl;
    Gaseosa otra("Fanta", 300);
    otra.presentacion();

    return 0;
}