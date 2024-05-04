
// Hecho por Jean Carlos Chata Condori--> UNIVERSIDAD NACIONAL DEL ALTIPLANO

#include <iostream>
#include <winbgim.h>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int randcolor() {
    srand(time(0));
    return (rand() % 15) + 1;
}

void drawJ(int x,int y,int e, int color){
    setcolor(color);
    line(x, y, x+12*e, y);
    line(x+6*e,y,x+6*e, y+22*e);
    line(x+6*e, y+22*e, x, y+22*e );
}
void drawA(int x, int y, int e, int color) {
    setcolor(color);
    line(x, y + 22 * e, x + 6 * e, y);
    line(x + 6 * e, y, x + 12 * e, y + 22 * e);
}
void drawE(int x, int y, int e, int color) {
    setcolor(color);
    line(x, y, x, y + 22 * e);
    line(x, y, x + 12 * e, y);
    line(x, y + 11 * e, x + 8 * e, y + 11 * e);
    line(x, y + 22 * e, x + 12 * e, y + 22 * e);
}
void drawN(int x, int y, int e, int color) {
    setcolor(color);
    line(x, y, x, y + 22 * e);
    line(x, y, x + 8 * e, y + 22 * e);
    line(x + 8 * e, y, x + 8 * e, y + 22 * e);
}
void drawI(int x, int y, int e, int color) {
    setcolor(color);
    line(x + 4 * e, y, x + 4 * e, y + 22 * e);
      line(x, y, x+12*e, y);
       line(x+12*e, y+22*e, x, y+22*e );

}
void drawO(int x, int y, int e, int color) {
    setcolor(randcolor());
    line(x,y,x+12*e,y);
    line(x,y,x,y+22*e);
    line(x+12*e,y,x+12*e,y+22*e);
    line(x,y+22*e,x+12*e,y+22*e);
}
void drawQ(int x, int y, int e, int color) {
    setcolor(color);
    line(x,y,x+12*e,y);
    line(x,y,x,y+22*e);
    line(x+12*e,y,x+12*e,y+22*e);
    line(x,y+22*e,x+12*e,y+22*e);
    line(x+12*e,y+22*e,x+10*e,y+20*e);
}
void drawL(int x, int y, int e, int color) {
    setcolor(color);
    line(x,y,x,y+22*e);
    line(x,y+22*e,x+12*e,y+22*e);
}
void drawH(int x, int y, int e, int color) {
    setcolor(color);
    line(x,y,x,y+22*e);
    line(x+12*e,y,x+12*e,y+22*e);
    line(x,y+11*e,x+12*e,y+11*e);
}
void drawK(int x, int y, int e, int color) {
    setcolor(color);
    line(x,y+11*e,x+12*e,y);
    line(x,y,x,y+22*e);
    line(x,y+11*e,x+12*e,y+22*e);
}
void drawU(int x, int y, int e, int color) {
    setcolor(color);
    line(x, y, x, y + 17 * e);
    line(x + 12 * e, y, x + 12 * e, y + 17 * e);
    arc(x + 6 * e, y + 17 * e, 180, 0, 6 * e);
}
void drawB(int x, int y, int e, int color) {
    setcolor(color);
    line(x, y, x, y + 22 * e);
    line(x, y, x + 10 * e, y);
    line(x, y + 11 * e, x + 10 * e, y + 11 * e);
    line(x, y + 22 * e, x + 10 * e, y + 22 * e);
    //arc(x + 5 * e, y + 11 * e, 90, 270, 5 * e);
    //line(x+12*e,y,x+12*e,y+22*e);
    ellipse(x+10*e,y+5.5*e,270,90,2*e,5.5*e);
    ellipse(x+10*e,y+16.5*e,270,90,2*e,5.5*e);
}
void drawC(int x, int y, int e, int color) {
    setcolor(color);
    line(x,y,x+12*e,y);
    line(x,y,x,y+22*e);
    line(x,y+22*e,x+12*e,y+22*e);
}
void drawD(int x, int y, int e, int color) {
    setcolor(color);
    line(x, y, x, y + 22 * e);
    line(x, y, x + 9 * e, y);
    line(x, y + 22 * e, x + 9 * e, y + 22 * e);
    ellipse(x + 9 * e, y + 11 * e, 270, 90, 3 * e, 11*e);
}
void drawF(int x, int y, int e, int color) {
    setcolor(color);
    line(x, y, x, y + 22 * e);
    line(x, y, x + 10 * e, y);
    line(x, y + 11 * e, x + 8 * e, y + 11 * e);
}
void drawG(int x, int y, int e, int color) {
    setcolor(color);
    line(x,y,x+12*e,y);
    line(x,y,x,y+22*e);
    line(x+12*e,y+11*e,x+12*e,y+22*e);
    line(x,y+22*e,x+12*e,y+22*e);
    line(x+12*e,y+11*e,x+6*e,y+11*e);
}
void drawM(int x, int y, int e, int color) {
    setcolor(color);
    line(x, y, x, y + 22 * e);
    line(x, y, x + 5 * e, y + 11 * e);
    line(x + 5 * e, y + 11 * e, x + 10 * e, y);
    line(x + 10 * e, y, x + 10 * e, y + 22 * e);
}
void drawP(int x, int y, int e, int color) {
    setcolor(color);
    line(x, y, x, y + 22 * e);
    line(x, y, x + 10 * e, y);
    line(x, y + 11 * e, x + 10 * e, y + 11 * e);
    ellipse(x + 10 * e, y+5.5*e, 270, 90, 2*e, 5.5*e);
}
void drawR(int x, int y, int e, int color) {
    setcolor(color);
    line(x, y, x, y + 22 * e);
    line(x, y, x + 10 * e, y);
    line(x, y + 11 * e, x + 10 * e, y + 11 * e);
    line( x + 10 * e, y + 11 * e,x+12*e, y+22*e);
    ellipse(x + 10 * e, y+5.5*e, 270, 90, 2*e, 5.5*e);
}
void drawS(int x, int y, int e, int color) {
    setcolor(color);
    line(x, y, x + 12 * e, y);
    line(x, y+22*e, x + 12 * e, y+22*e);

    line(x, y, x, y + 11 * e);
    line(x+12*e, y+11*e, x+12*e, y + 22 * e);

    line(x, y + 11 * e, x + 12 * e, y + 11 *e);
}
void drawT(int x, int y, int e, int color) {
    setcolor(color);
    line(x, y, x + 12 * e, y);
    line(x + 6 * e, y, x + 6 * e, y + 22 * e);
}
void drawV(int x, int y, int e, int color) {
    setcolor(color);
    line(x, y, x + 6 * e, y + 22 * e);
    line(x + 6 * e, y + 22 * e, x + 12 * e, y);
}
void drawY(int x, int y, int e, int color) {
    setcolor(color);
    line(x, y, x + 6 * e, y + 11 * e);
    line(x + 6 * e, y + 11 * e, x + 12 * e, y);
    line(x + 6 * e, y + 11 * e,x + 6 * e,  y + 22 * e);
}
void drawW(int x, int y, int e, int color) {
    setcolor(color);
    line(x, y, x + 3 * e, y + 22 * e);
    line(x + 3 * e, y + 22 * e, x + 6 * e, y + 11 * e);
    line(x + 6 * e, y + 11 * e, x + 9 * e, y + 22 * e);
    line(x + 9 * e, y + 22 * e, x + 12 * e, y);
}
void drawX(int x, int y, int e, int color) {
    setcolor(color);
    line(x, y, x + 8 * e, y + 22 * e);
    line(x + 8 * e, y, x, y + 22 * e);
}
void drawZ(int x, int y, int e, int color) {
    setcolor(color);
    line(x, y, x + 8 * e, y);
    line(x + 8 * e, y, x, y + 22 * e);
    line(x, y + 22 * e, x + 8 * e, y + 22 * e);
}
void drawesp(int x, int y,int e){
    setcolor(0);
    line(x,y,x+2*e,y);
}
void dibujar(char p,int xpe,int i,int e,int ype){
    switch(p) {
    case 'A':
        drawA(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'B':
        drawB(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'C':
        drawC(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'D':
        drawD(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'E':
        drawE(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'F':
        drawF(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'G':
        drawG(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'H':
        drawH(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'I':
        drawI(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'J':
        drawJ(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'K':
        drawK(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'L':
        drawL(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'M':
        drawM(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'N':
        drawN(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'O':
        drawO(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'P':
        drawP(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'Q':
        drawQ(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'R':
        drawR(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'S':
        drawS(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'T':
        drawT(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'U':
        drawU(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'V':
        drawV(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'W':
        drawW(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'X':
        drawX(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'Y':
        drawY(xpe + i * 20 * e, ype, e, randcolor());
        break;
    case 'Z':
        drawZ(xpe + i * 20 * e, ype, e, randcolor());
        break;
    default:
        break;
}
}

void modoDVDgaa(string cad, int e, int vel){
    const int screenWidth = 1500;
    const int screenHeight = 800;
    string cadena = cad;

    //pocicion donde incia #arriba peru
    int xpe = 100;
    int ype = 100;
    char p;

    int dx = vel, dy = vel;
    srand(time(0));

    while (true) {
        cleardevice();
        xpe += dx;//Usas la velocidad para mover la palabra
        ype += dy;

        if (xpe <= 0 || xpe >= screenWidth - cadena.size() * 20 * e) {
            dx = -dx; // Cambiamos la dirección de X
        }
        if (ype <= 0 || ype >= screenHeight) {
            dy = -dy; // Cambiamos la dirección de Y
        }

        for (int i = 0; i < cadena.size(); i++) {
            p = cadena[i];
            dibujar(p,xpe, i, e, ype);
        }
        delay(10);
    }
}

void modoDVDgaa(string cad){
    int escala, velocidad, go;
    cout<<"Bien ahora escoge el tamanio del 1 al 5"<<endl;
    cin>>escala;

    cout<<"Bien y ahora escoge la velocidad del 1 al 10"<<endl;
    cin>>velocidad;

    cout<<"presiona 1 para continuar"<<endl;
    cin>>go;

    if(go == 1){
        modoDVDgaa(cad, escala, velocidad);
    }
}

void mostrar_centro(string cad){
    char p;
    int empezar;
    cout<<"presione 1 para continuar";
    cin>>empezar;
    int a = cad.size()*20*2.5;
    if(empezar == 1){
    for (int i = 0; i < cad.size(); i++) {
            p = cad[i];
            setlinestyle(1,0,15);
            dibujar(p,750-a, i, 5, 300);
    }}
}

void mostrar_en_bucle(string cadena){
    int vel;
    int e = 7; // Escala
    const int screenWidth = 1500;
     // Inicializamos xpe en 0 para que la cadena empiece desde la izquierda

    cout << endl << "Ingrese velocidad: ";
    cin >> vel;

    srand(time(0));

    int empezar;
    cout << "Presione 1 para continuar: ";
    cin >> empezar;

    int a = cadena.size()*20*e;
    int xpe = -a;
    if (empezar == 1) {
        while (true) {
            cleardevice();
            xpe += vel;
            if (xpe >= screenWidth) {
                xpe = -a;
            }
            for (int i = 0; i < cadena.size(); i++) {
                char p = cadena[i];
                setlinestyle(1,0,14);
                dibujar(p, xpe + i * e, i, e, 220);
            }
            delay(10);
        }
    }
}
int main()
{
    string palabra_u_oracion;
    int opp;
    initwindow(1500,800);
    setlinestyle(1,0,11);
    cout<<"HOLA BIENVENIDO"<<endl;
    cout<<"Ingresa el texto a continuacion"<<endl;
    getline(cin, palabra_u_oracion);
    cout<<endl<<"ahora ingresa: "<<endl;
    cout<<endl<<"1. mostrar rebotando (animacion)"<<endl;
    cout<<endl<<"2. mostrar en el centro "<<endl;
    cout<<endl<<"3. mostrar en bucle (animacion) "<<endl;
    cin>>opp;
    switch (opp){
        case 1: modoDVDgaa(palabra_u_oracion);
            break;
        case 2: mostrar_centro(palabra_u_oracion);
            break;
        case 3: mostrar_en_bucle(palabra_u_oracion);
            break;
    }

    getch();
    return 0;
}
