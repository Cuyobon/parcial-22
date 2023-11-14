#include <iostream>


using namespace std;

class cuarto {
private:
    int numerocuarto;
    string item1, item2, item3, item4, item5;
    string moob1, moob2, moob3, moob4, moob5;
    string nombrecuarto, descripcioncuarto;
    string eleccion;
public:
    cuarto(int, string, string, string, string, string,
        string, string, string, string, string, string, string);
    void mostrarcuarto();
    
};

cuarto::cuarto(int _numerocuarto, string _item1, string _item2, string _item3, string _item4, string _item5,
    string _moob1, string _moob2, string _moob3, string _moob4, string _moob5, string _nombrecuarto, string _descripcioncuarto)
{
    numerocuarto = _numerocuarto; 
    item1 = _item1;
    item2 = _item2;
    item3 = _item3;
    item4 = _item4;
    item5 = _item5;
    moob1 = _moob1;
    moob2 = _moob2;
    moob3 = _moob3;
    moob4 = _moob4;
    moob5 = _moob5;
    nombrecuarto = _nombrecuarto;
    descripcioncuarto = _descripcioncuarto;
}

class jugador {
private: 
    int llave=0;

public:
    void tienesllave();
    void accesocuarto10();
};
int main()
{
    cuarto c1 = cuarto(1, "espada", "trapeador", "pistola", "chocolate", "pluma", "arania", "slime", "esqueleto", "zombie", "mediometro", "miscelaniachuy", "dosporuno");
    cuarto c2 = cuarto(2, "espada", "trapeador", "pistola", "chocolate", "pluma", "arania", "slime", "esqueleto", "zombie", "mediometro", "pozoleria", "pozole");
    cuarto c3 = cuarto(3, "espada", "trapeador", "pistola", "chocolate", "pluma", "arania", "slime", "esqueleto", "zombie", "mediometro", "panaderia", "panochon");
  
    jugador j1 = jugador();
    c1.mostrarcuarto();
    c2.mostrarcuarto();
    c3.mostrarcuarto();
   

    //j1.tienesllave();
    //j1.accesocuarto10();
}
void cuarto::mostrarcuarto() {
    cout << "Este es el cuarto:  " << numerocuarto << " El cuarto se llama: " << nombrecuarto << endl;
    cout << descripcioncuarto << endl;
    cout << "Los items que hay son: " << item1 << "," << item2 << "," << item3 << "," << item4 << "," << item5 << "," << endl;
    cout<< "Estos son los mounstros de la sala: " << moob1 << "," << moob2 << "," << moob3 << "," << moob4 << "," << moob5 << "," << endl;
    //cout << "Ganas la pelea" << endl;
    cout << "¿A que sala quieres ir? " << endl;
    cin >> numerocuarto;
    if (numerocuarto == 3) {
    }
}
void jugador::tienesllave() {
    cout << "Agarra la llave de este cuarto y te vas" << endl;
    llave = 1;

}
void jugador::accesocuarto10() {
    if (llave == 1) {
        cout << "Abres la puerta del cuarto 10" << endl;
    }
}


