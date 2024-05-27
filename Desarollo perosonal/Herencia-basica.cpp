#include <iostream>

using namespace std;

//clase padre
class Animal {
private:
    int altura;
public:
    //metodos
    void comer()  {
        cout << "El animal está comiendo." <<endl;
    }
    void saltar(){
        cout<<"el animal salta"<<endl;
    }
    
    void set_altura(int a){
        this->altura=a;
    }
    int get_altura(){
        return this->altura;
    }
    
};

// Clase hija
class Perro : public Animal {
public:
    void ladrar()  {
        cout << "El perro está ladrando." << endl;
    }
    void ver(){
        cout<<"ALTURA es "<< get_altura() << endl;
    }
};

int main()
{
    Perro miperro;
    
    miperro.comer();
    
    miperro.ladrar();
    
    miperro.saltar();
    //--------------------------
    
    miperro.set_altura(180);
    
    miperro.ver();
    
    return 0;
}
